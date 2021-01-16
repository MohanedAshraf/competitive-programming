#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;
class vector{
    int* data;
    unsigned int size;
    public:
        vector(unsigned int item=1){
            size = item;
            data = new int[item];
            for(unsigned int i=0;i<item;i++){
                data[i]=0;
            }
            
        }

        ~vector(){ delete[] data;}

        void operator =(const vector & src) {
            if (data!=nullptr)
                delete[] data;
            size = src.size;
            data = new int[size];
            memcpy(data, src.data, size*sizeof(int));
        }

        size_t getSize(){
            return size;
        }

        void print(){
            for (unsigned i = 0; i < size; i++ )
                cout << data[i] << " ";
                cout << endl;
        }

        int& operator[] (int index){
            if(index >= 0 && index < size){
                return data[index];
            }
           
            size_t size2 = size*2;
            int *buffer = new int[size2];
            for(size_t i=0;i<size ; i++){
                buffer[i] = data[i];
            }
            for(size_t i=size;i<size2;i++){
                buffer[i]=0;
            }
            delete [] data;
            data = buffer;
            size = size2;
            return data[index];
    
    }

};




int main()
{
    vector a(3) , b;
    
    a.print();
    a[0] = 5;
    a[2] = 6; 
    a[4] = 2;
    a.print();
    b=a;
    b.print();
    a[7]=8;
    a.print();
    
    
}