#include <iostream>
using namespace std;
class dymanicarray{
    int size;
    int capacity;
    int *arr;
    // int index;
    public:
    //default constructor
    dymanicarray(){
        capacity=1;// no of elements are can hold
        arr=new int[capacity];
        size=0;
        // index=size;
    }

    //push_back function
    void push_back(int value){
        if(size==capacity){
            capacity=capacity*2;
            int *newarr=new int [capacity];
            //copy element;
            for(int i=0;i<size;i++){
                newarr[i]=arr[i];
            }
            delete []arr;
            arr=newarr;
        }
        arr[index]=value;
        index++;
        size++;

    }

    void pop_back(){
        if(size>0){
            size--;
        }

    }

    int getsize(){
        return size;
    }

    int operator[](int index){
        if(index>=size){
            cout<<"Index is out of bound"<<endl;
            index-1;
        }
        return index;
    }
    ~dymanicarray(){
        delete []arr;

    }

};

int main(){
    dymanicarray d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    int n=d.getsize();
    for(int i=0;i<n;i++){
        cout<<d[i]<<endl;
    }


}