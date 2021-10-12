#include<iostream>
using namespace std;
void fabbo(int n)
{
    int n1=1,n2=1;
    int n3;
    cout<<"fabbonacci series is: "<<n1 <<" "<<n2;
    for (int i = 1; i <= n-2; i++)
    {
      n3=n1+n2;
      cout<<" "<<n3;
      n1=n2;
      n2=n3;
    }
    
}
int main()
{
    int n;
    cout<<"please enter the number of fabbonacci series:";
    cin>>n;
    fabbo(n);
}