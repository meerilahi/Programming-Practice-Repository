#include <iostream>
using namespace std;
#define SPACE 5

int max(int a, int b)
{
      return b > a ? b : a;
}

int min(int a, int b)
{
      return b < a ? b : a;
}

void swap(int &a, int &b)
{
      int temp = a;
      a = b;
      b = temp;
}

class Node
{
public:
      int data;
      Node *left;
      Node *right;
      Node()
      {
            left = NULL;
            right = NULL;
      }
};

class BST
{
public:
      Node *root;
      BST()
      {
            root = NULL;
      }
      bool isEmpty()
      {
            return root == NULL;
      }
      void insert(int data)
      {
            if (root == NULL)
            {
                  root = new Node();
                  root->data = data;
            }
            else
            {

                  insertByRoot(data, root);
            }
      }
      void insertByRoot(int data, Node *r)
      {
            if (data == r->data)
            {
                  cout << "Duplicates are not allowded" << endl;
            }
            else if (data < r->data && r->left == NULL)
            {
                  r->left = new Node();
                  r->left->data = data;
            }
            else if (data < r->data)
            {
                  insertByRoot(data, r->left);
            }
            else if (data > r->data && r->right == NULL)
            {
                  r->right = new Node();
                  r->right->data = data;
            }
            else if (data > r->data)
            {
                  insertByRoot(data, r->right);
            }
      }
      void printDFS(int option)
      {

            switch (option)
            {
            case 0:
                  printPreOrderRoot(root);
                  cout << endl;
                  break;
            case 1:
                  printInOrderRoot(root);
                  cout << endl;
                  break;
            case 2:
                  printPostOrderRoot(root);
                  cout << endl;
                  break;
            default:
                  cout << "Invalid Option" << endl;
                  break;
            }
      }
      void printPreOrderRoot(Node *r)
      {
            if (r != NULL)
            {
                  cout << r->data << " ";
                  printPreOrderRoot(r->left);
                  printPreOrderRoot(r->right);
            }
      }
      void printInOrderRoot(Node *r)
      {
            if (r != NULL)
            {
                  printInOrderRoot(r->left);
                  cout << r->data << " ";
                  printInOrderRoot(r->right);
            }
      }
      void printPostOrderRoot(Node *r)
      {
            if (r != NULL)
            {
                  printPostOrderRoot(r->left);
                  printPostOrderRoot(r->right);
                  cout << r->data << " ";
            }
      }
      void print2D()
      {
            print2DbyRoot(root, 5);
      }
      void print2DbyRoot(Node *r, int space)
      {
            if (r != NULL)
            {
                  space += SPACE;
                  print2DbyRoot(r->right, space);
                  cout << endl;
                  for (int i = SPACE; i < space; i++)
                  {
                        cout << " ";
                  }
                  cout << r->data << "\n";
                  print2DbyRoot(r->left, space);
            }
      }
      Node *iterativeSearch(int value)
      {
            Node *temp = root;

            while (temp != NULL)
            {
                  if (value == temp->data)
                  {

                        return temp;
                  }
                  else if (value < temp->data)
                  {
                        temp = temp->left;
                  }
                  else if (value > temp->data)
                  {
                        temp = temp->right;
                  }
            }
            return NULL;
      }
      Node *recursiveSearch(int value)
      {
            return recusiveSearchByRoot(value, root);
      }
      Node *recusiveSearchByRoot(int value, Node *r)
      {
            if (r == NULL)
            {
                  return NULL;
            }
            if (r->data == value)
            {
                  return r;
            }
            else if (value < r->data)
            {
                  return recusiveSearchByRoot(value, r->left);
            }
            else if (value > r->data)
            {
                  return recusiveSearchByRoot(value, r->right);
            }
            return NULL;
      }
      int height()
      {
            return heightbyRoot(root);
      }
      int heightbyRoot(Node *r)
      {
            if (r == NULL)
            {
                  return -1;
            }
            else
            {
                  int left = heightbyRoot(r->left);
                  int right = heightbyRoot(r->right);
                  int max = left > right ? left : right;
                  return max + 1;
            }
      }
      void printBFS()
      {
            int height = this->height();
            for (int i = 0; i <= height; i++)
            {
                  printBFSLevel(root, i);
            }
      }
      void printBFSLevel(Node *r, int i)
      {
            if (r == NULL)
            {
                  return;
            }
            else if (i == 0)
            {
                  cout << r->data << " ";
            }
            else
            {
                  printBFSLevel(r->left, i - 1);
                  printBFSLevel(r->right, i - 1);
            }
      }
      Node *recusiveParentSearchByRoot(int value, Node *r)
      {
            if (r == NULL)
            {
                  return NULL;
            }
            if (r->data == value)
            {
                  return r;
            }

            if (value < r->data)
            {
                  if (r->left == NULL)
                  {
                        return NULL;
                  }
                  else if (r->left->data == value)
                  {
                        return r;
                  }
                  else
                  {
                        return recusiveParentSearchByRoot(value, r->left);
                  }
            }
            else
            {
                  if (r->right == NULL)
                  {
                        return NULL;
                  }
                  else if (r->right->data == value)
                  {
                        return r;
                  }
                  else
                  {
                        return recusiveParentSearchByRoot(value, r->right);
                  }
            }
            return NULL;
      }
      Node *findMin(Node *r)
      {

            Node *temp = r;
            if (r == NULL)
            {
                  return NULL;
            }

            while (temp->left != NULL)
            {
                  temp = temp->left;
            }

            return temp;
      }
      void deleteNode1(int value)
      {
            Node *parent = recusiveParentSearchByRoot(value, root);
            Node *temp = NULL;
            int ch;
            if (parent->left != NULL && value == parent->left->data)
            {
                  temp = parent->left;
                  ch = 0;
            }
            if (parent->right != NULL && value == parent->right->data)
            {
                  temp = parent->right;
                  ch = 1;
            }
            temp = temp == NULL ? parent : temp;

            // For the case when delete node has no or one child
            if (!(temp->left != NULL && temp->right != NULL))
            {
                  Node *child = temp->right != NULL ? temp->right : temp->left;
                  if (ch == 0)
                  {
                        parent->left = child;
                  }
                  if (ch == 1)
                  {
                        parent->right = child;
                  }
                  delete temp;
            }
            // For the case when delete node has two childs
            else
            {
                  Node *minNode = findMin(temp->right);
                  int tempData = minNode->data;
                  deleteNode1(minNode->data);
                  temp->data = tempData;
            }
      }
      Node *deleteNode2(Node *r, int value)
      {
            if (r == NULL)
            {
                  return r;
            }
            else if (value < r->data)
            {
                  r->left = deleteNode2(r->left, value);
            }
            else if (value > r->data)
            {
                  r->right = deleteNode2(r->right, value);
            }
            else
            {
                  if (r->left == NULL)
                  {
                        Node *temp = r->right;
                        delete r;
                        return temp;
                  }
                  else if (r->right == NULL)
                  {

                        Node *temp = r->left;
                        delete r;
                        return temp;
                  }
                  else
                  {
                        Node *temp = this->findMin(r->right);
                        r->data = temp->data;
                        r->right = deleteNode2(r->right, temp->data);
                  }
            }
            return r;
      }
};
main()
{
      BST bst = BST();
      bst.insert(100);
      bst.insert(50);
      bst.insert(200);
      bst.insert(25);
      bst.insert(75);
      bst.print2D();
      bst.insert(10);
      bst.print2D();
}