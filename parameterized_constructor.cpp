#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(int ,int);//declare the parametrized constructor
    void printnumber()
    {
        cout<<"complex number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int c,int d)
{
a=c;
b=d;
}
int main()
{
  complex o(11,7);
o.printnumber();

return 0;
}