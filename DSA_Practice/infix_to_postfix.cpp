#include <iostream>
#include <stack>
using namespace std;

bool isOpr(char ch)
{

      return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

bool isBrkt(char ch)
{
      return ch == '(' || ch == ')';
}

bool isOpnBrkt(char ch)
{
      if (ch == '(')
      {
            return true;
      }
      if (ch == ')')
      {
            return false;
      }
      throw "Not a bracket";
}

bool isHigherPre(char opr1, char opr2)
{
      if ((opr1 != '+' && opr1 != '-' && opr1 != '*' && opr1 != '/') || (opr2 != '+' && opr2 != '-' && opr2 != '*' && opr2 != '/'))
      {
            cout << opr1 << " " << opr2 << endl;
            throw "Not an Operator";
      }

      if ((opr1 == '*' || opr1 == '/') && (opr2 == '+' || opr2 == '-'))
      {
            return true;
      }

      return false;
}

string infixToPostfix(string infix)
{
      stack<char> stack;
      string postfix;

      for (int i = 0; i < infix.length(); i++)
      {

            char ch = infix[i];
            if (isBrkt(ch))
            {
                  if (isOpnBrkt(ch))
                  {
                        stack.push(ch);
                  }
                  else
                  {

                        while (stack.top() != '(')
                        {
                              postfix += stack.top();
                              stack.pop();
                        }
                        stack.pop();
                  }
            }
            else if (isOpr(ch))
            {

                  if (stack.empty() || isBrkt(stack.top()) || isHigherPre(ch, stack.top()))
                  {
                        stack.push(ch);
                  }
                  else
                  {
                        char newTop;
                        do
                        {
                              postfix += stack.top();
                              stack.pop();
                              if (stack.empty())
                              {
                                    break;
                              }
                              newTop = stack.top();
                              if (newTop == '(')
                              {
                                    break;
                              }

                        } while (!isHigherPre(ch, newTop));
                  }
            }
            else
            {
                  postfix += ch;
            }
      }
      while (!stack.empty())
      {
            postfix += stack.top();
            stack.pop();
      }
      return postfix;
}

main()
{
      string postfix = infixToPostfix("((a+b-c)*d)/g");
      cout << postfix;
}