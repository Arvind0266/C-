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
void deleteEnd()
{
    node *ptr;
    if (head == NULL)
        cout << "Linked List Is Empty" << endl;
    else if (head->link == NULL)
    {
        ptr = head;
        head = NULL;
        free(ptr);
    }
    else
    {
        node *preq = head;
        while (ptr->link != NULL)
        {
            preq = ptr;
            ptr = ptr->link;
        }
        preq->link = NULL;
        free(ptr);
    }
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
        node *ptr = head;
        head = head->link;
        free(ptr);
    }
}
void showMid()
{
    node *slow = head;
    node *fast = head;
    if (head == NULL)
    {
        cout << "Linked List Is Empty";
    }
    else
    {
        while (fast != NULL && fast->link != NULL)
        {

            slow = slow->link;
            fast = fast->link->link;
        }
        cout << "The Middle element of the list is " << slow->data << endl;
    }
}
void reverse()
{
    node *p = NULL;
    node *c = head;
    node *n;
    if (head == NULL)
    {
        cout << "Linked List Is Empty" << endl;
    }
    while (c != NULL)
    {
        n = c->link;
        c->link = p;
        p = c;
        c = n;
    }
    head = p;
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
void deleteNode(node *ptr)
{
    node *temp;
    temp = ptr->link;
    ptr->data = temp->data;
    ptr->link = temp->link;
    free(temp);
}
int searchL(int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return 1;
        }
        temp = temp->link;
    }
    return 0;
}
void deletion(int val)
{
    node *temp = head;
    while (temp->link->data != val)
    {
        temp = temp->link;
    }
    node *todelete = temp->link;
    temp->link = temp->link->link;
    delete todelete;
}
void deleteAtHead()
{
    node *todelete = head;
    if (head == NULL)
    {
        cout << "Empty";
    }
    head = head->link;
    free(todelete);
}
void recursive(node *&head)
{

    if (head == NULL)
    {
        return;
    }
    recursive(head->link);
    cout << head->data << " ";
}
// void reverseRecursive(node* &head)
// {
//     if(head==NULL || head->link==NULL)
//     {
//         return head;
//     }
//     node* newhead=reverseRecursive(head->link);
//     head->link->link=head;
//     head->link=NULL;
//     return newhead;
//     dispLink();
// }
int main()
{
    insertBeg(2);
    insertBeg(1);
    insertEnd(3);
    insertEnd(4);
    //     dispLink();
    //     showMid();
    //     reverse();
    //     dispLink();
    //     cout << "Enter the number to be Searched= ";
    //     int y;
    //     cin >> y;
    //     int x = searchL(y);
    //     if (x > 0)
    //         cout << "Search Successfull" << endl;
    //     else
    //         cout << "Search NOt Successfull" << endl;
    //     dispLink();

    // deletion(3);
    // dispLink();

    // deleteAtHead();
    // dispLink();

    // deleteBeg();
    // dispLink();
    // deleteBeg();
    // dispLink();
    // deleteBeg();
    // deleteAtHead();
    // insertEnd(5);
    // dispLink();

    recursive(head);


    return 0;
}