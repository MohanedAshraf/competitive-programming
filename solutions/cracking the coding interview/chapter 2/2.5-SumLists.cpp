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

int len(node * temp )
{

    int count = 0;
    while(temp != NULL)
    {
        temp  = temp->next;
        count++;

    }
    return count ;
}



node* pad( node* temp, int padding )
{

    for(int i = 0; i<padding ; i++)
    {
        if(temp != nullptr)
        {
            node* new_node = new node(0);
            new_node->next = temp;
            temp = new_node;
        }
    }

    return temp;
}

node* add_helper(node* l1, node* l2, int & carry)
{

    if(l1 == nullptr && l2 == nullptr && carry == 0)
    {
        return nullptr;
    }

    node * more = add_helper(l1 ? l1->next :nullptr, l2 ? l2->next : nullptr, carry);

    int value = carry + (l1 ? l1->data : 0 ) + (l2 ? l2->data : 0);

    node* result = new node(value%10);

    result->next = more;
    more = result ;

    carry = (value>= 10) ? 1 :0 ;

    return more ;


}

node* sumLists(node *  l1, node *  l2, int carry)
{

    // space o(n) , time O(n)

    if(l1 == nullptr && l2 == nullptr && carry == 0)
    {
        return nullptr;
    }

    int value =  carry;

    if(l1)
    {
        value += l1->data;
    }


    if(l2)
    {
        value += l2->data;
    }

    node* result = new node(value %10);

    if(l1 != NULL || l2 != NULL)
    {

        node * more = sumLists( l1==NULL ? nullptr : l1->next, l2==NULL ? nullptr : l2->next, value >= 10 ? 1 : 0);

        result->next = more;

    }

    return result ;

}




node * sumListsFollowUp(node *  l1, node *  l2, int carry)
{

    // space o(n) , time O(n)
    int len1 = len(l1);
    int len2 = len(l2);

    if( len1 < len2 )
    {
        l1 = pad(l1, len2-len1);
    }
    else
    {
        l2 = pad(l2, len1-len2);
    }

    node* res = add_helper(l1, l2, carry);

    if(carry)
    {
        node * new_node = new node(carry);
        new_node->next = res;
        res = new_node;
    }

    return res;



}



int main()
{
    node* l1 = NULL;
    node* l2 = NULL;

    insert(l1,6);
    insert(l1, 1);
    insert(l1, 7);
    insert(l2, 2);
    insert(l2, 9);
    insert(l2, 5);


    display(l1);
    display(l2);

    node* result = sumLists(l1, l2, 0);
    display(result);


    node* l3 = NULL;
    node* l4 = NULL;

    insert(l3,4);
    insert(l3, 3);
    insert(l3, 2);
    insert(l3, 1);
    insert(l4, 7);
    insert(l4, 6);
    insert(l4, 5);

    display(l3);
    display(l4);

    node* res = sumListsFollowUp(l3, l4, 0);

    display(res);






    return 0;
}
