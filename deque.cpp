#include<iostream>
#include<deque>

using namespace std;

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
  deque <int> d;

  
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);

  d.push_front(4);
  d.push_front(5);
  d.push_front(6);

  cout << "The deque d is : ";
  showdq(d);

  cout << "\nd.size() : " << d.size();
  cout << "\nd.max_size() : " << d.max_size();
  
  cout << "\nd.at(2) : " << d.at(2);
  cout << "\nd.front() : " << d.front();
  cout << "\nd.back() : " << d.back();
  
  cout << "\nd.pop_front() : ";
  d.pop_front();
  showdq(d);
  
  cout << "\nd.pop_back() : ";
  d.pop_back();
  showdq(d);





  return 0;
}
