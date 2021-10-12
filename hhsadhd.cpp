#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"given number is : "<<endl;
  cin>>n;
  int count=0;
  int intg;
  do
  {
     intg=n/10;
     n=intg;
     count++;
  } while (intg!=0);
  cout<<"total digit in given number: "<<count<<endl;
  int r=pow(5,count);
  cout<<"the output is : "<<r<<endl;
return 0;
}