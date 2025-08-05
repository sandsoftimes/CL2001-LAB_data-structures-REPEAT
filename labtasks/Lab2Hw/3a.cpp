#include<iostream>
using namespace std;
void mystery1(char *kyle, const char *syle);
int main(){
    char string1[88];
    char string2[80];
    cout<<"Enter two strings: ";
    cin>>string1>>string2;
    mystery1(string1, string2);
    cout<<string1<<endl;

} // end of main
void mystery1(char *kyle, const char *syle){
    char* s1;
    const char* s2;
    s1 = kyle;
    s2 = syle;
    while(*s1!='\0')
    ++s1;
    for(;*s1=*s2;++s1,++s2)
    cout<<"Hello";
    
}

// Here, the 