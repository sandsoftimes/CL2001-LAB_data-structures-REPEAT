#include <iostream>
using namespace std;
int main(){
	int arr[5], *pp, greatest, lowest;
	greatest = lowest = 0;
	pp=arr;
	cout<<"Enter the values of the array:";
	for(int i = 0; i<5; i++){
		cin>>*pp++;
		
	}
	for(int i = 0; i < 5; i++){
		if(*pp>greatest){
			greatest = *pp;
		}
		if(*pp<lowest){
			lowest = *pp;
		}
	}
	cout<<"Greatest is:"<<greatest<<endl;
	cout<<"Lowest is:"<<lowest<<endl;
	
	
}
