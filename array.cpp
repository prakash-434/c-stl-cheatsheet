#include<iostream>
#include<array> /*for array class in c++ stl*/
#include<tuple>/*for get()*/

using namespace std;

int main()
{
  int x[3]={1,2,3};/*how we initialize in c or in c++ without using stl*/

  /*Initializing the array elements in c++ stl*/
  array<int,6> ar = {1, 2, 3, 4, 5, 6};/*ar is the name of array,6 is its size*/
  array<int,6> ar2 = {11, 12, 13, 14, 15, 16};
  array<int,6> ar3 = {21, 22, 23, 24, 25, 26};

  /*at() */
  cout<<"Array element at 2nd index is : "<<ar.at(2)<<endl;

  // Printing all array elements using at()
  cout << "The array elements are (using at()) : ";
  for ( int i=0; i<6; i++)
  cout << ar.at(i) << " ";
  cout << endl;

  // Printing array elements using operator[]
  cout << "The array elements are (using operator[]) : ";
  for ( int i=0; i<6; i++)
  cout << ar[i] << " ";
  cout << endl;

  //get() :- This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple.*/
  // Printing array elements using get()
  cout << "The array elements are (using get()) : ";
  cout << get<0>(ar) << " " << get<1>(ar) << " ";
  cout << get<2>(ar) << " " << get<3>(ar) << " ";
  cout << get<4>(ar) << " " << get<5>(ar) << " ";
  cout << endl;


  /*front() :- This returns the first element of array. */
  cout << "First element of array is : ";
  cout << ar.front() << endl;


  /*back() :- This returns the last element of array.*/
  cout << "Last element of array is : ";
  cout << ar.back() << endl;
  
  /*size() :- It returns the number of elements in array. This is a property that C-style arrays lack. */
  cout << "The number of array elements is : ";
  cout << ar.size() << endl;

  /*max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared. The size() and max_size() return the same value.*/
  cout << "Maximum elements array can hold is : ";
  cout << ar.max_size() << endl;



  /*swap() :- The swap() swaps all elements of one array with other.*/
  // Printing 1st and 2nd array before swapping
  cout << "The second array elements before swapping are : ";
  for (int i=0; i<6; i++)
  cout << ar2[i] << " ";
  cout << endl;
  cout << "The third array elements before swapping are : ";
  for (int i=0; i<6; i++)
  cout << ar3[i] << " ";
  cout << endl;
 
  // Swapping ar2 values with ar3
  ar2.swap(ar3);
 
  // Printing 1st and 2nd array after swapping
  cout << "The second array elements after swapping are : ";
  for (int i=0; i<6; i++)
  cout << ar2[i] << " ";
  cout << endl;
  cout << "The third array elements after swapping are : ";
  for (int i=0; i<6; i++)
  cout << ar3[i] << " ";
  cout << endl;


  /*empty() :- This function returns true when the array size is zero else returns false. */
  ar.empty()? cout << "Array empty":cout << "Array not empty"<<endl;
  /*empty() returns 1 if empty and 0 if not empty*/

  /*fill() :- This function is used to fill the entire array with a particular value.*/
  // Filling array with 0
  ar.fill(0);
 
  // Displaying array after filling
  cout << "Array after filling operation is : ";
  for ( int i=0; i<6; i++)
    cout << ar[i] << " ";
  cout<<endl;

  return 0;
}
