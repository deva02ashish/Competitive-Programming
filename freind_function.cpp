#include<iostream>
using namespace std;
class complexNumber
{
    int a;
    int b;
    public:
     
   friend complexNumber sumofcomplex(complexNumber o1,complexNumber o2);
    void setnumber(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
void printcomplexNumber(void)
{
    cout<<"the complex number is:"<<a<<"+"<<b<<"i"<<endl;
}
};
complexNumber sumofcomplex(complexNumber o1,complexNumber o2)
{
    complexNumber o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}


int main()
{
  complexNumber c1,c2;
  c1.setnumber(7,11);
  c2.setnumber(21,51);
  c1.printcomplexNumber();
  c2.printcomplexNumber();
sumofcomplex(c1,c2).printcomplexNumber();

return 0;
}