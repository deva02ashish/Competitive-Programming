#include<iostream>
using namespace std;
int unset_bit(int a,int pos)
{
    return (a&(~(1<<pos)));
}
int main()
{
  int a=5;
  int pos=0;
  cout<<unset_bit(a,pos);
return 0;
}