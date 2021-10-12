#include<bits/stdc++.h>
using namespace std;

int main()
{
  list<int> ll;
ll.push_back(25);
ll.push_back(7);
ll.push_back(11);
ll.push_back(8);
ll.push_back(89);
// list<int>::iterator it;
// // it=ll.begin();
// it=ll.end();
// // cout<<*it<<endl;
// cout<<*it<<endl;
// cout<<*ll.begin()<<endl;
// cout<<*ll.end()<<endl;
// //here we will see the use of end and begin iterator
// cout<<"here render the element of list in ascending order"<<endl;
// for ( it=ll.begin();it!=ll.end();it++)
// {
//     cout<<*it<<" ";
// }
// //here we will see the use of rend and rbegin iterator
// cout<<endl<<"here render the element of list in descending order"<<endl;
// list<int>::reverse_iterator i;

// for (i=ll.rbegin();i!=ll.rend();i++)
// {
// cout<<*i<<" ";
// }
// cout<<endl;
list<int>::const_iterator i;
for (i=ll.cbegin();i!=ll.cend();i++)
{
  cout<<*i<<" ";
}
cout<<endl;
list<int>::const_reverse_iterator it;
for (  it=ll.crbegin();it!=ll.crend();++it)
{
  cout<<*it<<" ";
}

return 0;
}