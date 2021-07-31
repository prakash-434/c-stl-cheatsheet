#include<iostream>
#include<iterator>
#include<set>

using namespace std;

int main()
{
  set<int> s;

  /*inserting in random order*/
  s.insert(4);
  s.insert(5);
  s.insert(6);
  s.insert(2);
  s.insert(7);
  s.insert(8);
  s.insert(9);
  s.insert(22);

  cout<<"only one 22 will be added"<<endl;
  s.insert(22);
  s.insert(22);


  /*element will be printed in sorted order*/
  cout<<"set s is : ";
  for(auto i :s)
  {
    cout<<i<<" ";
  }
  cout<<endl;


  // empty set container
  set<int, greater<int> > s1;
  
  s1.insert(40);
  s1.insert(30);
  s1.insert(60);
  s1.insert(20);
  s1.insert(50);
  s1.insert(50);
  s1.insert(10);


  // printing set s1
  set<int, greater<int> >::iterator itr;
  cout << "\nThe set s1 is : \n";
  for (itr = s1.begin(); itr != s1.end(); itr++)
  {
      cout << *itr<<" ";
  }
  cout << endl;


  // assigning the elements from s1 to s2
  set<int> s2(s1.begin(), s1.end());


  // print all elements of the set s2
  cout << "\nThe set s2 after assign from s1 is : \n";
  for (itr = s2.begin(); itr != s2.end();itr++)
  {
      cout << *itr<<" ";
  }
  cout << endl;
 

  // remove all elements up to 30 in s2
  cout<< "\ns2 after removal of elements less than 30 :\n";
  s2.erase(s2.begin(), s2.find(30));
  for (itr = s2.begin(); itr != s2.end(); itr++) {
      cout <<*itr<<" ";
  }


  // remove element with value 50 in s2
  int num;
  num = s2.erase(50);
  cout << "\ns2.erase(50) : ";
  cout << num << " removed\n";
  for (itr = s2.begin(); itr != s2.end(); itr++)
  {
      cout <<*itr<<" ";
  }


  cout << endl;
 
  // lower bound and upper bound for set s1
  cout << "s1.lower_bound(40) : \n"<< *s1.lower_bound(40)<< endl;

  cout << "s1.upper_bound(40) : \n"<< *s1.upper_bound(40)<< endl;
 
  // lower bound and upper bound for set s2
  cout << "s2.lower_bound(40) :\n"<< *s2.lower_bound(40)<< endl;

  cout << "s2.upper_bound(40) : \n"<< *s2.upper_bound(40)<< endl;
 

  cout<<"40 is present or not in s1: "<<s1.count(40)<<endl;

  set<int>::iterator iter=s1.find(40);

  cout<<"printing after iterater assign at 40 : ";
  for(auto it=iter;it!=s1.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl;


  return 0;
}
