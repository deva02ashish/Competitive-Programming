#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void print_data_base1(void)
    {
        cout << "your data1 is :" << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void print_data_base2(void)
    {
        cout << "your data2 is :" << data2 << endl;
    }
};
class derived:public base1,public base2
{
int derived1,derived2;
public:
derived(int a,int b,int c, int d):base1(a),base2(b)
{
    derived1=c;
    derived2=d;
    cout<<"derived constructor is called"<<endl;
}
void print_data_derived()
{
    cout<<"the  data of derived1 is :"<<derived1<<endl;
    cout<<"the  data of derived2 is :"<<derived2<<endl;
}
};
int main()
{
derived deva(4,6,8,10);
deva.print_data_base1();
deva.print_data_base2();
deva.print_data_derived();


    return 0;
}