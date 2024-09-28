// By taking one object and taking input of n number of students using loops

// #include<iostream>
// using namespace std;

// class student{
// public:
//     string name;
//     int rolln;
//     string section;

//     void setdetails(string n,int r,string s){
//         name = n;
//         rolln = r;
//         section = s;
//     }

//     void getdetails(){
//         cout << "Name :" << name << endl;
//         cout << "Roll Number: " << rolln  << endl;
//         cout << "Section: " << section << endl;
//     }
// };

// int main(){
//     int num, c = 0;
//     cout << "Enter number of students: ";
//     cin >> num;

//     student s;
//     while(num != c){
//         cout << "Enter student name: ";
//         cin >> s.name;
//         cout << "Enter student Roll no: ";
//         cin >> s.rolln;
//         cout << "Enter student section: ";
//         cin >> s.section;

//         s.getdetails();
//         c++;
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// class student{
// public:
//     string name;
//     int rolln;
//     string section;

//     void setdetails(string n,int r,string s){
//         name = n;
//         rolln = r;
//         section = s;
//     }

//     void getdetails(){
//         cout << "Name :" << name << endl;
//         cout << "Roll Number: " << rolln  << endl;
//         cout << "Section: " << section << endl;
//     }
// };

// int main(){
//     int num, c = 0;
//     cout << "Enter number of students: ";
//     cin >> num;

//     student s[num];
//     for(int i = 0;i<num;i++){
//         cout << "Enter student name: ";
//         cin >> s[i].name;
//         cout << "Enter student roll num: ";
//         cin >> s[i].rolln;
//         cout << "Enter student section: ";
//         cin >> s[i].section;

//     }

//     for(int i = 0; i< num;i++){
//         s[i].getdetails();
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class student{
// private: 
//     int rollno;
//     int mobile_no;

// public:
//     string name;
//     int age;

//     void setdetails(string n, int a, int r, int m){
//         name = n;
//         age = a;
//         rollno = r;
//         mobile_no = m;
//     }

//     void getdetails(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll Num: " << rollno << endl;
//         cout << "mobile num: " << mobile_no << endl;
//     }

// };

// int main(){
//     student s;
//     s.setdetails("Ashish", 18, 23, 123456789);
//     s.getdetails();
// }



// #include<iostream>
// using namespace std;

// class AddAmount{
// public:
//     int start_balance = 50;
//     int amount;
//     int total_balance = 0;

//     void Balance(){
//         total_balance = start_balance + amount;
//         cout << total_balance;
//     }

// };

// int main(){
//     AddAmount A;
//     cout << "Enter amount: ";
//     cin >> A.amount;

//     A.Balance();
// }


//structures

// #include<iostream>
// using namespace std;

// struct student{

//     string name;
//     int rollno;
//     int age;
//     string section;

//     void printhello(){
//         cout << "Hello" << endl;
//     }
// }s1;

// int main(){
//     student s1;


//     cout << "Enter your name: ";
//     cin >> s1.name;
//     cout << "Enter your age: ";
//     cin >> s1.age;
//     cout << "Enter your rollno: ";
//     cin >> s1.rollno;
//     cout << "Enter your section: ";
//     cin >> s1.section;

//     s1.printhello();
//     cout << "Name: " << s1.name << endl;
//     cout << "Age: " << s1.age << endl;
//     cout << "Roll num: " << s1.rollno << endl;
//     cout << "section: " << s1.section << endl;

//     return 0;
// }



// union

// #include<iostream>
// using namespace std;

// union item{
//     int m;
//     float x;
//     char c;
// }i1;

// int main(){
//     union item i1;
//     cout << "enter num: ";
//     cin >> i1.m;
//     // cout << "enter float: ";
//     // cin >> i1.x;

//     cout << i1.m;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int num = 23;
//     int *ptr = &num;
    
//     cout << "Address of num: " << &num << endl;
//     cout << "Value of num: " << num << endl;
//     cout << "Address of ptr: " << ptr << endl;
//     cout << "Value of ptr: " << *ptr << endl;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int num = 30;
//     int *ptr = &num;
//     int *ptr2 = ptr+4;
//     int value = ptr2-ptr;


//     cout << "Address of num: " << ptr << endl;
//     cout << "Address of num: " << ptr2 << endl;
//     cout << "Value of num: " << value << endl;
    
//     return 0;
// }


