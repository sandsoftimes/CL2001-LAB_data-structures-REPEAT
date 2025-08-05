#include<iostream>
using namespace std;
int main(){
    int a;
    int *b;
    int **c;
    int ***d;
    a = 7;
    b = &a;
    c = &b;
    d = &c;
    cout<<"The address of variable a is:"<<b;
    cout<<"The address of variable b is:"<<c;
    cout<<"The address of variable d is:"<<d;
    return 0;
}