#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
void display(node* hd )
{
    node* temp=hd;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
   
}
node* insertAtend(node* head,int val)
{
    node* temp=head;
    node* neww=new node();
    while (temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=neww;
    neww->data=val;
    neww->next=NULL;
    return head;
}
node* insertAtbegining(node* head,int val)
{
    node* neww=new node();
    neww->data=val;
    neww->next=head;
    return neww;
}
node* inertAtMiddle(node* neww,int val)
{
    node* temp=neww;
node* nexttemp;
    while (temp->data!=67)
    {
        temp=temp->next;
    }
    
    nexttemp=temp->next;
    node* midnod=new node();
    temp->next=midnod;
    midnod->data=val;
    midnod->next=nexttemp;
    return neww;
}
int main()
{
 node *head;
 node *second;
 node *third;
 //alocating memory for node in heap
  head=new node();
 second=new node();
  third=new node();
head->data=67;
head->next=second;
second->data=44;
second->next=third;
third->data=53;
third->next=NULL;
display(head);
  insertAtend(head,4444);
display(head);
node* neww=insertAtbegining(head,22222);
display(neww);
inertAtMiddle(neww,551);
display(neww);
return 0;
}