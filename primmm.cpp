#include<iostream>
using namespace std;

int main()
{int n;
int count=0;
cin>>n;
      for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count=1; 
    }
    if (count==1)
    {
    cout<<"not prime"<<endl;
    }
    else
    {
        cout<<"prime";
    }
    

    
return 0;
}