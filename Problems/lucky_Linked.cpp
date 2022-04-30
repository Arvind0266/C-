#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head = NULL;
void insertBeg(int n)
{
    node *ptr = new node();
    ptr->data = n;
    ptr->link = head;
    head = ptr;
}
void insertEnd(int n)
{
    node *ptr = new node();
    ptr->data = n;
    ptr->link = NULL;
    if (head == NULL)
        head = ptr;
    else
    {
        node *temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = ptr;
    }
}
void dispLink()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << "\n";
}
void deleteBeg()
{
    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;
    }
    else if (head->link == NULL)
    {
        node *ptr = head;
        head = NULL;
        free(ptr);
    }
    else
    {
        node *ptr = head->link;
        head = head->link->link;
        free(ptr);
    }
}
int main()
{
    int n;
    cout<<"Enter the No of elements= ";
    cin>>n;
    cout<<"Enter the elements ";
    for(int i=1;i<=n;i++)
    {
        
        int y;
        cin>>y;
        insertEnd(y);
    }
    deleteBeg();    
        
    
    
        dispLink();
}