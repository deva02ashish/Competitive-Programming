#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int sum=0;
	    cin>>n;
	    int r;
	    r=n%10;
	    sum=sum+r;
	    int integer=n/10;
	    while(integer!=0)
	    {
	      r=n%10;  
	      integer=n/10;
	      n=integer;
	    }
	    sum=sum+r;
	    cout<<sum<<endl;
	    
	}
	return 0;
}