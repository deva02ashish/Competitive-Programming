#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  v.push_back(5);
  v.push_back(6);
  v.push_back(4);
  v.push_back(11);
  cout<<"element of array are : ";
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<" ";
  }
  cout<<"\n";
cout<<"display the element of array using iterative method :"<<"\n";
vector<int>::iterator it;

for(it=v.begin();it!=v.end();it++)
{
    cout<<*it<<" ";
}
 
 cout<<"display the element of array using auto method :"<<"\n";
 for(auto element:v)
 {
     cout<<element<<" ";
 }
cout<<"\n";
v.pop_back();//pop_back  pops the one element at a time which is inserted at last  
 for(auto element:v)
 {
     cout<<element<<" ";
 }
vector<int>v2(4,51);
cout<<"display the element of array using auto method, these element are same  :"<<"\n";
 for(auto ele:v2)
 {
     cout<<ele<<" ";
 }
swap(v,v2);
cout<<"swaping of vector \n";
 for(auto element:v)
 {
     cout<<element<<" ";
 }
cout<<"\n";
 for(auto element:v2)
 {
     cout<<element<<" ";
 }
cout<<"\n";
cout<<"sorting of array \n";
sort(v2.begin(),v2.end());
 for(auto element:v2)
 {
     cout<<element<<" ";
 }
cout<<"\n";
int l=v2.size();
cout<<"sorting of array from the end \n";
sort(v2.end(),v2.begin());
 for(auto element:v2)
 {
     cout<<element<<" ";
 }
cout<<"\n";
return 0;
}