#include<iostream>
using namespace std;

int main()
{
  int n=5;
  int count=0;
  while (n!=0)
  {
   n=n&(n-1);
   count++;
  }
  cout<<"number of set bit : "<<count<<endl;
return 0;
}