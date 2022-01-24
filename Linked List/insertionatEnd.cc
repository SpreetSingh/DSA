#include<iostream>
using namespace std;
class node{
    public:
int data;
node*next;
node(int d)
{
    this->data=d;
    this->next=NULL;
}
};
void insertion(node*&tail,int d)
{
    node *temp = new node(d);
    temp->next=NULL;
    tail->next=temp;
    tail=temp;
}
void print(node*&head)
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
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insertion(tail,21);
    insertion(tail,14);
    insertion(tail,15);insertion(tail,16);
    print(head);
}


