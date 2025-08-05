#include <iostream>
using namespace std;
  void insertion (int array[] , int max_index)
{
  cout<<"Enter the index to enter value ";
  int temp;
  cin>> temp;
  while(temp <0 || temp > max_index)
    {
      cout<<"Invalid index, index out of bounds please enter an index between the range of 0-"<<max_index<<endl<<"Index:  ";
      cin>>temp;
    }
  cout<<"Enter the value of the index"<<endl;
  int value;
  cin>>value; 
  array[temp]=value; 
  cout<<endl<<"inserting complete!"<<endl;
}

  
/* Driver code */
int main()
{
 int arr[6] = {3,4,6,6,3,2};
  int size;
  cout<<"enter max size ";
  cin>>size;
insertion(arr,size);
  for (int i =0; i < size;i++)
  cout<<arr[i]<<" ";

    return 0;
}
  