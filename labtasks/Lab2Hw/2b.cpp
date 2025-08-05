#include<iostream>
using namespace std;
int main(){
    double *realPtr;
    long *integerPtr;
    integerPtr = realPtr;
}

// There is an error in the above code, Here we first created two different pointers of different datatypes and we are storing the address
// of double type pointer in long type pointer. Which is wrong. In order to store the address of pointer in another pointer, the data 
// type of both the pointers should be same, like in this case, both the pointers should have double type or both should have long type

int main(){
    double *realPtr;
    double *integerPtr;
    integerPtr = realPtr;
}