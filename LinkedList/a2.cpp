// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node *link;
// };
// node *head=NULL;
// void insertBeg(int n)
// {
//     node *ptr=new node();
//     ptr->data=n;
//     ptr->link=head;
//     head=ptr;
// }
// void insertEnd(int n)
// {
//     node *ptr=new node();
//     ptr->data=n;
//     ptr->link=NULL;
//     if(head==NULL)
//     {
//         head=ptr;
//     }
//     else
//     {
//         node *temp=head;
//         while(temp->link!=NULL)
//         {
//             temp=temp->link;
//         }
//         temp->link=ptr;
//     }
// }
// void dispLink()
// {
//  node *temp=head;
//  while(temp!=NULL)
//  {
//   cout<<temp->data<<" ";
//   temp=temp->link;
//  }
//  cout<<"\n";
// }
// int main()
// {
// insertBeg(4);
// insertBeg(6);
// insertBeg(5);
// dispLink();

// return 0;
// }


#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertEnd(node* &head, int data)
{
    node *n = new node(data);
    
        if (head == NULL)
        {
            head = n;
            return;

            
        }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void dispLink(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    node *head = NULL;
    insertEnd(head,1);
    insertEnd(head,2);
    insertEnd(head,4);
    dispLink(head);

    return 0;
}