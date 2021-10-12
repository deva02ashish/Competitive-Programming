#include<bits/stdc++.h>
using namespace std;

int main()
{
  list<int>l;
  l.push_back(65);
  l.push_back(5);
  l.push_back(11);
  l.push_back(43);
  list<int>::iterator it;
  cout<<"all element of the list is------------"<<endl;
  for (it=l.begin();it!=l.end();it++)
  {
      cout<<*it<<" ";
  }
  cout<<endl;
l.sort();
cout<<"all element of the list after sorting is------------"<<endl;
 for (it=l.begin();it!=l.end();it++)
  {
      cout<<*it<<" ";
  }
   cout<<endl;
return 0;
}