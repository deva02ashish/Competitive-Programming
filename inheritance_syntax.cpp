#include<iostream>
using namespace std;
class employee//base class
{
 
   
    public:
       int id ;
     float salary;
     employee(){};
    employee(int inpaid)
    {
        id=inpaid;
        salary=34.0;
    }
};
//creating derived class
class programer :employee
{
    public:
    programer(int inpaid)
    {
        id=inpaid;
  
    }
    void getdata(void)
    {
        cout<<id<<endl;
    }
      int languagecode=9;
};
int main()
{
  employee rohan(1),harry(2);
  cout<<rohan.salary<<endl;
   cout<<harry.salary<<endl;
programer skilf(3);
cout<<skilf.languagecode<<endl;
skilf.getdata();
return 0;
}