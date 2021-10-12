#include<iostream>
using namespace std;
class simple
{
    int data1,data2;
    public:
    simple(int a,int b=11)
    {
        data1=a;
        data2=b;
    }
    void printnumber();

};
 void simple:: printnumber()
 {
     cout<<"the value of data1 and data2 is: "<<data1<<" and "<<data2<<endl;
 }

int main()
{ simple o(5);
o.printnumber();
  
return 0;
}