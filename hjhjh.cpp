#include<iostream>
using namespace std;

int main()
{
  int arr[5]={4,0,3,1,2 };
  int str[5];
   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
   {
       str[i]=arr[arr[i]];
   }
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
  {
     cout<<str[i]<<" "; 
  }
  

return 0;
}