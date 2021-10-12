#include<iostream>
#include<bits/stdc++.h>


using namespace std;
void dis(vector<string> &s)
{
    cout<<"here representing the array of string these are : ";
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
        
    }
    
}
int main()
{
  vector<string> str;
  string s;
  for (int  i = 0; i < 5; i++)
  {
      cin>>s;
      str.push_back(s);
  }
  
dis(str);
return 0;
}