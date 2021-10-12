#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    void setdata(int a1,int b1)
    {
     a=a1;
     b=b1;
    }
    void sumofcomplex(complex o1,complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b  ; 
         }
         void print(void)
         {
             cout<<"complex number is:"<<a<<"+"<<b<<"i"<<endl;
         }
};


int main()
{ complex d1,d2,d3;
  d1.setdata(1,2);
  d1.print();
  d2.setdata(4,11);
  d2.print();
d3.sumofcomplex(d1,d2);
d3.print();

return 0;
}