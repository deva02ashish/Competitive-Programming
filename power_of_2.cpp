#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"please enter the number which is to be checked :";
  cin>>n;
  if (n==0)
  {
      cout<<" given number is not a power of 2";
  }
  else{
  if((n!=0)&&((n&(n-1))==0))
  {
     cout<<" given number is a power of 2";

  }
  else
  {
      cout<<" given number is not a power of 2";
  }
  }
return 0;
}