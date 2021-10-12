#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];

  }
  int c=*max_element(arr, arr + n);
  
  cout<<"maximum element of the array :"<<c<<endl;
return 0;
}