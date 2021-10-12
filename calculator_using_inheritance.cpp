#include<iostream>
using namespace std;
class calculator
{
    public:
    int a;
    int b;
    void setdata();
    void displaydata();
    void calc();
    
};
void  calculator::setdata()
{
    a=10;
    b=5;
}
void  calculator::displaydata()
{
cout<<"the value of a is: "<<a<<endl;
cout<<"the value of b is: "<<b<<endl;
}
void calculator::calc()
{
    int add,sub,pro,div;
    add=a+b;
    sub=a-b;
    pro=a*b;
    div=(a/b);
    cout<<"sum of the a and b :"<<add<<endl;
    cout<<"subtraction  of the a and b :"<<sub<<endl;
    cout<<"product  of the a and b :"<<pro<<endl;
    cout<<"division  of the a and b :"<<div<<endl;
}
class scientific_calculator:public calculator
{

};
int main()
{
  calculator cal;
  cal.setdata();
  cal.displaydata();
  cal.calc();
return 0;
}