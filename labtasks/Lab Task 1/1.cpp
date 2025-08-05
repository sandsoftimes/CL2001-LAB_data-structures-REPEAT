#include <iostream>
using namespace std;

void LowHigh(int arr[], int sizey);

int main(){
	
	int ArrSize;
	cout<<"Enter the size of array:";
	cin>>ArrSize;
	int arr[ArrSize];
	int size;
	size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter the no's in array:";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	LowHigh(arr[ArrSize], size);
}

void LowHigh(int arr[], int sizey){
	int greatest, lowest;
	greatest=lowest=0;
	for(int j=0; j<sizey; j++)
	{
		if(greatest<arr[j]){
			greatest = arr[j];
		}
		if(lowest>arr[j]){
			lowest = arr[j];
		}
	}
	cout<<"Lowest value is:"<<lowest;
	cout<<"Greatest value is:"<<greatest;
	
}
