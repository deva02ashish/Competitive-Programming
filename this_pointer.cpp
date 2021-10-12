#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void set_data(int a)
    {
      this->a=a;
    }
    void get_data()
    {
        cout<<"the value of a is :"<<a<<endl;
    }
};

int main()
{
  A b;
  b.set_data(7);
  b.get_data();
return 0;
}