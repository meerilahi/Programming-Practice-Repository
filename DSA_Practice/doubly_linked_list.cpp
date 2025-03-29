#include <iostream>
using namespace std;

struct Node
{
      int data;
      Node *next;
      Node *prev;
};

class DoublyLinkedList
{

public:
      Node *head;
      int size;
      DoublyLinkedList()
      {
            head = NULL;
            size = 0;
      }
      bool isEmpty()
      {
            return head == NULL;
      }
      void insertAtStart(int value)
      {
            Node *newNode = new Node;
            newNode->data = value;
            newNode->next = head;
            newNode->prev = NULL;
            if (head != NULL)
            {
                  head->prev = newNode;
            }
            head = newNode;
            size++;
      }
      void insertAtEnd(int value)
      {
            Node *newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;

            if (isEmpty())
            {
                  head = newNode;
                  head->prev = NULL;
            }
            else
            {
                  Node *current = head;
                  while (current->next != NULL)
                  {
                        current = current->next;
                  }
                  newNode->prev = current;
                  current->next = newNode;
            }
            size++;
      }
      void insertAt(int position, int value)
      {
            if (position <= 0 || position > size + 1)
            {
                  cout << "Range Error : Invalid Position" << endl;
                  return;
            }
            else
            {
                  if (position == 1)
                  {
                        insertAtStart(value);
                  }
                  else if (position == size + 1)
                  {
                        insertAtEnd(value);
                  }
                  else
                  {
                        Node *newNode = new Node;
                        newNode->data = value;

                        Node *current = head;
                        for (int i = 1; i < position - 1; i++)
                        {
                              current = current->next;
                        }
                        newNode->prev = current;
                        newNode->next = current->next;
                        current->next = newNode;
                        newNode->next->prev = newNode;
                        size++;
                  }
            }
      }

      void deleteFromStart()
      {
            if (isEmpty())
            {
                  cout << "List is already empty." << endl;
            }
            else
            {
                  Node *temp = head;
                  head = head->next;
                  head->prev = NULL;
                  delete temp;
                  size--;
            }
      }
      void deleteFromEnd()
      {
            if (isEmpty())
            {
                  cout << "List is already empty." << endl;
            }
            else
            {
                  if (head->next == NULL)
                  {
                        Node *temp = head;
                        head = NULL;
                        delete temp;
                  }
                  else
                  {
                        Node *current = head;
                        while (current->next->next != NULL)
                        {
                              current = current->next;
                        }
                        Node *temp = current->next;
                        delete temp;
                        current->next = NULL;
                  }
                  size--;
            }
      }
      void deleteFrom(int position)
      {
            if (position <= 0 || position > size)
            {
                  cout << "Range Error : Invalid Position" << endl;
            }
            else
            {
                  if (position == 1)
                  {
                        deleteFromStart();
                  }
                  else if (position == size)
                  {
                        deleteFromEnd();
                  }
                  else
                  {
                        Node *current = head;
                        for (int i = 1; i < position; i++)
                        {
                              current = current->next;
                        }
                        current->prev->next = current->next;
                        current->next->prev = current->prev;
                        delete current;
                        size--;
                  }
            }
      }

      void showList()
      {
            if (isEmpty())
            {
                  cout << "Nothing to display because list is empty" << endl;
            }
            else
            {
                  Node *current = head;
                  while (current->next != NULL)
                  {
                        current = current->next;
                  }

                  int pos = size;
                  while (current != NULL)
                  {
                        cout << "Position : " << pos << "\t Data : " << current->data << endl;
                        current = current->prev;
                        pos--;
                  }
            }
      }
};

main()
{
      DoublyLinkedList list = DoublyLinkedList();
      cout << "Line 1 executed" << endl;
      list.showList();
      cout << "Line 2 executed" << endl;
      list.insertAtEnd(3);
      cout << "Line 3 executed" << endl;
      list.insertAtStart(1);
      cout << "Line 4 executed" << endl;
      list.insertAt(2, 2);
      cout << "Line 5 executed" << endl;
      list.showList();
      cout << "Line 6 executed" << endl;
      list.deleteFrom(2);
      cout << "Line 7 executed" << endl;
      list.deleteFromStart();
      cout << "Line 8 executed" << endl;
      list.deleteFromEnd();
      cout << "Line 9 executed" << endl;
      list.showList();
      cout << "Line 10 executed" << endl;
}