#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"please enter the number :";
  cin>>n;
  int count=0;
  while(n!=0)
  {
  
   n=n&(n-1);
count++;
  }
  cout<<"number of 1 is in binary form of given number :"<<count<<endl;
return 0;
}