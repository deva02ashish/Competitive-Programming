#include<iostream>

#include <cmath>
using namespace std;
class point
{
    int a,b;
    public:
    point(int ,int);//parameterized constructor
  void displaypoint()
  {
      cout<<"the point is :("<<a<<" , "<<b<<")"<<endl;
  }
  friend void distance(point ,point);
};
point ::point(int x,int y)
{
    a=x;
    b=y;
}
void distance(point o1,point o2)
{
int d;
d=((o1.a-o2.a)*(o1.a-o2.a))+((o1.b-o2.b)*(o1.b-o2.b));
cout<<"distance:"<<d<<endl;
float sq;
sq=sqrt(d);
cout<<"distance between two point :"<<sq<<endl;
}
int main()
{
  point o1(0,1);
o1.displaypoint();
point o2(0,6);
o2.displaypoint();
distance(o1,o2);
return 0;
}