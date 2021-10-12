#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{vector<pair<int,int>>v;
v.push_back(make_pair(5,6));
v.push_back(make_pair(8,9));
v.push_back(make_pair(6,2));

// vector<pair<int,int>>::iterator ptr;
// for (ptr=v.begin() ;ptr!=v.end();ptr++)
cout<<"first elements of vector "<<endl;
for(int i=0;i<v.size();i++)
{
    cout<<v[i].first<<" ";
}
cout<<"\nfirst second of vector "<<endl;
for(int i=0;i<v.size();i++)
{
    cout<<v[i].second<<" ";
}

  
return 0;
}