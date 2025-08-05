#include<iostream>
using namespace std;
int main(){
    char alpha;
    alpha = 'Y';
    const char * Ptr2;
    Ptr2 = &alpha;
    // cout<<*Ptr2;
    char bravo;
    bravo = 'M';
    Ptr2 = &bravo;
    cout<<*Ptr2;
    
}

// We've passed the bravo to the same const pointer and the value of variable changed from Y to M as we can see by the result
// we printed