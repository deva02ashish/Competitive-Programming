#include<iostream>
using namespace std;
void swap_by_value(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void   swap_by_ponter(int *a,int *b)
{
int temp=*a;
    *a=*b;
    *b=temp;
}
void  swap_by_refrence(int &a,int &b)
{
  int temp=a;
    a=b;
    b=temp;
}
int main()
{
  int a=11,b=7;
  cout<<"value of a and b before swaping"<<endl;
  cout<<"value of a is:"<<a<<endl;
  cout<<"value of b is:"<<b<<endl;
//   cout<<"value of a and b after swaping using call by value"<<endl;
//   swap_by_value(a,b);
//    cout<<"value of a is:"<<a<<endl;
//   cout<<"value of b is:"<<b<<endl;
//     cout<<"value of a and b after swaping using call by pointer"<<endl;
//   swap_by_ponter(&a,&b);
//     cout<<"value of a is:"<<a<<endl;
//   cout<<"value of b is:"<<b<<endl;
   cout<<"value of a and b after swaping using call by refrence"<<endl;
  swap_by_refrence(a,b);
    cout<<"value of a is:"<<a<<endl;
  cout<<"value of b is:"<<b<<endl;
return 0;
}