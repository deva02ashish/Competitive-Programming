#include<iostream>
using namespace std;
class complex
{
int real,imaginary;
public:
void get_data(void)
{
    cout<<"the real part of the complex number is :"<<real<<endl;
    cout<<"the imaginary part of the complex number is :"<<imaginary<<endl;
}
void set_data(int a,int b)
{
    real=a;
    imaginary=b;
}
};
int main()
{
// complex c1;
// complex *ptr=&c1;
complex *ptr=new complex;
  (*ptr).set_data(5,6);
  (*ptr).get_data();
return 0;
}