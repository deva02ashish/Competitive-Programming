#include<iostream>
using namespace std;
class employee
{
int id;
int salary;
public:
void setid(void)
{
    cout<<"please enter the id of employee:"<<endl;
    cin>>id;

}
void getid(void)
{
    cout<<"id of the employee is: "<<id<<endl;
}
};
int main()
{
//   employee vivek,deva,prince,abhay;
//   vivek.setid();
//   vivek.getid();
//     deva.setid();
//   deva.getid();
//     prince.setid();
//   prince.getid();
//     abhay.setid();
//   abhay.getid();
employee fb[4];
for (int i = 0; i < 4; i++)
{
    fb[i].setid();
    fb[i].getid();
}

return 0;
}