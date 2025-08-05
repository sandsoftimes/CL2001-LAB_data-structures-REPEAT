#include <iostream>
using namespace std;
int main(){
	int arr[5], *pp;
	pp=arr;
	cout<<"Enter the values of the array:"<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Values Stored in the array are:"<<endl;
	for(int i=0;i<5;i++){
		cout<<*pp++<<endl;
	}
	
}

