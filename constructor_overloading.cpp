#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(int x,int y)
    {
        a=x;
        b=y;

    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    complex()
    {
        a=0;
        b=0;
    }
    void printpoint()
    {
        cout<<"the point is: ("<<a<<","<<b<<")"<<endl;
    }
};
int main()
{
  complex c1(5,6);
  c1.printpoint();
  complex c2(7);
  c2.printpoint();
  complex c3;
  c3.printpoint();
return 0;
}