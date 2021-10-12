#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
     int temp=arr[i];
     int k=i-1;
     while (temp<arr[k]&&k>=0)
     {
        arr[k+1]=arr[k];
        k--;
     }
     arr[k+1]=temp;
        
    }
   cout<<endl<<" array after sorting : "<<endl;
for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
} 
}
int main()
{
      int n;
  cout<<"please enter the size of array :";
  cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}
cout<<" array before sorting : "<<endl;
for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
}
insertion_sort(arr,n);
return 0;
}