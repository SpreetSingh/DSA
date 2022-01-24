#include<iostream>
using namespace std;
class node{
    public:
node*prev;
int data;
node*next;
node(int d)
{
    this ->data=d;
    this->next=NULL;
    this->prev=NULL;
}
};
void insertion(node*&tail,node*&head,int d)
{
    node*temp=new node(d);
    temp->prev=tail;
    temp->next=head;
    tail->next=temp;
    head->prev=temp;
    temp=tail;
}
void print(node*&tail)
{node*temp=tail;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }while(temp!=tail);
}
int main()
{
    node *node1=new node(10);
    node*head=node1;
    node*tail=node1;
    node1->next=node1;
    node1->prev=node1;
    print(tail);
    insertion(tail,head,21);
    print(tail);
}
