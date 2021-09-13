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



class  Queue
{
public:
    Stack * stackNew, * stackOld ;

    Queue()
    {
        stackNew = new Stack() ;
        stackOld = new Stack();
    }

    void add (int val)
    {

        stackNew->push(val);
    }

    void shiftStacks()
    {
        if(stackOld->isEmpty())
            while(!stackNew->isEmpty())
            {

                stackOld->push(stackNew->pop());
            }
    }

    int peek()
    {
        shiftStacks();
        return stackOld->peek();

    }

    int remove()
    {
        shiftStacks();
        return stackOld->pop();
    }


};
int main()
{

    Queue a;

    for(int i =0 ; i<10 ; i++)
    {
        a.add(i);

        cout<< i << " ";

    }

    cout<<endl;



    for(int i= 0 ; i < 10 ; i++)
    {
        cout << "remove:  "<<a.remove() <<endl;
    }





    return 0;
}
