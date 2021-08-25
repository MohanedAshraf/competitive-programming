#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head ;
public:
    linked_list()
    {
        head = NULL;
    }

    node * getHead()
    {
        return head;
    }

    void insert(int val)
    {
        node *new_node = new node;
        new_node->data = val;
        new_node->next = NULL;

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

    void remove(int val)
    {

        if (head->data == val)
        {
            delete head;
            head = head->next;
            return;
        }

        node* temp = head;
        while(temp->next!= NULL)
        {
            if (temp->next->data == val)
            {
                node* temp_ptr = temp->next->next;
                delete temp->next;
                temp->next = temp_ptr;
                return;
            }
            temp = temp->next;
        }

        cout << "Value not found" << endl;


    }

    bool search(int val)
    {

        node* temp = head;
        while(temp->next!= NULL)
        {
            if (temp->data == val)
                return true;

            temp = temp->next;
        }
        return false;

    }

    void display()
    {
        node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }





};

node* kthToLast(node * & head, int k, int& i)
{
    // space o(n) , time O(n)
    if(head == NULL)
        return NULL;

    node * res = kthToLast(head->next, k, i);
    i++;

    if(i == k)
        return head;

    return res;

}


node* kthToLastIterative(node * & head, int k)
{
    // space o(1) , time O(n)

    node* p1 = head;
    node* p2 = head;

    for(int i=0 ; i< k ; i++)
    {
        if(p1 == NULL ) return NULL;
        p1 = p1->next;
    }

    while(p1 != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }

    return p2;

}



int main()
{
    linked_list a;

    a.insert(0);
    a.insert(3);
    a.insert(1);
    a.insert(2);
    a.insert(4);
    a.insert(0);
    a.insert(4);

    a.display();

    node* head = a.getHead();

    int k ;
    cin>>k;
    int i = 0;
    node * x = kthToLast(head, k, i);
    node * y = kthToLastIterative(head, k);


    cout<<x->data<<endl;
    cout<<y->data<<endl;








    return 0;
}
