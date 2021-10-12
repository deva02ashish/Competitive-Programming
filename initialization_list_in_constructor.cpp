#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
public:
test(int i,int j):a(i),b(j)
{
    cout<<"constructed executed:"<<endl;
    cout<<"the value of a is :"<<a<<endl;
    cout<<"the value of b is :"<<b<<endl;
}
};
int main()
{
    test t(4,7);
    

  
return 0;
}