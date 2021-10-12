#include<iostream>
using namespace std;

int main()
{
  int n=10;
  int i=0;
  while((n&(1<<i))==0)
  {
      i++;
  }
  cout<<"the value of i ="<<i<<endl;
  n=(n^(1<<i));
  cout<<"the value of n :"<<n<<endl;
  ///following there is another way to solve same problem
  int m=10;
  int d=m-1;
  m=m&d;
  cout<<"the value of m :"<<m<<endl;
return 0;
}