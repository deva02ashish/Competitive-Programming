#include<iostream>
using namespace std;
class shopitem
{
    int id;
    float price;
    public:
    void set_data(int a, float b)
    {
        id=a;
        price=b;

    }
    void get_data()
    {
        cout<<"code of this item is :"<<id<<endl;
        cout<<"price of this item is :"<<price<<endl;
    }
};
int main()
{
    int size=3;
shopitem *ptr=new shopitem[size];
shopitem *ptrtemp=ptr;
int p;
float q;
for (int i = 0; i < size; i++)
{
   cout<<"enter id and price of item :"<<i+1<<endl;
   cin>>p>>q;
//    (*ptr).set_data(p,q);
ptr->set_data(p,q);
ptr++;
}
for (int i = 0; i < size; i++)
{
    cout<<"item number :"<<i+1<<endl;
    ptrtemp->get_data();
    ptrtemp++;
}

return 0;
}