#include<iostream>
using namespace std;

int main()
{
  int a=5;
  int *p=&a;
  cout<<"thr value of a is :"<<*p<<endl;
  int *ptr=new int(11);
  float *f=new float(60.77);
  cout<<"the data is entered :"<<*ptr<<endl;
  cout<<"the data is entered :"<<*f<<endl;
  return 0;
}