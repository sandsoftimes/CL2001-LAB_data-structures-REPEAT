#include <iostream>
using namespace std;
void printer(int arr[]);
void arrmaker(int arr1[], int arr2[], int arr3[]);
int main(){
	int arr1[8]={1,2,3,4,5,6,3,2};
	int arr2[4]={1,3,5,7};
	int arr3[100];
	arrmaker(arr1, arr2, arr3);
	printer(arr3);
	
	
}
void arrmaker(int arr1[], int arr2[], int arr3[]){
	int *pp;
	pp = arr3;
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 4; j++){
			if(arr1[i]=arr2[j]){
//				cin>>*pp++;
				*pp=arr1[i];
				pp++;
				
			}
		}
	}
	
	
}
void printer(int arr[]){
	for(int i = 0; i < 3; i++){
		cout<<arr[i];
	}
}

