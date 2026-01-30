#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
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
    stack<int> new_stack;
    int size, val;
    cout << "Enter size: " << endl;
    cin >> size;
    for(int i = 0; i<size;++i){
        cin >> val;
        new_stack.push(val);
    }

    while(!new_stack.empty()){
        cout << new_stack.top() << " ";
        new_stack.pop();
    }
}
//