#include<iostream>
using namespace std;
int main(){
    char alpha;
    alpha = 'Y';
    cout<<alpha;
    char *alphaPtr;
    alphaPtr = &alpha;
    *alphaPtr = 'Z';
    cout<<alpha;

//2
    const char * Ptr2;
    Ptr2 = &alpha;
    char bravo;
    bravo = 'M';
    Ptr2 = &bravo;

//2
    const char *Ptr3;
    Ptr3 = &alpha;
    char bravo;
    bravo = 'M';
    Ptr3 = &bravo;
    cout<<alpha;

     

}