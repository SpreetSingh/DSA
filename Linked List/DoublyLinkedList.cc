#include<iostream>
using namespace std;
class node{
    public:
node*prev;
int data;
node*next;

 node(int d)
{
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}
};
void insertionAthead(node*&head,int d)
{
    node *temp=new node(d);
    head->prev=temp;
    temp->next=head;
    head=temp;
}
void insertionAttail(node*&tail,int d)
{
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertionAtpos(int pos,node*&head,node*&tail,int d)
{
    node*g=head;
    int cnt=1;
    if(pos==1)
    {
        insertionAthead(head,d);
        return;
    }
    while(cnt!=pos-1)
    {
        g=g->next;
        cnt++;
    }
    node *c=g->next;
    if(g->next==NULL)
    {
        insertionAttail(tail,d);
        return ;
    }
    node *temp = new node(d);
    temp->next=g->next;

    temp->prev=g;
    g->next=temp;
    c->prev=temp;

}
void print(node*&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    node*node1=new node (10);
    node*head=node1;
    node*tail=node1;
    insertionAthead(head,21);
    insertionAthead(head,31);
    insertionAthead(head,41);
    insertionAthead(head,51);
    insertionAttail(tail,61);
    insertionAttail(tail,71);
    insertionAttail(tail,81);
    insertionAttail(tail,91);
    insertionAtpos(1,head,tail,25);
    print(head);


}
