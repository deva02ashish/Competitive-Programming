#include<iostream>
using namespace std;

int main()
{
  int num;
  cin>>num;
  int temp=num;
  int res=0;
  while (num)
  {
      int rem=num%10;
      num=num/10;
res=res*10+rem;
  }
  cout<<res<<endl;
  cout<<temp-res<<endl;
return 0;
}