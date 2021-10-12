#include<iostream>
using namespace std;

int main()
{
  int a=13;
  if(a&(1<<3))
  {
      a=a&(~(1<<3));
      
  }
  else
  {
      a=a|(1<<3);
      
  }
cout<<"the value of a is : "<<a<<endl;
  
  ////or///
  int b=13;
  b=b^(1<<3);
  cout<<"the value of a is : "<<b<<endl;
return 0;
}