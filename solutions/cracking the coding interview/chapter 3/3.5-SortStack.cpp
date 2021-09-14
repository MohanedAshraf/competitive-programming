#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node * next;
    node( int d ) : data{ d }, next{ nullptr } { }
};

class Stack
{
private:
    node * top ;


public:
    Stack()
    {
        top = NULL;
    }

    void push(int val)
    {
        node *new_node = new node(val);
        new_node->next = top;
        top = new_node;
    }

    int pop()
    {

        if( top == nullptr)
        {
            throw "stack underflow";
        }
        node* temp = top;
        top = top->next;
        int d = temp->data;
        temp->next = nullptr;
        free(temp);
        return d;

    }

    int peek()
    {

        if(top == nullptr) throw "empty stack";
        return top->data;

    }

    bool isEmpty()
    {

        return top == nullptr ;

    }

    void display()
    {
        node* temp = top;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }





};


void sortStack(Stack & s)
{

    Stack r ;

    while(!s.isEmpty())
    {
        int tmp = s.pop();

        while(!r.isEmpty() && r.peek() > tmp)
            s.push(r.pop());

        r.push(tmp);

    }

    while(!r.isEmpty())
    {
        s.push(r.pop());
    }
}






int main()
{

    Stack s ;

    s.push(5);
    s.push(7);
    s.push(3);
    s.push(9);
    s.push(0);

    cout<<"Before sorting : ";
    s.display();
    sortStack(s);
    cout<<"After sorting : ";
    s.display();





    return 0;
}
