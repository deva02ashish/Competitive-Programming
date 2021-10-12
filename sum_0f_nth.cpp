#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
      return 0;
    }
    int ps=sum(n-1);
    cout<<"sum of the previous number ="<<ps<<endl;
    return n+ps;
   
}
int main()
{
  int n;
  cout<<"please enter the number n=";
  cin>>n;
  cout<<sum(n);
return 0;
}