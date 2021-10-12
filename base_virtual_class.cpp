#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
int a[t],b[t];
for (int  i = 0; i < t; i++)
{
    cin>>a[i] >>b[i];
    
}
cout<<"here operation of sumation start"<<endl;
for (int i = 0; i < t; i++)
{
  cout<<a[i]+b[i]<<endl;
}

  
return 0;
}
