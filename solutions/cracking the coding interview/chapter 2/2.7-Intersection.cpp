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

node* getTail(node * head, int & counter)
{
    if(head == nullptr) return nullptr;
    while(head->next != nullptr)
    {
        counter++;
        head  = head->next;
    }


    return head;

}

node * getKthNode(node * head, int k)
{

    while(k>0 && head != nullptr)
    {
        head = head->next;
        k--;
    }


    return head;
}

node * intersection(node * & l1, node * & l2 )
{
    // space O(1) , time O(n + m)
    int sz1 = 0, sz2 = 0 ;
    node * res1 = getTail(l1, sz1);
    node * res2 = getTail(l2, sz2);

    if(res1 != res2)
        return nullptr;

    node * shorter = sz1 < sz2 ? l1 : l2 ;
    node * longer = sz2 < sz1 ? l1 : l2 ;

    longer = getKthNode(longer, abs(sz1 - sz2));

    while(longer != shorter)
    {
        shorter = shorter->next;
        longer = longer->next;
    }

    return longer ;

}












int main()
{
    node* l1 = NULL ;
    node* l2 = NULL;

    insert(l1, 1);
    insert(l1, 2);
    insert(l1, 7);
    node * intersectionNode = l1;
    insert(l1, 9);
    insert(l1, 5);
    insert(l1, 1);
    insert(l1, 3);
    l2 = intersectionNode;
    insert(l2, 6);
    insert(l2, 4);








    display(l1);
    display(l2);

    node * inter = intersection(l1, l2 );


    cout<< inter->data <<endl;




    return 0;
}
