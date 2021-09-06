#include<bits/stdc++.h>

using namespace std;

class StackInfo
{

public:
    int start, szOfStack, capacity;
    StackInfo()
    {
        this->start = 0;
        this->capacity = 0 ;
        this->szOfStack = 0;



    }
    void setStackInfo(int start, int capacity)
    {
        this->start = start ;
        this->capacity = capacity ;
        this->szOfStack=0;

    }


    bool isFull()
    {
        return szOfStack == capacity;
    }
    bool isEmpty()
    {
        return szOfStack == 0;
    }

    int lastCapacityIndex()
    {
        return start + capacity -1;
    }

    int lastElementIndex()
    {
        return start + szOfStack -1;
    }
    bool isWithinStackCapacity(int index, int totalLength)
    {
        if(index < 0 || index >= totalLength)
        {
            return false;

        }
        int contiguousIndex = index <start ? index + totalLength : index;
        int end = start + capacity ;

        return start <= contiguousIndex && contiguousIndex < end ;
    }





};

class FlexiableMultiStack
{
private:


    StackInfo * info ;
    int * values ;
    int numberOfStacks;
    int defaultSize;


public:
    FlexiableMultiStack(int numberOfStacks, int defaultSize)
    {
        this->numberOfStacks = numberOfStacks ;
        this->defaultSize = defaultSize ;
        info = new StackInfo[numberOfStacks];
        for(int i = 0 ; i<numberOfStacks ; i++)
        {
            info[i].setStackInfo(defaultSize * i, defaultSize );


        }
        values = new int[numberOfStacks * defaultSize]();
    }


    void push(int stackNum, int value )
    {
        if(allStacksAreFull())
        {

            throw "all stacks are full";
        }

        if(info[stackNum].isFull())
        {
            expand(stackNum);
        }
        info[stackNum].szOfStack++;
        values[adjustIndex(info[stackNum].lastElementIndex())] = value;
    }

    int pop( int stackNum)
    {
        if(info[stackNum].isEmpty())
        {
            throw "Stack is empty";

        }
        int value = values[adjustIndex(info[stackNum].lastElementIndex())];
        values[adjustIndex(info[stackNum].lastElementIndex())] = 0;
        info[stackNum].szOfStack--;
        return value ;

    }


    int peek( int stackNum)
    {

        return values[adjustIndex(info[stackNum].lastElementIndex())];

    }
    void shift(int stackNum)
    {
        cout<<"/// Shifting  "<<stackNum<<endl;
        if(info[stackNum].szOfStack >= info[stackNum].capacity)
        {
            int nextStack = (stackNum + 1 )% info[stackNum].szOfStack;
            shift(nextStack);
            info[stackNum].capacity++;
        }
        int index = adjustIndex(info[stackNum].lastCapacityIndex());
        while(info[stackNum].isWithinStackCapacity(index,numberOfStacks*defaultSize))
        {
            values[index]= values[previousIndex(index)];
            index = previousIndex(index);

        }

        values[info[stackNum].start]=0;
        info[stackNum].start = nextIndex(info[stackNum].start);
        info[stackNum].capacity--;

    }
    void expand(int stackNum)
    {
        shift((stackNum+1)% info[stackNum].szOfStack);
        info[stackNum].capacity++;

    }
    int numberOfElements()
    {
        int sz= 0;
        for (int i =0 ; i < numberOfStacks  ; i++ )
        {
            sz += info[i].szOfStack ;
        }


        return sz ;
    }
    bool allStacksAreFull()
    {
        return numberOfElements() == numberOfStacks*defaultSize;
    }

    int adjustIndex(int index)
    {
        int mx = numberOfStacks*defaultSize;
        return ((index % mx)+ mx )% mx ;
    }

    int previousIndex (int index)
    {
        return adjustIndex(index -1 );
    }

    int nextIndex (int index)
    {
        return adjustIndex(index + 1 );
    }



};

int main()
{


    FlexiableMultiStack st(3, 4);
    st.push(0, 5);
    st.push(0, 4);
    st.push(0, 5);
    st.push(0, 4);




    cout<<st.peek(0)<<endl;
    cout<<st.pop(0)<<endl;
    cout<<st.peek(0)<<endl;





    return 0;
}
