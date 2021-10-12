#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    private:
    int b;
};
class derived:protected base
{
   
  public:

   void setdata()
   {
         a=10;
       cout<<"the value of a is:"<<a<<endl;
   }
};
int main()
{
  derived d;
  base b;
//   b.a;//it is not accessible beacuse it is protected data
  d.setdata();
return 0;
}