#include<iostream>
using namespace std;

int main()
{
  int arr[3]={1,2,3};
  for (int i = 0; i < (1<<3); i++)
  {
      for (int j=0;j<3;j++)
      {
         if(i&(1<<j))
         {
             cout<<arr[j]<<" ";
         }
      }
      cout<<endl;
      
  }
  
return 0;
}