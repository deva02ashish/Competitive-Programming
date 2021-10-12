#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        int count=0;
	      for(int j=0;j<n;j++)
	      {
	          if(arr[i]==arr[j]&&i!=j)
	          {
	              count=1;
	          }
	          
	      }
	      if(count==0)
	      {
	          cout<<arr[i]<<endl;
	          break;
	      }
          
	    }
	}
	return 0;
}