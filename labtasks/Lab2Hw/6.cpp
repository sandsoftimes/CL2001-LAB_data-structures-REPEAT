#include<iostream>
#include<string>

using namespace std;
int main(){
int size;
cout<<"Array Size: ";
cin>>size;

  char arr[size];
  cout<<"Beginning Index: ";
  int wall;
  cin>>wall;
  cout<<"Ending Index: ";
  int well;
  cin>>well;
  cout<<"Enter value: "<<endl;
  for(int i = 0; i<size; i++){
    cin>>arr[i];
  }

 cout<<"The return value is: ";
cout<<endl;
 for(int j = wall; j<=well;j++){
   cout<<arr[j];
 }
}