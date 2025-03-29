#include <iostream>
using namespace std;

// Circular Queue implementation using arrays

class CircularQueue
{
public:
      int *array;
      int size;
      int front;
      int rare;

      CircularQueue(int size)
      {
            this->size = size;
            array = new int[size];
            front = -1;
            rare = -1;
      }
      bool isEmpty()
      {
            return front == -1 && rare == -1;
      }
      bool isFull()
      {
            return (rare + 1) % size == front;
      }
      void enuqe(int value)
      {
            if (isFull())
            {
                  cout << "Queue is full" << endl;
                  return;
            }
            if (isEmpty())
            {
                  front = 0;
                  rare = 0;
            }
            else
            {
                  rare = (rare + 1) % size;
            }
            array[rare] = value;
      };
      int deque()
      {
            int data;

            if (isEmpty())
            {
                  cout << "Queu is already empty" << endl;
                  return 0;
            }
            else if (front == rare)
            {
                  data = array[front];
                  front = rare = -1;
            }
            else
            {
                  data = array[front];
                  front = (front + 1) % size;
            }
            return data;
      }
      void showQueue()
      {
            if (isEmpty())
            {
                  cout << "Queue is empty" << endl;
            }
            else
            {

                  for (int i = front; i <= rare; i++)
                  {
                        cout << array[i] << " ";
                  }
                  cout << endl;
            }
      }
};

main()
{
      CircularQueue queue = CircularQueue(5);
      cout << " IsEmpty : " << queue.isEmpty() << endl; // 1
      cout << " IsFull : " << queue.isFull() << endl;   // 0
      queue.enuqe(1);
      queue.enuqe(2);
      queue.enuqe(3);
      queue.enuqe(4);
      queue.enuqe(5);
      cout << " IsEmpty : " << queue.isEmpty() << endl; // 0
      cout << " IsFull : " << queue.isFull() << endl;   // 1
      queue.showQueue();                                // 1 2 3 4 5
      queue.deque();
      queue.deque();
      queue.deque();
      queue.deque();
      queue.deque();
      cout << " IsEmpty : " << queue.isEmpty() << endl; // 1
      cout << " IsFull : " << queue.isFull() << endl;   // 0
      queue.showQueue();                                // "Queue is Empty"
}