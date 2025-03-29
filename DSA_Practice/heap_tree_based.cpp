#include <iostream>
#include <math.h>
using namespace std;

void swap(int &a, int &b)
{
      int temp = a;
      a = b;
      b = temp;
}

class MinHeap
{
public:
      int *harr;
      int capacity;
      int heap_size;
      MinHeap(int capacity)
      {
            this->capacity = capacity;
            heap_size = 0;
            harr = new int[capacity];
      }
      int parent(int i)
      {
            if ((i - 1) / 2 + 1 <= this->heap_size)
            {
                  return (i - 1) / 2;
            }
            else
            {
                  return -1;
            }
      }
      int left(int i)
      {
            if ((2 * i) + 1 + 1 <= this->heap_size)
            {
                  return (2 * i) + 1;
            }
            else
            {
                  return -1;
            }
      }
      int right(int i)
      {
            if ((2 * i) + 2 + 1 <= this->heap_size)
            {
                  return (2 * i) + 2;
            }
            else
            {
                  return -1;
            }
      }
      int linearSearch(int value)
      {
            for (int i = 0; i < heap_size; i++)
            {
                  if (harr[i] == value)
                  {
                        return i;
                  }
            }
            return -1;
      }
      int height()
      {
            return ceil(log(heap_size + 1)) - 1;
      }
      void heapify(int index)
      {
            while (index > 0 && harr[index] < harr[parent(index)])
            {
                  swap(harr[index], harr[parent(index)]);
                  index = parent(index);
            }
      }
      void insert(int value)
      {
            if (heap_size >= capacity)
            {
                  cout << "Heap overflow" << endl;
            }
            else
            {
                  heap_size++;
                  harr[heap_size - 1] = value;
                  heapify(heap_size - 1);
            }
      }
      void minHeapify(int index)
      {
            int l = left(index);
            int r = right(index);
            int smallest = index;

            if (l != -1 && harr[index] > harr[l])
            {
                  smallest = l;
            }
            if (r != -1 && harr[smallest] > harr[r])
            {
                  smallest = r;
            }
            if (smallest != index)
            {
                  swap(harr[index], harr[smallest]);
                  minHeapify(smallest);
            }
      }
      int extractMin()
      {
            if (heap_size == 0)
            {
                  return INT_MAX;
            }
            else if (heap_size == 1)
            {
                  heap_size--;
                  return harr[0];
            }
            else
            {
                  int min = harr[0];
                  harr[0] = harr[heap_size - 1];
                  heap_size--;
                  minHeapify(0);
                  return min;
            }
      }
      void deleteKey(int index)
      {

            harr[index] = -1;
            while (index > 0 && harr[index] < harr[parent(index)])
            {
                  swap(harr[index], harr[parent(index)]);
                  index = parent(index);
            }
            extractMin();
      }
      void heapSortPrint()
      {
            int size = heap_size;
            int *temp = new int[size];
            for (int i = 0; i < size; i++)
            {
                  temp[i] = extractMin();
            }
            for (int i = 0; i < size; i++)
            {
                  harr[i] = temp[i];
            }
            heap_size = size;
            for (int i = 0; i < size; i++)
            {
                  cout << harr[i] << " ";
            }
            cout << endl;
            delete temp;
      }
};

main()
{
      MinHeap minHeap = MinHeap(20);
      minHeap.insert(15);
      minHeap.insert(100);
      minHeap.insert(30);
      minHeap.insert(45);
      minHeap.insert(40);
      minHeap.insert(25);
      minHeap.insert(65);
      minHeap.insert(5);
      for (int i = 0; i < minHeap.heap_size; i++)
      {
            cout << minHeap.harr[i] << " ";
      }
      cout << endl;

      minHeap.heapSortPrint();

      for (int i = 0; i < minHeap.heap_size; i++)
      {
            cout << minHeap.harr[i] << " ";
      }
}