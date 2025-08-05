#include<iostream>
using namespace std;
int mystery2(const char*);
int main(){
    char string1[80];
    cout<<"Enter a string: ";
    cin>>string1;
    cout<<mystery2(string1)<<endl;

}
int mystery2(const char* s){
    int x;
    for(x = 0; *s != '\0'; ++s)
    ++x;
    return x;
}

// This code is calculating the total no of characters stored in the character array. 
// The main of the function starts with the declaration of character array named as string1. 
// We have declared it with the size of 80.
// Then we ask the user to input the string
// After input we've given a function call to a function of mystery2.
// Within the function of mystery2. We are getting const char pointer which will point to a character array
// Then we've declared a variable x;
// After it, we have applied a for loop, 
// The loop wil start from zero and keep running until, it found a null character in the array '\0;
// With in the loop we are incrementing the x by 1