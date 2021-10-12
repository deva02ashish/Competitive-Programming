#include<iostream>
using namespace std;
template<class T>
class data
{
public:
T a;
data(T b)
{
    a=b;
}
void display();
};
template<class T>
void data<T>:: display()
{
    cout<<"the value of  a is :"<<a<<endl;
}
void func(int a)
{
    cout<<"i am first func(): "<<a<<endl;
}
template <class T>
void func(T a)
{
    cout<<"i am tempalist func(): "<<a<<endl;
}
int main()
{data <int>obj(51);
cout<<obj.a<<endl;
obj.display();
  func(4);
return 0;
}