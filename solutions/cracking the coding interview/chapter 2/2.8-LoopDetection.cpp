#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node *next;
    node( int d ) : data{ d }, next{ nullptr } { }
};



void insert( node * & head, int val)
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




node * loopDetection(node * head )
{
    // space O(1) , time O(n)

    node* shorter = head;
    node* faster = head;

    while(faster != nullptr && faster->next != nullptr)
    {
        shorter = shorter->next;
        faster = faster->next->next;

        if(faster == shorter)
        {
            break;
        }
    }

    if(faster == nullptr ||  faster->next  == nullptr)
    {
        return nullptr ;
    }

    shorter = head;

    while(shorter != faster)
    {
        shorter = shorter->next;
        faster = faster->next;
    }

    return faster ;

}





int main()
{
    node* head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 9);
    insert(head, 5);
    insert(head, 1);

    display(head);

    // 1 > 5 > 9 > 3 > 2 > 1

    head->next->next->next->next->next = head->next->next;










    node * circle = loopDetection(head);


    cout<< circle->data <<endl;




    return 0;
}
