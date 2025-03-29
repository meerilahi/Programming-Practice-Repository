#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
      T data;
      Node<T> *below;
      Node()
      {
            below = NULL;
      }
};

template <typename S>
class Stack
{
public:
      Node<S> *top;
      Stack()
      {
            top = NULL;
      }
      bool isEmpty()
      {
            return top == NULL;
      }
      void push(S data)
      {
            if (isEmpty())
            {
                  top = new Node<S>;
                  top->data = data;
                  top->below = NULL;
            }
            else
            {
                  Node<S> *newNode = new Node<S>;
                  newNode->data = data;
                  newNode->below = top;
                  top = newNode;
            }
      }
      void pop()
      {
            if (isEmpty())
            {
                  cout << "Tried to pop on empty stack" << endl;
                  throw ;
            }
            Node<S> *oldNode = top;
            top = top->below;
            delete oldNode;
      }

      S getTop()
      {

            if (isEmpty())
            {
                  cout << "Tried to get top of empty stack" << endl;
                  throw;
            }

            return top->data;
      }
};

main()
{
      Stack<int> stack = Stack<int>();

      cout << stack.isEmpty() << endl;
      stack.push(5);
      stack.push(10);
      stack.push(15);
      stack.push(20);
      cout << stack.getTop() << endl;
      stack.pop();
      cout << stack.getTop() << endl;
      stack.pop();
      cout << stack.getTop() << endl;
      stack.pop();
      cout << stack.isEmpty() << endl;
}