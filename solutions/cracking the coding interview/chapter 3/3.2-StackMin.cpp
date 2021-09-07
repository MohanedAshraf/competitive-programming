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


class StackWithMin : public Stack
{

    Stack s2;

public:

    void push(int val)
    {

        if(s2.isEmpty() || val <= s2.peek())
        {
            s2.push(val);
        }

        Stack::push(val);

    }


    int pop()
    {
        int val = Stack::pop();
        if(s2.peek() == val)
        {
            s2.pop();
        }
        return val;
    }

    int getMin()
    {

        return s2.peek();
    }



};



int main()
{
    StackWithMin a;

    for(int i =10 ; i>=4 ; i--)
        a.push(i);


    a.display();


    cout<< a.getMin()<<endl;
    a.pop();
    cout<< a.getMin()<<endl;



    return 0;
}
