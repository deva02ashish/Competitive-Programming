#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    long int  n;
	    cin>>n;
	   long int arr[n];
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
        long int temp=arr[0];
	    for(int i=0;i<n;i++)
	    {
	       
	       if(arr[i]<temp)
	       {
	          temp=arr[i];
	       }
	     
	    }
        cout<<temp<<endl;
	    cout<<temp*(n-1)<<endl;
	}
	return 0;
}

