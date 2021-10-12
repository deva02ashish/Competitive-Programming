#include<iostream>
using namespace std;

int main()
{
    //for set bit
  int a=5;
a=(a|(1<<1));
cout<<"the value of a is :"<<a<<endl;
//for unset bit
int b=5;
int d=~(1<<2);
b=b&d;
cout<<"the value of b is :"<<b<<endl;
return 0;
}