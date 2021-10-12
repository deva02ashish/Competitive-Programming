#include<iostream>
using namespace std;
class link{
    public:
    int a;
    link* next;
};
void display(link* &hd)
{
    link* temp=hd;
    int i=0;
    while (temp!=NULL)
    {
        cout<<temp->a<<" ";
        temp=temp->next;
        i++;
    }
    cout<<endl;
    // cout<<"last value of temp ="<<temp->a<<endl;
    
    // cout<<"i="<<i<<endl;
}
int main()
{
  link *head=NULL;
  link *second=NULL;
  link *third=NULL;
  head=new link();
 second=new link();
  third=new link();
 head->a=5;
 head->next=second;
 second->a=9;
 second->next=third;
 third->a=11;
 third->next=NULL;
 display(head);
return 0;
}