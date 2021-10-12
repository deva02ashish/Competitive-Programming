#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	 for(int i=0;i<n;i++)
	 {
	     if(i%2==0)
	     {
	     if(a[0]%2==0)
	     {
	         continue;
	     }
	     else
	     {
	         for(int j=i+1;j<n;j++)
	         {
	             if(a[j]%2==0)
	             {
	                 int temp=a[i];
	                 a[i]=a[j];
	                 a[j]=temp;
	                 break;
	             }
	         }
	       }
	     }
	     else
	     {
	         if(a[i]%2==1)
	         {
	             continue;
	         }
	         else
	         {
	             for(int j=i+1;j<n;j++)
	             {
	                 if(a[j]%2==1)
	                 {
	                     int temp=a[j];
	                     a[j]=a[i];
	                     a[i]=temp;
	                     break;
	                 }
	             }
	         }
	     }
	 }
	 long long int sum=0;
	 for(int i=0;i<n;i++)
	 {
	     sum=sum+((a[i]+i+1)%2);
		 cout<<a[i]<<" ";
	 }

	 cout<<endl<<sum<<endl;
	    
	}
	
	return 0;
}
