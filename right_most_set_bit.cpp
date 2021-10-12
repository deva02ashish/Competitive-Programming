#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"please enter the number n=";
  cin>>n;
  int i=0;
  while ((n&(1<<i))==0)
  {
      i++;
  }
   n=(1<<i);
cout<<"the value of right most set bit ="<<n<<endl;
return 0;
}