#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node * next;
    node( int d ) : data{ d }, next{ nullptr } { }
};

class Queue
{
    // head > 0 > 0 > tail > null
private:
    node * head ;
    node * tail ;
public:
    Queue()
    {
        head = NULL;
        tail = NULL;

    }

    void add(int val)
    {
        node *new_node = new node(val);
        if(tail != nullptr)
        {
            tail->next = new_node;
        }
        tail = new_node;
        if(head == nullptr)
            head = new_node;

    }

    int remove()
    {

        if( head == nullptr)
        {
            throw "queue is empty";
        }
        int d = head->data;
        node * temp = head;
        head = head -> next;
        temp->next = nullptr;
        free(temp);
        return d ;

    }

    int peek()
    {

        if(head == nullptr) throw "empty queue";
        return head->data;

    }

    bool isEmpty()
    {

        return head == nullptr ;

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
    Queue a;

    for(int i =3 ; i<=10 ; i++)
        a.add(i);


    a.display();

    cout<<a.remove()<<endl;
    cout<<a.peek()<<endl;
    cout<<a.isEmpty()<<endl;






    return 0;
}
