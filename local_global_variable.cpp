#include<iostream>
using namespace std;
int glo=51;
int main()
{int a= 11;
int b= 21;
float pi=3.14;
char c='D';
bool bl=true;
int glo=101;//local variable has high precedence than global variable
    cout<<"here we wil learn h.\n here the value of a is "<<a<<"\n the value of b is "<<b;
    cout<<"\nthe value of pi is: "<<pi;
    cout<<"\nthe character is: "<<c;
     cout<<"\nthe global variable is : "<<glo;
cout<<"\nvalue of bool data type is:"<<bl;
    return 0;
}