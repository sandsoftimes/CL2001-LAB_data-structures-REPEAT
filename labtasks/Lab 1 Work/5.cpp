#include<iostream>
using namespace std;
int main(){
    int arr[5], *pp, i;
    pp = arr;
    cout<<"Enter Values into an array:"<<endl;
    for(int i = 0; i<=4; i++){
        cin>>arr[i];

    }
    cout<<"Values from array Using Pointer notation:"<<endl;
    for(int i = 0; i <= 4; i++){
        cout<<*pp++<<'\t';
    }
    return 0;
}