#include <iostream>
using namespace std;
void mystery1(char*, const char*); // prototype
int main()
{
char string1[80];
char string2[80];
cout << "Enter two strings: ";
cin >> string1 >> string2;
mystery1(string1, string2);
cout << string1 << endl;
} // end main

// What does this function do?
void mystery1(char* s1, const char* s2)
{
while (*s1 != '\0')
++s1;
for (; *s1 = *s2; ++s1, ++s2)
; // empty statement
} // end function mystery1

// This is a program that is taking two inputs and it is joining both of the strings. First we have declared two character arrays
// Both have size of 80, then we are giving input to both of the strings. After filling both character arrays, we are giving a 
// function call to function mystery1
// Mystery1 funstion has two, character pointers as input. 
// Then we have a while loop within the function. The while loop will run untill, it found a NULL character in the array;
// With in the while loop we are incrimention the pointer which is given in parameter.
// Last is the empty statement or empty for loop