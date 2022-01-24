#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
insertion(node*&head,int i)
{
    node *temp=new node(i);
    temp->next=head;
    head=temp;
}
print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    node *node1=new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    node*head;
    head=node1;
    insertion(head,21);
    insertion(head,32);
    print(head);
}
