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

int main()
{
    linked_list a;

    for(int i =0 ; i<10 ; i++)
        a.insert(i);


    a.display();




    return 0;
}
