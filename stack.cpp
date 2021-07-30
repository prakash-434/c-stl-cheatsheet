#include<iostream>
#include<stack>

using namespace std;

int main()
{
  stack<string> s;
  s.push("heyy");
  s.push("i");
  s.push("love");
  s.push("programming");

  cout<<"Top element is : "<<s.top()<<endl;

  s.pop();

  cout<<"After pop ,Top element is : "<<s.top()<<endl;

  cout<<"size of stack is : "<<s.size()<<endl;

  cout<<"Empty or not : "<<s.empty()<<endl;
  /*empty() returns 1 for empty stack and 0 for non empty stack*/



  stack<int> stack;
  stack.push(10);
  stack.push(11);
  stack.push(12);
  stack.push(13);



  return 0;
}
