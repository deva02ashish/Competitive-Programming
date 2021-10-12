#include<bits/stdc++.h>
using namespace std;

int main()
{
  list<int> a;
  list<int> b;
  a.push_back(67);
  a.push_back(37);
  a.push_back(98);
  a.push_back(43);
  a.push_back(39);
  list<int>::iterator it;
  cout<<"-----all element of the list-----"<<endl;
  for (it=a.begin();it!=a.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl;
// cout<<"fiirst element of list= "<<a.front()<<endl;
// cout<<"last element of list= "<<a.back()<<endl;
// cout<<"check wether container is empry or not "<<endl;
// cout<<a.empty()<<endl;
// cout<<b.empty()<<endl;
// cout<<"size of the list is="<<a.size()<<endl;;
b.assign(a.begin(),a.end());
list<int>::iterator it2;
for(it2=b.begin();it2!=b.end();it2++)
{
    cout<<*it2<<" ";
}
  cout<<endl;
return 0;
}