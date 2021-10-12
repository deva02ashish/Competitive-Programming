#include<iostream>
using namespace std;
class c2;
class c1
{
    int val1;
     
    public:
    void indata(int a)
    {
        val1=a;
    }
    void display(void)
    {
        cout<<"the value of val1: "<<val1<<endl;
    }
   friend void swap(c1 &,c2 &);
};
class c2
{
    int val2;
   
    public:
    void indata(int b)
    {
        val2=b;
    }
    void display(void){
        cout<<"the value of val2: "<<val2<<endl;
    }
    friend void swap(c1 &,c2 &);
};
void swap(c1 &x,c2 &y)
{
int temp;
temp=x.val1;
x.val1=y.val2;
y.val2=temp;
}
int main()
{
  c1 o1;
  c2 o2;
  o1.indata(51);
  o2.indata(11);
  swap(o1,o2);
  cout<<"the value after swaping"<<endl;
  o1.display();
  o2.display();

return 0;
}