#include<iostream>
using namespace std;
class ArrayList{
	private:
		int size;
		int length;
		int *array;
	public:
	ArrayList(){
		size = 10;
		length = 0;
		array = new int [size];
	}	
	~ArrayList(){
		delete[] array;
	}
	void printArray(){
		int *ptr = array;
		for(int x = 0; x < size; x++){
			cout<<*ptr++ <<"\t";
		}
	}
	void insert(){
		int *ptr;
		ptr = array;
//		if(length = 0){
//			cout<<"Array is empty";
//		}
//		else{
//			cout<<"Array is not full"<<endl;
//		}
		for(int i = 1; i <= size; i++){
			cout<<"Enter the value:";
			cin>>*ptr++;
			length=length+1;
			
			
			
		}
//		cout<<*ptr;
	}
	void print2(){
		int *vbr = array;
		cout<<*vbr;
	}
	void lengthcal(){
		int *ptr;
		ptr = array;
//		int length = 0;
		while(*ptr!='\0'){
			length=length+1;
			cout<<length;
		}
//		for(int i = 1; i != '\0'; i++){
//			length+=1;
//		}
		cout<<"ArrayLength is: "<<length;
		cout<<endl<<"FunctionEnd";
	}
	int search(int val){
		int *ptr;
		ptr = array;
		for(int i = 1; i < size; i++){
			if(*ptr == val){
//				return val;
				cout<<"Element found";
				cout<<endl<<"The value you are searching is: "<<*ptr;
				break;
			}
			else{
				ptr++;
			}
//			cout<<"Key not found";
		}
	}
	void insertspecific(int val, int pos){
		int *ptr;
		ptr = array;
		for(int i = 1; i <= size; i++){
			if(pos == i){
				*ptr = val;
				
			}
			else{
				ptr = ptr+1;
				
			}
//			cout<<"Position if out of size";
		}
		
	}
	void deletion(int val){
		int *ptr;
		ptr = array;
		for(int i = 1; i < size; i++){
			if(*ptr == val){
				for(int j = i; j<size ; j++){
					*ptr = *(ptr+j);
				//	ptr = ptr+1;
					//ptr++;
//					cout<<"ValveIs: "<<*ptr;
				}
			}
			else{
				ptr++;
			}  
//			cout<<"Value is not present in the array";
		
			
		}
	}
	bool isFull(){
		int *ptr;
		ptr = array;	
		for(int i = 1; i <= size; i++){
			if(*ptr !=  NULL)
			ptr=ptr++;
			else
			return true;
		}
		
	}
	bool isEmpty(){
		if(length == 0){
			cout<<"Array is empty";
			return true;
		}
	}
	void Print(){
		int *ptr;
		ptr = array;
		cout<<"The values are: "<<endl;
		for(int i = 1; i <= size; i++){
			cout<<*ptr++<<endl;
			
		}
		
	}
	
};
int main(){
	ArrayList obj;
	obj.insert();
//	obj.print2();
	obj.Print();
	obj.search(6);
//	obj.printArray();
		                           
	//cout<<endl<<"After deletion is: "<<endl;
	//obj.Print();
	if(obj.isEmpty()){
		//cout<<"Array is empty";
	}
	
	if(obj.isFull()){
		cout<<endl<<"Array is full"<<endl;
	}
//	cout<<endl<<obj.Print();
									 obj.insertspecific(1, 3); //main
										obj.Print();  //main
	//cout<<endl;
									 obj.deletion(5); //main
									 obj.Print();
	//obj.Print();
//	obj.lengthcal();
}
