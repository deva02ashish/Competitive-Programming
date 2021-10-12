#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t
	int arr[t];
	for (int i = 0; i < t; i++) {
	    cin>>arr[i];
	}
	int num;
	for (int i = 0; i < t; i++) {
	   int sum=0;
	   int n1=arr[i];
	   do
	   {
	       int r=n1%10;
	       sum=sum+r;
	       num=n1/10;
	       n1=num;
	   }while(num!=0);
	   cout<<sum<<endl;
	}
	
	return 0;
}
