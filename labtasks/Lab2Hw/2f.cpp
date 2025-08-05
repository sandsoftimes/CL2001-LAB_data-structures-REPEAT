#include<iostream>
using namespace std;
int main(){
    double x = 19.34;
    double *xPtr = &x;
    cout<<xPtr<<endl;
}
//The error was in 5th line, steric was missing with the xPTR, so we've put the steric so now it has stored the address of respective 
// variable x