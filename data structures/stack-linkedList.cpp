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

int main()
{
    Stack a;

    for(int i =0 ; i<10 ; i++)
        a.push(i);


    a.display();

    cout << a.pop() <<endl;
    cout << a.peek() <<endl;
    cout << a.isEmpty() <<endl;




    return 0;
}
