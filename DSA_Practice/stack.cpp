#include <iostream>
using namespace std;

// stack implementation using arrays

class Stack
{
private:
      int *array;
      int top = -1;
      int size;

public:
      Stack(int size)
      {
            this->size = size;
            array = new int[size];
      }
      bool isEmpty()
      {
            return top == -1;
      }
      bool isFull()
      {
            return top >= size - 1;
      }
      int peek()
      {
            if (isEmpty())
            {
                  throw "Stack underflow";
            }
            return array[top];
      }
      int count()
      {
            return top + 1;
      }
      void push(int value)
      {
            if (isFull())
            {
                  throw "Stack overflow";
            }
            array[++top] = value;
      }
      int pop()
      {
            if (isEmpty())
            {
                  throw "Stack underflow";
            }
            return array[top--];
      }
      void display()
      {
            for (int i = top; i >= 0; i--)
            {
                  cout << array[i] << endl;
            }
      }
      void change(int index, int newValue)
      {
            if (index < 0)
            {
                  throw "Stack underflow";
            }
            if (index > top)
            {
                  throw "Stack overflow";
            }
            array[index] = newValue;
      }
};

main()
{
}