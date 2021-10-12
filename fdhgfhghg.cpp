#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n],b[n];
	   
	    int dif,temp=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {    cin>>a[i];
	    cin>>b[i];
	        dif=a[i]-temp;
	        temp=a[i];
	        if(b[i]<=dif)
	        {
	            count++;
	            cout<<"the value of b[i] and dif :"<<b[i]<<" and "<<dif<<endl;
	            cout<<"the value of count :"<<count<<endl;
	        }
	    }
	    cout<<"finale counting :"<<count<<endl;
	}
	return 0;
}