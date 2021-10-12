#include <bits/stdc++.h>
using namespace std;

int no_of_square(int n,int k)
{  
    cout<<"in function"<<endl;
    int i=1;
   if(n==0)
   {
       cout<<"function call end"<<endl;
   return k ;
   }
   else
   {
       while((i*i)<=n)
       {
           i++;
           
       }
       n=n-(i*i);
       k++;
       no_of_square(n,k);
   }
    
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int k=1;
	    cout<<no_of_square(n,k)<<endl;
	    cout<<"after function call"<<endl;
	}
	return 0;
}
