#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node * below ;
    node * above ;
    node( int d ) : data{ d }, below{ nullptr },  above{ nullptr } { }
};

class Stack
{
public :
    int size = 0;
    node* bottom;
    node * top ;
    int capacity;
    Stack(int capacity)
    {
        this->capacity = capacity;
        top = nullptr ;
        bottom = nullptr;

    }

    void join(node * above, node * below)
    {
        if(below != nullptr) below->above = above ;
        if(above != nullptr) above->below =  below;
    }

    bool push(int val)
    {
        if(size >= capacity) return false;
        size++;
        node *new_node = new node(val);
        if(size == 1) bottom = new_node;
        join(new_node, top);
        top = new_node;
        return true;
    }

    int pop()
    {
        if( top == nullptr)
        {

            throw "stack underflow";

        }
        node* temp = top;
        top = top->below;
        int d = temp->data;
        temp->below = nullptr;
        free(temp);
        size--;
        return d;

    }

    int peek()
    {

        if(top == nullptr) throw "empty stack";
        return top->data;

    }

    bool isEmpty()
    {

        return size == 0 ;

    }
    bool isFull()
    {
        return capacity == size;
    }

    int removeBottom()
    {
        node * b = bottom;
        bottom = bottom->above;
        if(bottom != nullptr) bottom->below = nullptr;
        size--;
        return b->data;
    }

    void display()
    {
        node* temp = top;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->below;
        }
        cout << endl;
    }





};


class SetOfStacks
{


public:


    vector<Stack> stacks;


public:
    int capacity ;

    SetOfStacks(int capacity)
    {
        this->capacity = capacity ;
    }
    void push(int val)
    {

        if( stacks.empty()  || stacks.back().size >= capacity)
        {
            Stack* st = new Stack(capacity);
            st->push(val);
            stacks.push_back(*st);

        }
        else
        {
            stacks.back().push(val);

        }


    }


    int pop()
    {



        if(stacks.empty())
            throw "Stack is empty";

        int v= stacks.back().pop();
        if(stacks.back().isEmpty())
        {
            stacks.pop_back();

        }

        return v;


    }

    void print ()
    {

        for(int i = 0 ; i <stacks.size() ; i ++)
        {
            cout<<"Stack " << i   << ": ";
            stacks[i].display();
        }
    }

    int popAt(int index)
    {

        return leftShift(index, true);
    }

    int leftShift(int index, bool removeTop)
    {
        Stack stack = stacks[index];
        int removed_item;
        if(removeTop) removed_item = stack.pop();
        else removed_item = stack.removeBottom();
        cout<<removed_item<<endl;
        if(stack.isEmpty())
        {
            stacks.pop_back();

        }
        else if (stacks.size() > index + 1 )
        {

            int v = leftShift(index + 1, false);
            stack.push(v);

        }

        return removed_item ;





    }


};


int main()
{

    SetOfStacks a(3);
    for(int i =0 ; i<10 ; i++)
        a.push(i);


    a.print();
    a.popAt(2);
    cout<<endl;
    a.print();






    return 0;
}
