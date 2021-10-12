#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	    string s;
	    int l=s.length();
	    	int count1=0,count2=0;
	int count=0;
	    for(int i=0;i<l;i++)
	    {
	        if(s[i]=='a')
	        count1++;
	         else
	         count2++;
	    }
	   if(count1<count2)
	   cout<<count1<<endl;
	   else if(count1==count2)
	   {
	       cout<<count<<endl;
	   }
	   else
	   cout<<count2<<endl;
	    
	}
	return 0;
}
