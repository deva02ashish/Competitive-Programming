#include<iostream>
using namespace std;

class linked{
    public:
    int a;
    linked *next;
    
    linked(int value)
    {
        a=value;
        next=NULL;
    }

};
void insertAtTail(linked* &head,int val)
{
    linked* m=new linked(val);
    if (head==NULL)
    {
       head=m;
       return;
    }
    
    linked* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=m;
}
void display(linked* head)
{
    linked* temp=head;
    while (temp->next!=NULL)
    {
        cout<<temp->a<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
  linked* head=NULL;
  insertAtTail(head,5);
  insertAtTail(head,8);
  insertAtTail(head,9);
  display(head);

return 0;
}