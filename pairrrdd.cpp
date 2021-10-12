#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int>arr;
arr.push_back(6);
arr.push_back(5);
arr.push_back(15);
arr.push_back(20);
arr.push_back(23);
arr.push_back(8);
vector<int>::iterator ptr;
cout<<"the ";

for ( ptr=arr.begin() ;ptr!=arr.end(); ptr++)
{
   cout<<*ptr<<" ";
}

return 0;
}