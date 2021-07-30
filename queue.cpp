#include<iostream>
#include<queue>

using namespace std;

void showq(queue<string> gq)
{
  cout<<"\n queue elements are : ";
  queue<string> g = gq;
  while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
  }
  cout << '\n';
}

int main()
{
  queue<string> q;

  q.push("heyy");
  q.push("i");
  q.push("love");
  q.push("programming");

  showq(q);

  cout<<"size before pop : "<<q.size()<<endl;

  cout<<"First element before pop: "<<q.front()<<endl;

  cout<<"Last element before pop: "<<q.back()<<endl;

  q.pop();

  cout<<"size after pop : "<<q.size()<<endl;

  cout<<"First element after pop: "<<q.front()<<endl;

  cout<<"Last element after pop: "<<q.back()<<endl;

  showq(q);
  return 0;
}
