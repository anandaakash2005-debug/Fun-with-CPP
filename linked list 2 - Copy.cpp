#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAthead(Node*&head,int d)
{
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAttail(Node*&tail,int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(Node*&head)
{
    Node*temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    Node*node1=new Node(10);

    Node*head=node1;
   // print(head);

    insertAthead(head,12);
    insertAthead(head,15);
    print(head);
    cout<<"null"<<endl;

    Node*tail=node1;
    insertAttail(tail,12);
    insertAttail(tail,15);
    print(head);

    return 0;
}
