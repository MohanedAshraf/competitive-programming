#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node *next;
    node( int d ) : data{ d }, next{ nullptr } { }
};



void insert( node * & head , int val)
{
    node *new_node = new node(val);

    if(head == NULL)
    {
        head = new_node;

    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}


void display(node * head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



node* partitionLinkedList(node * & nnode  , int n){

     // space o(1) , time O(n)
    node* head = nnode ;
    node* tail = nnode ;

    while(nnode != NULL){
        node* next = nnode->next;

        if(nnode->data < n){
            nnode->next  = head;
            head = nnode ;

        }
        else{
            tail->next = nnode ;
            tail = nnode;
        }
        nnode = next;
    }
    tail->next = NULL ;
    return head ;
}



int main()
{
    node* head = NULL ;

    insert(head ,1);
    insert(head, 2);
    insert(head , 10);
    insert(head , 5);
    insert(head , 8);
    insert(head , 5);
    insert(head , 3);

    display(head);

    int n ;
    cin>>n;

    node* partitioned = partitionLinkedList(head, n);

    display(partitioned);











    return 0;
}
