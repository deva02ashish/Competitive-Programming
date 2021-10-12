#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(vector<float> &a)
{
    cout<<"the given array is : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
  vector<float> vec2;
  int n;
  
  cout<<"enter the number ,that is declare the how many elements will be store : ";
  cin>>n;
  float num;
  for (int i = 0; i < n; i++)
  {
cin>>num;
     vec2.push_back(num);
  }
  display(vec2);
return 0;
}