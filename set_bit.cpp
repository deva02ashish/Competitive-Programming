#include<iostream>
using namespace std;
int set_bit(int a,int pos)
{
    return (a|(1<<pos));
}
int main()
{
  int a=5;
  int pos=1;
  cout<<set_bit(a,pos)<<endl;
return 0;
}