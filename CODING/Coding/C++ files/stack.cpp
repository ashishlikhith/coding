#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');

    cout << "size: " << s.size() << endl;
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

}