#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"please enter the size of array n=";
  cin>>n;
  int arr[n];
  cout<<"please enter the element of array "<<endl;
  for (int i = 0; i < n; i++)
  {
     cin>>arr[i];
  }
  int temp=0;
  for (int i = 0; i < n; i++)
  {
      temp=temp^arr[i];
  }
  cout<<"the element which is occuring odd numbers of times="<<temp<<endl;
  
return 0;
}