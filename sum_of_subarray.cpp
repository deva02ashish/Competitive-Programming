#include<iostream>
using namespace std;
void sum_of_subarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {int k=i;
        while(k<n)
        {
           int sum=0;
        for (int j=i;j<=k;j++)
        {
            sum=sum+arr[j];
        }
        cout<<"sum of the subarray is : "<<sum<<endl;
        k++;
        }
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
sum_of_subarray(arr,n);
return 0;
}