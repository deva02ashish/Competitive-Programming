#include<bits/stdc++.h>
using namespace std;

int main()
{
 vector<int>v={9,0,9,0}  ;
 for (int i = 0; i < 3; i++)
 {
 int temp;
 cin>>temp;
 int idx=3;
 while(temp)
 {
   int p=temp%10;
   temp/=10;
   if(idx%2){
     v[idx]=max(v[idx],p);
     cout<<"v[idx]="<<v[idx]<<endl;
   }
   else
   {
     v[idx]=min(v[idx],p);
   }
   idx--;
   
 }
 }
 for(int i=0;i<4;i++)
 {
   cout<<v[i];
 }
return 0;
}