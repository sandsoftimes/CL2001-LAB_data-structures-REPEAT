#include<iostream>
#include<string>

using namespace std;
int main(){
int size;
cout<<"enter size of array ";
cin>>size;

  char arr[size];
  cout<<"enter start index ";
  int sindex;
  cin>>sindex;
  cout<<"enter stop index ";
  int stindex;
  cin>>stindex;
  cout<<"enter the elements of array ";
  for(int i = 0; i<size; i++){
    cin>>arr[i];
  }

 cout<<"function will return ";
cout<<endl;
 for(int j = sindex; j<=stindex;j++){
   cout<<arr[j];
 }
}