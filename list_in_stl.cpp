#include<iostream>
#include<list>


using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it=lst.begin() ; it!= lst.end() ; it++)
    {
         cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
  list<int> list1;//list of 0-length

list1.push_back(7);
list1.push_back(51);
list1.push_back(11);
list1.push_back(41);
list1.push_back(671);
list1.push_back(11);

// list<int>::iterator iter;
// iter=list1.begin();//point to first element of list
// cout<<*iter<<endl;
// iter++;
// cout<<*iter<<endl;
display(list1);
// list1.pop_back();
// list1.pop_front();
// list1.remove(11);
// list1.sort();
// display(list1);

   list<int> list2(3);//empty list of size 7
   list<int>::iterator iter;
   iter=list2.begin();
   *iter=56;
   iter++;
   *iter=77;
   iter++;
   *iter=23;
   iter++;
display(list2);
list1.merge(list2);
cout<<"list after merging: ";
display(list1);
return 0;
}