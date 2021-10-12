#include<iostream>
using namespace std;
template<class T1,class T2>
class myclass
{
public:
T1 data1;
T2 data2;
myclass(T1 a,T2 b)
{
    data1=a;
    data2=b;
}
void display()
{
    cout<<"this is data1 : "<<data1<<" And this is data2 : "<<data2<<endl;
}
};
int main()
{
    myclass  <int,char>v(1,'V');

  v.display();

  
return 0;
}