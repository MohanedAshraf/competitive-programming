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


node * reverseList(node * nnode )
{

    node* head = nullptr;

    while(nnode != nullptr)
    {
        insert(head, nnode->data);

        nnode = nnode->next;

    }

    display(head);
    return head;



}

bool isPali (node * head )
{
    // space O(n) , time O(n)
    node * reversed = reverseList(head);

    while(head != nullptr && reversed != nullptr )
    {
        if(head->data != reversed->data)
            return false;

        head = head->next;
        reversed = reversed->next;
    }

    return head == nullptr && reversed == nullptr;

}

bool isPaliStack(node * head)
{

    // space O(n) , time O(n)
    stack<int> st;
    node * slow = head ;
    node * fast = head ;

    while( fast != nullptr  && fast->next != nullptr)
    {

        st.push(slow->data);

        fast = fast->next->next;
        slow = slow->next;

    }

    if(fast != nullptr)
        slow = slow->next;


    while(slow != nullptr)
    {
        int top = st.top();
        st.pop();


        if(top != slow->data)
            return false;

        slow = slow->next;

    }

    return true;

}









int main()
{
    node* head = NULL ;

    insert(head,0);
    insert(head, 1);
    insert(head, 2);
    insert(head, 1);
    insert(head, 0);





    display(head);

    cout<< isPali(head)<<endl;
    cout<< isPaliStack(head)<<endl;












    return 0;
}
