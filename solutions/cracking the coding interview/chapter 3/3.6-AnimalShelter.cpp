#include<bits/stdc++.h>

using namespace std;

class Animal
{

private:
    bool dog;
    bool cat ;
    int order;
public:
    string name ;
    Animal()
    {

    }

    Animal(string name)
    {

        if(name == "dog")
        {
            cat= false;
            dog= true ;
        }
        else
        {
            dog= false;
            cat = true ;

        }


    }

    bool isDog()
    {
        return dog;
    }


    bool isCat()
    {
        return cat;
    }



    int getOrder()
    {
        return order;
    }
    void setOrder(int order)
    {
        this->order = order;
    }
    string getName()
    {

        if(dog) return "dog";
        else return "cat";
    }



};



class AnimalQueue
{

public:
    int order = 0;
    queue<Animal> dogs ;
    queue<Animal> cats ;


    void enqueue(Animal a)
    {
        if(a.isCat())
        {
            a.setOrder(order);
            cats.push(a);

        }
        else
        {
            a.setOrder(order);
            dogs.push(a);
        }
        order++;


    }

    Animal dequeueCat()
    {
        Animal cat =  cats.front();
        cats.pop();
        return cat;

    }

    Animal dequeueDog()
    {
        Animal dog =  dogs.front();
        dogs.pop();
        return dog;

    }

    Animal dequeueAny()
    {

        if(cats.empty() || dogs.front().getOrder() < cats.front().getOrder() )
        {
            return dequeueDog() ;

        }

        return dequeueCat();


    }


};






int main()
{

    AnimalQueue a ;

    Animal d("dog");
    Animal c("cat");
    a.enqueue(d); //dog 0
    a.enqueue(c); //cat 1
    a.enqueue(d); //dog 2
    a.enqueue(c); //cat 3
    a.enqueue(c); //cat 4
    a.enqueue(d); //dog 5
    a.enqueue(d); //dog 6
    a.enqueue(c); //cat 7

    cout << (a.dequeueAny()).getOrder() <<endl; // dog 0
    cout << (a.dequeueDog()).getOrder() << endl; // dog 2
    cout << (a.dequeueAny()).getOrder() << endl; // cat 1
    cout << (a.dequeueAny()).getOrder() << endl; // cat 3
    cout << (a.dequeueDog()).getOrder() << endl; // dog 5
    cout << (a.dequeueAny()).getOrder() << endl; // cat 4
    cout << (a.dequeueCat()).getOrder() << endl; // cat 7
    cout << (a.dequeueAny()).getOrder() << endl; // dog 6




    return 0;
}
