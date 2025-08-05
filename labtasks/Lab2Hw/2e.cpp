#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main(){
    short *numPtr,
    result; 
    void *genericPtr = numPtr;
    result = *genericPtr + 7;
}

// This code has two solutions
// Firstly, we can see that no datatype is assigned to result. Secondly, we can see that the datatypes of genericPTR and numPTR are 
// different, one is void and second one is short. We have changed the datatype of genericPTR to short. Also, in order to store
// the address of a pointer, we have to made a pointer using double steric **. So we have written ** to genericPtr. So we have stored 
// the address of numPtr in genericPtr.
// Also in the 4th line, we have written ** to the genericPtr in order to use its value.
// These were the all mistakes present in the above code.


/*int main(){
    short* numPtr;
    int result;
    short **genericPtr = &numPtr;
    result = **genericPtr+7;
}
*/

// This code is not correct. The first thing is the Missing data type. You can see that there is no data type assigned to
// to result variable
// Secondly, we can see that the data type of genericPtr is void, which cannot be used to store the address of Short pointer
// So we have firstly assigned the datatype to the result variable. Secondly, we have made the data type of the two pointer as same 
// SHORT. So u can see now the type of the both genericPTR and numPTR is short. So finally we have stored the address of  

/*int main(){
    short *numPtr;
    int result;
    short *genericPtr=numPtr;
    result = *genericPtr+7;
}
*/

