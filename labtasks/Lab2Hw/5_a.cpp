#include<iostream>
using namespace std;
int main(){
    char alpha;
    alpha = 'Y';
    // cout<<alpha;
    char *alphaPtr;
    alphaPtr = &alpha;
    *alphaPtr = 'Z';
    cout<<alpha;
}

// We've changed the value of alpha from Y to Z using alphaPtr and we can see that the value is actually changed.