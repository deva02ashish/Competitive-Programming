#include<iostream>
using namespace std;

int main()
{
  long long int t;
  cin>>t;
  while (t--)
  {
     long long int n;
     cin>>n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        int noofodd,noofeven;
        if (n%2==0)
        {
            noofeven=n/2;
            noofodd=n/2;
        }
        else
        {
             noofeven=n/2;
            noofodd=(n/2+1);
        }
        long long int count_odd=0,count_even=0,sum=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]%2==0)
            {
               count_even++;
            }
            else
            {
                count_odd++;
            }

        }
        if (noofodd<=count_even)
        {
            sum=sum+noofodd;
        }
        else
        {
            sum=sum+count_even;
        }
        if (noofeven<=count_odd)
        {
            sum=sum+noofeven;
        }
        else
        {
            sum=sum+count_odd;
        }
        
        cout<<sum;
        
        
        
  }
  
return 0;
}