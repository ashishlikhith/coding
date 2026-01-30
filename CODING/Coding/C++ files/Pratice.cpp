#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

// class Sum{
//     int real;
//     int img;
//     public:
//     Sum(int real, int img){
//         this->real = real;
//         this->img = img;
//     }

//     Sum operator+ (Sum s){
//         int new_real = this->real + s.real;
//         int new_img = this->img + s.img;
//         return Sum(new_real, new_img);
//     }

//     void Display(){
//         cout << real << "+" << img << "i" << endl;
//     }
// };



// int main(){

//     Sum s1(2, 3);
//     Sum s2(3, 4);

//     Sum result = s1 + s2;
//     result.Display();

//     return 0;


//     // int* var = new int(20);
//     // cout << "value:" << *var << endl;

//     // vector<int> vec;
//     // vec.push_back(10);
//     // vec.push_back(20);

//     // int size = vec.size();
//     // for(int val: vec){
//     //     cout << val << " ";
//     //     vec.pop_back();
//     // }

//     // if(vec.empty()){
//     //     cout << "Vector is empty!" << endl;
//     // }
//     // else{
//     //     cout << "Vector is not empty" << endl;
//     // }
    
//     // Stack
//     // stack<int> new_stack;
//     // int size, val;
//     // cout << "Enter size: " << endl;
//     // cin >> size;
//     // for(int i = 0; i<size;++i){
//     //     cin >> val;
//     //     new_stack.push(val);
//     // }

//     // while(!new_stack.empty()){
//     //     cout << new_stack.top() << " ";
//     //     new_stack.pop();
//     // }


//     // operator overloading
    
// }
// //


// class sum{
//     int val = 0;

//     friend class print;
// };

// class print{
//     public:
//     void display(sum s){
//         cout << s.val + 10 << "printing from friend class" << endl;
//     }
// };

// int main(){
//     sum s1;
//     print p1;
//     p1.display(s1);
// }


class student{
    int *marks;

    public:
    student(int marks){
        this->marks = new int(marks);
    }

    student(const student &temp){
        this->marks = new int(*temp.marks);
    }
    void setMarks(int marks){
        *this->marks = marks;
    }

    void display(){
        cout << "marks: " << *marks << endl;
    }

    ~student(){
        delete marks;
    }
};
int main(){
    student s1(80);
    student s2(s1);
    s1.display();
    s2.display();
    s2.setMarks(75);
    s1.display();
    s2.display();
}