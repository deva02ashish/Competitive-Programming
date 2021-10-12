#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"please enter the number n=";
  cin>>n;
  if (n==1||n==0)
  {
      cout<<" given number is not a power of 2  "<<endl;
  }
  
 else if((n&(n-1))==0)
  {
      cout<<"given number is a power of 2 "<<endl;
  }
  else
  {
    cout<<"given number is not a power of 2 "<<endl;  
  }
return 0;
}