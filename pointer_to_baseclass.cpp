#include<iostream>
using namespace std;
class baseclass
{
public:
int var_base;
void display()
{
    cout<<"displaying base class variable var_base :"<<var_base<<endl;
}
};
class derivedclass:public baseclass
{
public:
int var_derived;
void display()
{
    cout<<"displaying base class variable var_base :"<<var_base<<endl;
    cout<<"displaying derived class variable var_derived :"<<var_derived<<endl;
}
};
int main()
{
  baseclass *base_class_ponter;
  baseclass obj_base;
  derivedclass obj_derived;
  base_class_ponter=&obj_derived;
  base_class_ponter->var_base=51;
  base_class_ponter->display();
  derivedclass *derived_class_pointer;
  derived_class_pointer=&obj_derived;
  derived_class_pointer->var_derived=91;
  derived_class_pointer->display();
return 0;
}