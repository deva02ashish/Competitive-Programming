#include<iostream>
using namespace std;
void primeNumber(int n)
{
int m=n/2;
int flag=0;
for (int i = 2; i <=m; i++)
{
   if (n%i==0)
   { 
   
      flag=1;
      cout<<n<<" is divisible by:"<<i<<endl;
   }
      
}
if (flag)
      {
          cout<<"given number is not a prime number"<<endl;
      }
else
      {
          cout<<"given number is  a prime number"<<endl; 
      } 
}
int main()
{
    int n;
    cout<<"please enter the number which is to be checked,whether it is prime or not: ";
    cin>>n;
    primeNumber(n);
    return 0;
}