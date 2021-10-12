#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
  cin>>s;
  int len=s.size();
  cout<<len<<endl;
  int mid=len/2;
  int count=1;
  for (int i = 0,j=mid; i <= mid-1,j<len; i++,j++)
  {
     if (s[i]!=s[j])
     {
     count=0;
     break;
     }
  }
  if (count)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
  
  

  
  
return 0;
}