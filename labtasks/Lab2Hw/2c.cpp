#include<iostream>
using namespace std;
int main(){
    int *x, y;
    x = y;
}

// Here, in the line 5 you can see that we are assining a variable to a pointer which is not possible. If we want to assign this 
// variable to the pointer, we must use the address operator. &. Place it before the y and now the address of y is stored in the 
// pointer x