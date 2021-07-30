#include<iostream>
#include<queue>

using namespace std;

void showpq(priority_queue<int> gq)
{
  
  priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main()
{
  //max heap
  priority_queue<int> max;

  //min heap
  priority_queue<int,vector<int> , greater<int> > min;

  max.push(1);
  max.push(3);
  max.push(4);
  max.push(5);
  max.push(7);

  cout << "The priority queue max is : ";
  showpq(max);
  cout<<"size of max queue : "<<max.size()<<endl;


  cout << "\nmax.top() : " << max.top();
  
  cout << "\nmax.pop() : ";
  max.pop();
  showpq(max);

  min.push(11);
  min.push(13);
  min.push(14);
  min.push(20);
  min.push(18);

  cout<<"min queue is ";

  int m=min.size();

  for(int i=0;i<m;i++)
  {
    cout<<min.top()<<" ";
    min.pop();
  }
  cout<<endl;

  cout<<"Min queue empty or not : "<<min.empty()<<endl;






  return 0;
}
