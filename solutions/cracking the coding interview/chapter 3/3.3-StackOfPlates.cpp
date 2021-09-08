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


class SetOfStacks : public Stack
{


private :


    vector<Stack> stacks;
    vector<int> sizes ;
    int capacity ;


public:


    SetOfStacks(int capacity)
    {
        this->capacity = capacity;

    }

    void push(int val)
    {

        if( stacks.empty() || sizes[sizes.size() -1  ] >= capacity )
        {
            Stack newStack ;
            newStack.push(val);
            stacks.push_back(newStack);
            sizes.push_back(1);

        }
        else if(sizes[sizes.size() - 1] < capacity)
        {
            stacks[stacks.size() -1].push(val);
            sizes[sizes.size() -1]++;
        }

    }


    int pop()
    {

        if(stacks.empty())
            throw "stack is empty";

        sizes[sizes.size() -1 ]--;
        int result = stacks[stacks.size() -1 ].pop();

        if(sizes[sizes.size() -1 ] == 0)
        {
            sizes.pop_back();
            stacks.pop_back();
        }

        return result;

    }

    void print ()
    {

        for(int i = 0 ; i <stacks.size() ; i ++)
        {
            cout<<"Stack " << i  << ": ";
            stacks[i].display();
        }
    }


};


int main()
{

    SetOfStacks a(3) ;
    for(int i =0 ; i<10 ; i++)
        a.push(i);


    a.print();

    cout << a.pop() <<endl;
    cout << a.peek() <<endl;
    cout << a.isEmpty() <<endl;





    return 0;
}
