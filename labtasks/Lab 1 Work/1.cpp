#include<iostream>
using namespace std;
int main(){
    int a, b;
    int *x, *y;
    a = 33;
    b = 66;
    x = &a;
    y = &b;
    cout<<"Memory address of variable a="<<a<<endl;
    cout<<"Memory address of variable b="<<b<<endl;
    return 0;
    
}