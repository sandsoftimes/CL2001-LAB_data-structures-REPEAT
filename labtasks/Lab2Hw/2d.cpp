#include<iostream>
using namespace std;
int main(){
    char s[]="this is a character array";
    char *p;
    p = s;
    //p= p+3;
    for(;*s!='\0';++s)
    cout<<*s<<' ';
    //for(;*p!='\0';++p)
    //cout<<*p<<' ';
}

// Here there is a error in the code, as we know that the array name points to the first index of the array. What is happeining 
// in the code is actually not according to the rule. We are directly using the address name to print out the whole array. What
// i have done is created another pointer and pointed on this char array and by that i have printed the whole array.