#include<iostream>
using namespace std;

int main()
{
  int a;
  cout<<"pleaseenter the first number a=";
  cin>>a;
  int b;
   cout<<"pleaseenter the first number b=";
   cin>>b;
   int temp=a^b;
   a=a^temp;
   b=b^temp;
   cout<<"the value of a is ="<<a<<endl;
   cout<<"the value of b is ="<<b<<endl;
return 0;
}