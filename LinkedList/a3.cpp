#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *link;
};
node *head=NULL;
void insertBeg(int n)
{
    node *ptr=new node();
    ptr->data=n;
    ptr->link=head;
    head=ptr;
}
void insertEnd(int n)
{
    node *ptr=new node();
    ptr->data=n;
    ptr->link=NULL;
    if(head==NULL)
    head=ptr;
    else
    {
        node *temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;
    }
}
void deleteEnd()
{
 node *ptr;

 //if list is empty.
 if(head==NULL)
  cout<<"EMPTY LIST\n";
 //if list has only one node.
 if(head->link==NULL)
 {
  ptr=head;
  head=NULL;
  free(ptr);
 }
 //Traversing the list.
 else
 {  node *prev;
  ptr=head;
  while(ptr->link!=NULL)
  {
   prev=ptr;
   ptr=ptr->link;
  }
  prev->link=NULL;
  free(ptr);

 }

}

void dispLink()
{
 node *temp=head;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
  temp=temp->link;
 }
 cout<<"\n";
}
int main()
{
insertBeg(4);
insertBeg(6);
insertBeg(5);
insertEnd(10);
dispLink();
deleteEnd();
deleteEnd();
dispLink();

return 0;
}