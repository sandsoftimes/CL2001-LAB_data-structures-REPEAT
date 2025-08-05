#include<iostream>
using namespace std;
int main(){
    int *p = NULL;
    p = new (nothrow) int;
    if(!p){
        cout<<"allocation of memory failed";}
    else{
        *p = 29;
        cout<<"Value of p:"<<*p<<endl;

    }
    float *r = new float(75.25);
    cout<<"Value of r:"<<r<<endl;
    int n;
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;
    int *q = new (nothrow) int [n];
    if(!q)
    cout<<"allocatio        n of memory failed";
    else{
        for(int i = 0; i < n; i++)
        q[i] = i+1;
        cout<<"Value store in block of memory using index:";
        for(int i = 0; i < n; i++)
        cout<< q[i] << " ";

    }
    cout<<endl<<"Value store in block of memory using ptr:";
    for(int i = 0; i < n; i++){
        cout<<*q<<" ";
    }
delete p;
delete r;
delete[] q;
return 0;


}
