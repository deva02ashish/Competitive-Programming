#include<iostream>
using namespace std;
int factorial(int fact)
{
    if (fact==1||fact==0)
    {
       return 1; 
    }
    else
    {
      return  fact=fact*factorial(fact-1);
    }
    
    
}
int main()
{
  int fact=5
  ;
  int a=factorial(fact);
  cout<<"fatorial of given number "<<fact<<" is :"<<a<<endl;
return 0;
}