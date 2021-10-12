#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	  
	    
	    long int a,b,c;
	    cin>>a>>b>>c;
	  long  int temp1,temp2;
	    if(a>b&&a>c)
	  {
	      temp1=a;
	      if(b>c)
	      {
	          temp2=b;
	      }
	      else
	      temp2=c;
	  }
	  else if(b>c&&b>a)
	  {
	      temp1=b;
	      if(c>a)
	      {
	          temp2=c;
	      }
	      else
	      temp2=a;
	  }
	  else if(c>a&&c>b)
	  {
	      temp1=c;
	      if(b>a)
	      temp2=b;
	      else
	      temp2=a;
	  }
      cout<<"the value of temp1="<<temp1<<endl;
      cout<<"the value of temp2="<<temp2<<endl;
	  long long int sum=temp1+temp2;
	  cout<<sum<<endl;
	}
	return 0;
}
