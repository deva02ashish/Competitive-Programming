#include<iostream>
using namespace std;
int update_bbit(int n,int pos,int value)
{
   int mask=~(1<<pos);
   n=n&mask;
   return (n|(value<<pos));
}
int main()
{
  int n=5;
  int pos=1;
  cout<<update_bbit(n,pos,1);
return 0;
}