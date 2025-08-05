#include<iostream>
using namespace std;
int main(){
    int i; 
    int y; 
    int p = 0;
    int j = 90;
    y = 1;
    cout<<"Array size";
    cin>>i;
    int arr[i];
    for(int k = 0; k < i; k++){
        cout<<"Value";
        cin>>arr[k];
    }
    for(j; j < i; j ++ ){
        cout<<"Value is:"<<arr[j]<<endl;
    }
    j = j+1;
    cout<<"Index is: "<<j<<endl;
    cout<<"Out of bound";
    cout<<i;cout<<j;
    if(j < i){
        cout<<"index out of bound";
    }
    }
    