#include<iostream>
using namespace std;
int main(){
    char alpha;
    alpha = 'Y';
    const char *Ptr3;
    Ptr3 = &alpha;
    char bravo;
    bravo = 'M';
    Ptr3 = &bravo;
    cout<<alpha;

}

// Here we've pointed the constant variable Ptr3 to alpha and then we pointed it to bravo and then we printed the result and we can 
// see that the const pointer is still pointing to alpha variable and thus printing Y