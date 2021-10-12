// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  // int m;
  // cout<<"please enter the number m=";
  // cin>>m;
  // int n;
  //   cout<<"please enter the number n=";
  // cin>>n;
  // int d=(m<<n);
  // cout<<"the value of d="<<d<<endl;
  int arr[3]={6,4,10};
  int m=*max_element(arr,arr+3);
  cout<<m;
return 0;
}