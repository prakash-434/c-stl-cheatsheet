#include<iostream>
#include<list>
#include<iterator>

using namespace std;

//function for printing the elements in a list
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
  list<int> list1,list2;

  list<int> list3(5,100);
  //5 elements and all initialize to 100
  cout<<"Printing list3: ";
  for(int i:list3)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  list1.push_back(1);
  list1.push_back(2);
  list1.push_back(3);
  list1.push_front(4);
  list1.push_front(5);
  list1.push_front(6);

  cout<<"Printing list1: ";
  for(int i:list1)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  list1.erase(list1.begin());
  cout<<"after erase : ";
  for(int i:list1)
  {
    cout<<i<<" ";
  }
  cout<<endl;


  cout<<"size of list1 is : "<<list1.size()<<endl;

  cout<<"front element in list1: "<<list1.front()<<endl;

  cout<<"last element in list1: "<<list1.back()<<endl;


  list1.pop_front();
  cout<<"After poping front element in list1:";
  showlist(list1);

  list1.pop_back();
  cout<<"After poping last element in list1:";
  showlist(list1);

  list1.reverse();
  cout<<"After reversing list1:";
  showlist(list1);

  list1.sort();
  cout<<"After sorting list1:";
  showlist(list1);

  return 0;
}
