#include <iostream>
using namespace std;
void multi(int arr1[], int arr2[], int arr3[]);
void add(int arr1[], int arr2[], int arr3[]);
void print(int arr[]);
int main(){
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Enter the value of first 3x3 matrix:";
			cin>>arr1[i][j];
			
			
		}
	}
	for(int k = 0; k<3; k++){
		for(int l = 0; l<3; l++){
			cout<<"Enter the value of second 3x3 matrix:";
			cin>>arr2[k][l];
		}
		
	}
	for(int p = 0; p<3; p++){
		for(int m = 0; m<3; m++){
			cout<<"Enter the value of third 3x3 matrix:";
			cin>>arr3[p][m];
		}
		
	}
//	multi(arr1, arr2, arr3);
	
	
}
void multi(int arr1[], int arr2[], int arr3[]){
	int *pp;
	pp=arr3;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			*pp=arr1[i]*arr2[j];
			pp++;
		}
	}
	
}
void add(int arr1[], int arr2[], int arr3[]){
	int *pp;
	pp=arr3;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			*pp=arr1[i]+arr2[j];
			pp++;
		}
	}
	
}
void print(int arr[]){
	int *pp;
	pp = arr;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"The value stored in the array is:";
			cout<<*pp++;
			
		}
	}
}
