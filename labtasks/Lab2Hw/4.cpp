#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10;
    int c;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    c = *p1;
    cout<<"*(p1++)= "<<*(p1++)<<endl;
    cout<<"value of p1 "<<p1<<endl;
    cout<<"*(++p1) = "<<*(++p1)<<endl;
    cout<<"value of p1 "<<p1<<endl;
    cout<<"(*p1)++ = "<<(*p1)++<<endl;
    cout<<"value of p1 "<<p1<<endl;
    cout<<"++(*p1)= "<<++(*p1)<<endl;
    cout<<"value of p1 "<<p1<<endl;
    // return 0;

}

// In the 10th line, the value of a will be printed as 5 then incriment of +1 will be done in it at runtime.
// In the 11th line, the address of p1 will be printed
// In the 12th line, the address of the pointer 1 will be incrimented to +1, which means this pointer will point to some else value
// Then it will print the value stored in that incrimented address
// In the 13th line, we are again printing the address stored in pointer 1
// In the 14th line, we are printing the value stored in the pointer and after printing we are incrimenting +1 in the address
// In the 15th line, we are again printing the address stored in pointer p1
// In the 16th line, we are incrimenting first and then printing the value stored in the pointer
// In the 17th line, we are printing the address stored in pointer 