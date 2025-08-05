#include <iostream>
using namespace std;
int main() {

short *numPtr,result; 
short **genericPtr = &numPtr;
result = **genericPtr + 7;

}