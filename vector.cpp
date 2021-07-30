#include<iostream>
#include<vector>/*for vector class in c++ stl*/

using namespace std;

int main()
{
  vector<int> g1;
  vector<int> g2(6,1);
  /*size 5 and all initalize to 1*/

  

  g1.push_back(1);
  g1.push_back(2);
  g1.push_back(3);
  g1.push_back(4);
  g1.push_back(5);
  g1.push_back(6);

  cout<<"g1 vector is : ";
  for(int i:g1)
    cout<<i<<" ";
  cout<<endl;

  cout<<"before pop g2 vector is : ";
  for(int i:g2)
    cout<<i<<" ";
  cout<<endl;

  g2.pop_back();


  cout<<"after pop g2 vector is : ";
  for(int i:g2)
    cout<<i<<" ";
  cout<<endl;

  


  /*copying one vector to another*/
  vector<int> copy_of_g1(g1);

  cout<<"copy_of_g1 vector is : ";
  for(int i:copy_of_g1)
    cout<<i<<" ";
  cout<<endl;


  /*size() – Returns the number of elements in the vector.*/
  cout << "Size : " << g1.size();


  /*max_size() – Returns the maximum number of elements that the vector can hold*/
  cout << "\nMax_Size : " << g1.max_size();

  /*capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.*/
  cout << "\nCapacity : " << g1.capacity();

  /*resize(n) – Resizes the container so that it contains ‘n’ elements.*/
  // resizes the vector size to 4
  g1.resize(4);

  // prints the vector size after resize()
  cout << "\nSize after resize : " << g1.size()<<endl;

  cout<<"vector elements after resizing : ";
  for(int i:g1)
    cout<<i<<" ";
  cout<<endl;

  /*empty() – Returns whether the container is empty.*/
  // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "Vector is not empty";
    else
        cout << "Vector is empty";

  
  /*shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.*/
  // Shrinks the vector
  g1.shrink_to_fit();
  cout << "\nCapacity after shrink to fit: " << g1.capacity();
  cout << "\nVector elements are: ";
  for(int i:g1)
    cout<<i<<" ";
  cout<<endl;



  /*<-------------------------Element Access----------------------------------->*/

  /*reference operator [g] – Returns a reference to the element at position ‘g’ in the vector*/

  cout << "\nReference operator [g] : g1[2] = " << g1[2];

  /*at(g) – Returns a reference to the element at position ‘g’ in the vector*/
  cout << "\nat : g1.at(3) = " << g1.at(3);

  /*front() – Returns a reference to the first element in the vector*/
  cout << "\nfront() : g1.front() = " << g1.front();


  /*back() – Returns a reference to the last element in the vector*/
  cout << "\nback() : g1.back() = " << g1.back();


  /*data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.*/
  // pointer to the first element
  int* pos = g1.data();
  
  cout << "\nThe first element is " << *pos<<endl;





  /*<----------------------------Modifiers-------------------------------------->*/

  /*assign() – It assigns new value to the vector elements by replacing old ones
  push_back() – It push the elements into a vector from the back
  pop_back() – It is used to pop or remove elements from a vector from the back.
  insert() – It inserts new elements before the element at the specified position
  erase() – It is used to remove elements from a container from the specified position or range.
  swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
  clear() – It is used to remove all the elements of the vector container
  emplace() – It extends the container by inserting new element at position
  emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector*/


  // Assign vector
    vector<int> v;
  
  // fill the array with 10 five times
  v.assign(5, 10);
  
  cout << "\n\nThe vector elements are: ";
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  // inserts 15 to the last position
  v.push_back(15);
  int n = v.size();
  cout << "\nThe last element is: " << v[n - 1];
  
  // removes last element
  v.pop_back();
  
  // prints the vector
  cout << "\nThe vector elements are: ";
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  // inserts 5 at the beginning
  v.insert(v.begin(), 5);
  
  cout << "\nThe first element is: " << v[0];
  
  // removes the first element
  v.erase(v.begin());
  
  cout << "\nThe first element is: " << v[0];
  
  // inserts at the beginning
  v.emplace(v.begin(), 5);
  cout << "\nThe first element is: " << v[0];
  
  // Inserts 20 at the end
  v.emplace_back(20);
  n = v.size();
  cout << "\nThe last element is: " << v[n - 1];
  
  // erases the vector
  v.clear();
  cout << "\nVector size after erase(): " << v.size();
  
  // two vector to perform swap
  vector<int> v1, v2;
  v1.push_back(1);
  v1.push_back(2);
  v2.push_back(3);
  v2.push_back(4);
  
  cout << "\n\nVector 1: ";
  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";
  
  cout << "\nVector 2: ";
  for (int i = 0; i < v2.size(); i++)
      cout << v2[i] << " ";
  
  // Swaps v1 and v2
  v1.swap(v2);
  
  cout << "\nAfter Swap \nVector 1: ";
  for (int i = 0; i < v1.size(); i++)
      cout << v1[i] << " ";
  
  cout << "\nVector 2: ";
  for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";









  return 0;
}
