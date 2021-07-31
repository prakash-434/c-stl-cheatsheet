#include<iostream>
#include<algorithm>
#include<vector>
#include <numeric> //For accumulate operation

using namespace std;

int main()
{
  vector<int> v;

  v.push_back(3);
  v.push_back(7);
  v.push_back(2);
  v.push_back(9);
  v.push_back(11);
  v.push_back(17);
  v.push_back(11);

  cout<<"vector v is : ";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;


  cout<<"finding 7 : "<<binary_search(v.begin(),v.end(),7)<<endl;

  cout<<"lower bound of 7 : "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;

  cout<<"upper bound of 7: "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

  int a = 5;
  int b = 3;

  cout<<"max : "<<max(a,b)<<endl;
  cout<<"min : "<<min(a,b)<<endl;

  cout<<"before swapping : "<<a<<" "<<b<<endl;
  swap(a,b);
  cout<<"After swapping : "<<a<<" "<<b<<endl;


  string x="Tendulkar";
  cout<<"before reverseing : "<<x<<endl;
  reverse(x.begin(),x.end());
  cout<<"after reverseing : "<<x<<endl;

  cout<<"v before rotating : ";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  rotate(v.begin(),v.begin()+1,v.end());

  cout<<"v after rotating : ";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<"v after sorting : ";

  sort(v.begin(),v.end());

  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  // Starting the summation from 0
  cout << "\nThe summation of vector elements is: ";
  cout << accumulate(v.begin(), v.end(), 0)<<endl;


  /*count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.*/
  cout << "Occurrences of 11 in vector : ";
  cout << count(v.begin(), v.end(), 11)<<endl;


  /*find(first_iterator, last_iterator, x) – Returns an iterator to the first occurence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.*/
  find(v.begin(), v.end(),5) != v.end()?cout << "\nElement 5 found":cout << "\nElement 5 not found"<<endl;


  /*arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.*/
  // Delete second element of vector
  v.erase(v.begin()+1);

  cout<<"after erasing 2nd element : ";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  // Deletes the duplicate occurrences
  v.erase(unique(v.begin(),v.end()),v.end());
  cout<<"after deleting duplicate elements : ";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  /*next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.*/
  // modifies vector to its next permutation order
  next_permutation(v.begin(), v.end());

  cout<<"after performing next_permutation : ";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;


  /*prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation. */
  prev_permutation(v.begin(), v.end());

  cout<<"after performing prev_permutation : ";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;


  /* distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function               is very useful while finding the index. */
  // Return distance of first to maximum element
  cout << "Distance between first to max element: ";
  cout << distance(v.begin(),max_element(v.begin(), v.end()))<<endl;




  return 0;
}
