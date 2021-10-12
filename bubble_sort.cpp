#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        
       for (int  j = 0; j <n-1-i; j++)
       {
         if (arr[j]>arr[j+1])
         {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
         
       }
          cout<<endl<<" array after one pass : "<<endl;
for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
}
       
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
bubble_sort(arr,n);
return 0;
}