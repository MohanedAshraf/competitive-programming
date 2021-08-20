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

void removeDups(node * & head)
{
    // time O(n)
    set<int> s;
    node* prev = NULL;
    while(head != NULL)
    {
        int setSize = s.size();
        s.insert(head->data);
        if(setSize == s.size())
        {
            prev->next = head->next;

        }
        else
        {
            prev = head;

        }

        head = head->next;

    }


    return ;

}

void removeDupsTwoPointers(node * & head)
{
    // space O(1) , time O(n^2)

    node* current = head ;
    while(current != NULL)
    {
        node* runner = current;

        while(runner->next != NULL)
        {
            if(runner->next->data == current->data)
            {
                runner->next = runner->next->next;
            }
            else
            {
                runner = runner->next;
            }

        }
        current = current->next;

    }


    return ;

}

int main()
{
    linked_list a, b;

    a.insert(0);
    a.insert(3);
    a.insert(1);
    a.insert(2);
    a.insert(4);
    a.insert(0);
    a.insert(4);

    a.display();

    node* head = a.getHead();

    removeDups(head);

    a.display();


    b.insert(0);
    b.insert(5);
    b.insert(1);
    b.insert(2);
    b.insert(4);
    b.insert(1);
    b.insert(5);

    b.display();

    node* head2 = b.getHead();

    removeDupsTwoPointers(head2);

    b.display();


    return 0;
}
