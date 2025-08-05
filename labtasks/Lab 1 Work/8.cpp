#include <iostream>
using namespace std;
void swap(int*, int*); // Function prototype
int main () {
int a, b;
cout<<"Enter 1st Value for a ? ";
cin>>a;
cout<<"Enter 2nd Value for b? ";

cin>>b;
swap(&a, &b); // Function Calling
cout<<"Values after exchange = "<<endl;
cout<<"Value of a= "<<a<<endl;
cout<<"Value of b= "<<b<<endl;
return 0;
}
void swap(int *x, int *y) // Function Definition
{
int t;
t = *x;
*x = *y;
*y = t;
}