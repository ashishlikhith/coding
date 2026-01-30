#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class Sum{
    int real;
    int img;
    public:
    Sum(int real, int img){
        this->real = real;
        this->img = img;
    }

    Sum operator+ (Sum s){
        int new_real = this->real + s.real;
        int new_img = this->img + s.img;
        return Sum(new_real, new_img);
    }

    void Display(){
        cout << real << "+" << img << "i" << endl;
    }
};



int main(){

    Sum s1(2, 3);
    Sum s2(3, 4);

    Sum result = s1 + s2;
    result.Display();

    return 0;


    // int* var = new int(20);
    // cout << "value:" << *var << endl;

    // vector<int> vec;
    // vec.push_back(10);
    // vec.push_back(20);

    // int size = vec.size();
    // for(int val: vec){
    //     cout << val << " ";
    //     vec.pop_back();
    // }

    // if(vec.empty()){
    //     cout << "Vector is empty!" << endl;
    // }
    // else{
    //     cout << "Vector is not empty" << endl;
    // }
    
    // Stack
    // stack<int> new_stack;
    // int size, val;
    // cout << "Enter size: " << endl;
    // cin >> size;
    // for(int i = 0; i<size;++i){
    //     cin >> val;
    //     new_stack.push(val);
    // }

    // while(!new_stack.empty()){
    //     cout << new_stack.top() << " ";
    //     new_stack.pop();
    // }


    // operator overloading
    
}
//