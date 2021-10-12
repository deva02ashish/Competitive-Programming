#include<iostream>
#include<algorithm>
#include<functional>


using namespace std;

int main()
{
  int arr[]={6,7,2,87,9,3};
//   sort(arr,arr+6);
  sort(arr,arr+6,greater<int>());
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  
return 0;
}