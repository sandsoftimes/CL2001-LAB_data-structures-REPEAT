#include <iostream>
using namespace std;
  void insertion (int array[] , int max_index)
{
  cout<<"Enter Index: ";
  int temp;
  cin>> temp;
  while(temp <0 || temp > max_index)
    {
      cout<<"The index in invalid, please enter an index starting from zero: "<<max_index<<endl<<"Index:  ";
      cin>>temp;
    }
  cout<<"Enter Value: "<<endl;
  int value;
  cin>>value; 
  array[temp]=value; 
  cout<<endl<<"Insertion is done: "<<endl;
}

  
int main()
{
 int arr[6] = {3,4,6,6,3,2};
  int size;
  cout<<"Enter Size: ";
  cin>>size;
insertion(arr,size);
//   for (int i =0; i < size;i++)
//   cout<<arr[i]<<" ";

    return 0;
}
  