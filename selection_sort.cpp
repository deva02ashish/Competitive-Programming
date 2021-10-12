#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int temp=arr[i];
        int k=i;
       for (int j= i+1 ; j < n; j++)
       {
         if (temp>arr[j])
         {
            temp=arr[j];
         k=j;
         }
         
       }
       arr[k]=arr[i];
       arr[i]=temp;
        
       
    }
    cout<<endl<<"array after sorting : "<<endl;
    for (int  i = 0; i < n; i++)
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
selection_sort(arr,n);
return 0;
}