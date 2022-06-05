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
            head = n;
    

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