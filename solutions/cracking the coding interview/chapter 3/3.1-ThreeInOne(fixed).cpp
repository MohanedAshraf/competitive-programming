#include<bits/stdc++.h>

using namespace std;


class FixedMultiStack
{
private:
    int numberOfStacks = 3;
    int stackCapacity;
    int* values;
    int* sizes;

    int indexOfTop(int stackNum)
    {
        int offest = stackNum * stackCapacity;
        int sz = sizes[stackNum];
        return offest + sz -1 ;
    }

public:
    FixedMultiStack(int stackSize)
    {
        stackCapacity = stackSize;
        values = new int[stackSize * numberOfStacks]();
        sizes = new int[numberOfStacks]();
    }
    bool isFull(int stackNum)
    {
        return sizes[stackNum] == stackCapacity;
    }
    bool isEmpty(int stackNum)
    {
        return sizes[stackNum] == 0;
    }

    void push(int stackNum, int value)
    {
        if(isFull(stackNum))
        {
            throw "stack overflow";
        }
        sizes[stackNum]++;
        values[indexOfTop(stackNum)] = value;
    }

    int pop(int stackNum)
    {

        if( isEmpty(stackNum))
        {
            throw "stack underflow";
        }
        int topIndex = indexOfTop(stackNum);
        int value = values[topIndex];
        values[topIndex] = 0;
        sizes[stackNum]--;
        return value ;
    }

    int peek(int stackNum)
    {

        if(isEmpty(stackNum)) throw "empty stack";
        return values[indexOfTop(stackNum)];

    }



};

int main()
{

    FixedMultiStack st(5);

    st.push(0, 4);
    st.push(0, 3);
    st.push(0, 2);
    st.push(0, 1);
    st.push(0, 9);

    cout<<st.pop(0) <<endl;
    cout<<st.peek(0) <<endl;






    return 0;
}
