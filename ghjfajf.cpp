#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    double arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int counter=0;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
                  double d1=((arr[i]-arr[j])/arr[i]);
	          double d2=((arr[i]-arr[j])/arr[j]);
	       cout<<"the value of d1 is ="<<d1<<endl;
	       cout<<"the value of d2 is="<<d2<<endl;
	            if(d1<d2)
	            {
	                counter++;
	            }
	        }
	    }
	    cout<<counter<<endl;
	}
	
	return 0;
}
