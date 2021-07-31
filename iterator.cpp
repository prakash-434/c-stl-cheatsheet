#include<iostream>
#include<iterator> // for iterator
#include<vector> // for vector

using namespace std;

int main()
{
  vector <int> v={1,2,3,4,5,6,7};

  // Declaring iterator to a vector
  vector<int>::iterator ptr;

  /*begin() :- This function is used to return the beginning position of the container.

  end() :- This function is used to return the after end position of the container.
  */

  // Displaying vector elements using begin() and end()
  cout << "The vector elements are : ";
  for (ptr = v.begin(); ptr < v.end(); ptr++)
      cout << *ptr << " ";
  cout<<endl;

  // Declaring iterator to a vector
  vector<int>::iterator p = v.begin();


  /*advance() :- This function is used to increment the iterator position till the specified number mentioned in its arguments.*/

  // Using advance() to increment iterator position
  // points to 4
  advance(p, 3);
      
  // Displaying iterator position
  cout << "The position of iterator after advancing is : ";
  cout << *p << " "<<endl;


  /*
  next() :- This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.

  prev() :- This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.

  */

  // Declaring iterators to a vector
  vector<int>::iterator a = v.begin();
  vector<int>::iterator b = v.end();
     
     
  // Using next() to return new iterator
  // points to 4
  auto it = next(a, 3);
      
  // Using prev() to return new iterator
  // points to 3
  auto it1 = prev(b, 3);
      
  // Displaying iterator position
  cout << "The position of new iterator using next() is : ";
  cout << *it << " ";
  cout << endl;
      
  // Displaying iterator position
  cout << "The position of new iterator using prev()  is : ";
  cout << *it1 << " ";
  cout << endl;

  /*
  inserter() :- This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted
  */



  vector <int> v1={1,2,3,4,5,6,7};

  vector<int> v2 = { 4, 5, 6 };


  vector<int>::iterator i1;
  i1 = v2.begin() + 2;
  // i1 points to next element of 5 in v2
  
  // Using std::inserter inside std::copy
  std::copy(v1.begin(), v1.end(), std::inserter(v2, i1));
  // v2 now contains 4 5 1 2 3 7 8 9 6
  
  // Displaying v1 and v2
  cout << "v1 = ";
  
  int i;
  for (i = 0; i < 6; ++i) {
      cout << v1[i] << " ";
  }
  
  cout << "\nv2 = ";
  for (i = 0; i < 9; ++i) {
      cout << v2[i] << " ";
  }



  return 0;
}
