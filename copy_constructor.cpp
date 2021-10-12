#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class number
{
    int a;
    public:
    number(){};//default constructor
    number(int num)
    {
        a=num;
    }
    number(number &obj)
    {
        cout<<"copy constructor called!!"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"the given number is: "<<a<<endl;
    }
};
int main()
{number n1,n2(8),n3;
n1=number(5);
n1.display();
n2.display();
  number z1(n1);
  z1.display();
return 0;
}
