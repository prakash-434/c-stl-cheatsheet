#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
  //empty map container
  map<int,string> ms;
  //here key is an integer type and values are of string data type
  
  map<int,int> mi;

  ms[1]="heyy";
  ms[16]="i";
  ms[4]="really";
  ms[7]="love";
  ms[9]="programming";

  ms.insert({6,"not really"});

  cout<<"before erase : ";
  for(auto i:ms)
  {
    cout<<i.first<<":"<<i.second<<"  ";
  }
  cout<<endl;

  cout<<"finding 4 : "<<ms.count(4)<<endl;

  ms.erase(4);

  cout<<"after erasing key 4 : ";
  for(auto i:ms)
  {
    cout<<i.first<<":"<<i.second<<"  ";
  }
  cout<<endl;

  auto it=ms.find(6);
  cout<<"\nprinting after a iterator pointing at key 6 : " <<endl;
  for(auto i=it;i!=ms.end();i++)
  {
      cout<<(*i).first<<":"<<(*i).second<<"  ";
  }
  cout<<endl<<endl<<endl;


  // insert elements in random order
  mi.insert(pair<int, int>(1, 40));
  mi.insert(pair<int, int>(2, 30));
  mi.insert(pair<int, int>(3, 60));
  mi.insert(pair<int, int>(4, 20));
  mi.insert(pair<int, int>(5, 50));
  mi.insert(pair<int, int>(6, 50));
  mi.insert(pair<int, int>(7, 10));

  // printing map mi
  map<int, int>::iterator itr;
  cout << "\nThe map mi is : \n";
  cout << "\tKEY\tELEMENT\n";

  for (itr = mi.begin(); itr != mi.end(); ++itr) {
      cout << '\t' << itr->first
           << '\t' << itr->second << '\n';
  }


  // assigning the elements from mi to copymi
  map<int, int> copymi(mi.begin(), mi.end());


  // print all elements of the map copymi
  cout << "\nThe map copymi after"<< " assign from mi is : \n";
  cout << "\tKEY\tELEMENT\n";
  for (itr = copymi.begin(); itr != copymi.end(); ++itr) {
      cout << '\t' << itr->first
           << '\t' << itr->second << '\n';
  }
  cout << endl;


  // remove all elements up to
  // element with key=3 in copymi
  cout << "\ncopymi after removal of"
          " elements less than key=3 : \n";
  cout << "\tKEY\tELEMENT\n";
  copymi.erase(copymi.begin(), copymi.find(3));
  for (itr = copymi.begin(); itr != copymi.end(); ++itr) 
  {
      cout << '\t' << itr->first
           << '\t' << itr->second << '\n';
  }

  cout << endl;


  // remove all elements with key = 4
  int num;
  num = copymi.erase(4);
  cout << "\ncopymi.erase(4) : ";
  cout << num << " removed \n";
  cout << "\tKEY\tELEMENT\n";
  for (itr = copymi.begin(); itr != copymi.end(); ++itr) {
      cout << '\t' << itr->first
           << '\t' << itr->second << '\n';
  }


  cout << endl;
  
  // lower bound and upper bound for map gquiz1 key = 5
  cout << "mi.lower_bound(5) : "
       << "\tKEY = ";
  cout << mi.lower_bound(5)->first << '\t';
  cout << "\tELEMENT = "
       << mi.lower_bound(5)->second << endl;
  cout << "mi.upper_bound(5) : "
       << "\tKEY = ";
  cout << mi.upper_bound(5)->first << '\t';
  cout << "\tELEMENT = "
       << mi.upper_bound(5)->second << endl;
  

  
  
  //find()
  
  /*
  // C++ program for illustration
// of map::find() function
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Initialize container
    map<int, int> mp;
 
    // Insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 20 });
    mp.insert({ 4, 50 });
 
    cout << "Elements from position of 3 in the map are : \n";
    cout << "KEY\tELEMENT\n";
 
    // find() function finds the position
    // at which 3 is present
    for (auto itr = mp.find(3); itr != mp.end(); itr++) {
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
 
    return 0;
}
Output
The elements from position 3 in map are : 
KEY    ELEMENT
3    20
4    50

  */


  



  return 0;
}
