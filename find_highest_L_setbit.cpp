#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"please enter the number n=";
  cin>>n;
  int i=0;
  while(n!=0)
  {
      if (n&(1<<i))
      {
         n=(n&(~(1<<i)));
      }
      i++;
      
  }
  int d=(1<<(i-1));
  cout<<"the result is = "<<d<<endl;
return 0;
}