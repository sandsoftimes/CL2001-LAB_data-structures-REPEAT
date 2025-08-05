#include<iostream>
using namespace std;
void Taker(int *p , int *q);
void Swaper(int *p, int *q);
void PrinterArr1(int *p);
void PrinterArr2(int *q);
int main(){
	int *p, *q;
	p = new int [100];
	q = new int [100];
	
	
}
void Taker(int *p , int *q){
	int value;
	for(int i = 0; i < 100; i++){
		if(value == 0 || value == 1){
			cout<<"Sential Value Found.";
			break;
		}
		else{
			cout<<"Value is Valid.";
			*p=value;
			p++;
		}
		
	}
	for(int k = 0; k < 100; k++){
		if(value == 0 || value == 1){
			cout<<"Sential Value Found.";
			break;
		}
		else{
			cout<<"Value is Valid.";
			*q=value;
			q++;
		}
		
	}
	
	
}
void Swaper(int *p, int *q){
	int k; //Created a variable which is going to used for swaping the values of the arrays
	for(int i = 0; i < 100; i++){
		k = *p;
		*p = *q;
		*q = k;
		p++;
		q++;
		
		
	}
}
void PrinterArr1(int *p){
	for(int i = 0; i < 100; i++){
		cout<<*p++;
	}
}
void PrinterArr2(int *q){
	for(int i = 0; i < 100; i++){
		cout<<*q++;
	}
}
