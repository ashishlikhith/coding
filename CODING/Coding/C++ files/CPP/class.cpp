//We have to main topics before starting oops 
// CLASS and OBJECT

// #include<iostream>
// #include<string>
// using namespace std;

// // class definition
// class Teacher {
// private:
//     double salary;

// public:
//     string name;
//     string dept;
//     string subject;

//     void changedept(string newdept) {
//         dept = newdept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
// };

// int main() {
//     Teacher t1;
//     t1.name = "John Doe";
//     t1.dept = "Computer Science";
//     t1.subject = "Data Structures";
//     t1.setSalary(50000);

//     cout << "Teacher's Name: " << t1.name << endl;
//     cout << "Department: " << t1.dept << endl;
//     cout << "Subject: " << t1.subject << endl;
//     cout << "Salary: $" << t1.getSalary() << endl;

//     return 0;
// }


// project on school

// #include<iostream>
// using namespace std;

// class student{
// public:
//     string name;
//     string standard;
//     int rollno;
//     string section;

//     void changeSec(string NewSection){
//         section = NewSection;
//     }
//     void ChangeStad(string NewStd){
//         standard = NewStd;
//     }
// };
// class Teacher{
// private:
//     double salary;

// public:
//     string name;
//     string subject;
//     string classes;

//     void changeClass(string NewClass){
//         classes = NewClass;
//     }
//     void changeSub(string Newsub){
//         subject = Newsub;
//     }
// };
// class Incharge{
// private:
//     double salary;
// public:
//     string name;
//     string InchargeClass;

//     void ChangeInClass(string NewInclass){
//         InchargeClass = NewInclass;
//     }

//     void IncreaseSalary(double value){
//         salary = salary + value;
//     }
// };

// int main(){
//     student s1;
//     Teacher t1;
//     Incharge i1;

//     student s2;
//     Teacher t2;
//     Incharge i2;

//     s1.name = "Ashish";
//     s1.rollno = 23;
//     s1.section = "K23CG";
//     s1.standard = "B.Tech";

//     t1.name = "Pushpani";
//     t1.subject = "Science";
//     t1.classes = "1 to 6";

//     i1.name = "Rama";
//     i1.InchargeClass = "7 to 10";


//     cout << "Enter 1 for student 2 for teacher and 3 for inchrage " << endl;
//     int choice;
//     cin >> choice;

//     switch(choice){
        
//         // case 1
//         case 1:
//             cout << "If already existance student enter 1 to check your details else 2: ";
//             int check;
//             cin >> check;
//             if(check == 1){
//                 cout << "Enter your name student: ";
//                 string st_name;
//                 cin >> st_name;
//                 if(st_name == s1.name){
//                     cout << "Student details: " << endl;
//                     cout << s1.name << endl;
//                     cout << s1.rollno << endl;
//                     cout << s1.section << endl;
//                     cout << s1.standard << endl;
//                 } else{
//                     cout << "Your details does not match";
//                 }
//             }
//             else if (check == 2) {
//                     cout << "Welcome newbie: " << endl << "Enter your details "<< endl;
//                     cout << "Enter your name: ";
//                     cin >> s2.name ;
//                     cout << "Enter your Roll no: ";
//                     cin >> s2.rollno ;
//                     cout << "Enter your section: ";
//                     cin >> s2.section ;
//                     cout << "Enter your standard: ";
//                     cin >> s2.standard;

//                     cout << "Your details you enterd: " << endl;
//                     cout << s2.name << endl;
//                     cout << s2.rollno << endl;
//                     cout << s2.section << endl;
//                     cout << s2.standard << endl;
//                 }
//             else {
//                 cout << "You entered in correct choice !!";
//             }
//         break;
        
//         //case 2
//         case 2:
//             cout << "Enter 1 for exsistance else enter 2 for new: ";
//             int techeck;
//             cin >> techeck;
//             if(techeck == 1){
//                 cout << "Enter your name Teacher: ";
//                 string techName;
//                 cin >> techName;
//                 if(techName == t1.name){
//                     cout << "Teacher details: " << endl;
//                     cout << t1.name << endl;
//                     cout << t1.subject << endl;
//                     cout << t1.classes << endl;
//                 } else{
//                     cout << "Your details does not match";
//                 }
//             }
//             else if(check == 2){
//                     cout << "Enter your details: ";
//                     cout << "Enter your name: ";
//                     cin >> t2.name ;
//                     cout << "Enter your subject: ";
//                     cin >> t2.subject;
//                     cout << "Enter your classes: ";
//                     cin >> t2.classes;

//                     cout << "Details you enterd: "<< endl;
//                     cout << t2.name << endl;
//                     cout << t2.subject << endl;
//                     cout << t2.classes << endl;
//             }
//             else {
//                     cout << "Invaild choice ";
//             }
//         break;
        
//         //case 3
//         case 3:
//             cout << "Enter 1 for existance else 2 for new"; 
//             int checkIn;
//             cin >> checkIn;
//             if(checkIn == 1){
//                 cout << "Enter your name Incharage: ";
//                 string InName;
//                 cin >> InName;
//                 if(InName == i1.name){
//                     cout << "Inchrage details: " << endl;
//                     cout << i1.name << endl;
//                     cout << i1.InchargeClass << endl;
//                 } else{
//                     cout << "Your details does not match";
//                 }
//             }
//             else if(checkIn == 2){
            
//                 cout << "You are new enter your details: " << endl;
//                 cout << "Enter your name: ";
//                 cin >> i2.name;
//                 cout << "Enter you Incharge class: ";
//                 cin >> i2.InchargeClass;

//                 cout << "Details you Enterd " << endl;
//                 cout << i2.name << endl;
//                 cout << i2.InchargeClass << endl;
            
//             }
//             else {
//                 cout << "Invaild choice ";
//             }
//         break;

//         default:
//             cout << "Invaild choice: ";
//     }
//     return 0;
// }


//  #include<iostream>
// using namespace std;
// class Employee{
// public:
// int id;
// string name;
// int salary;
// };


// int main()
// {
// Employee emp1;
// emp1.id=1;
// emp1.salary=50000;
// emp1.name="ABCDE";


// cout<<emp1.id<<endl;
// cout<<emp1.salary<<endl;
// cout<<emp1.name<<endl;


// return 0;
// }


// #include<iostream>
// using namespace std;

// class Student{
//     private:
//     string ph_num;

//     public:
//     int id;
//     string name;
//     int marks;

//     void setnum(string num){
//         ph_num = num;
//     }

//     string getnum(){
//         return ph_num;
//     }

// };

// int main(){
//     Student s1;
//     Student s2;
//     Student s3;
//     Student s4;
//     Student s5;

//     s1.id = 1;
//     s1.name = "Ashish";
//     s1.marks = 88;


//     cout << "id: " << s1.id << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: "<< s1.marks << endl; 

//     cout << endl;
//     //Student 2

//     s2.id = 2;
//     s2.name = "Likhith";
//     s2.marks = 98;

//     cout << "id: " << s2.id << endl;
//     cout << "Name: " << s2.name << endl;
//     cout << "Marks: "<< s1.marks << endl; 

//     cout << endl;
//     //student 3
//     s3.id = 3;
//     s3.name = "student 3";
//     s3.marks = 60;


//     cout << "id: " << s1.id << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: "<< s1.marks << endl; 

//     cout << endl;
//     //student 4
//     s4.id = 1;
//     s4.name = "Student 4";
//     s4.marks = 70;

//     cout << "id: " << s1.id << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: "<< s1.marks << endl; 


//     cout << endl;
//     //student 5
//     s5.id = 5;
//     s5.name = "Student 5";
//     s5.marks = 90;

//     cout << "id: " << s5.id << endl;
//     cout << "Name: " << s5.name << endl;
//     cout << "Marks: "<< s5.marks << endl; 


//     return 0;   
// }


// #include<iostream>
// using namespace std;

// int add(int num){
//     static int tot = 0;
//     tot += num;
//     return tot;
// }

// int main(){
//     cout << add(5) << endl;
//     cout << add(4) << endl;
// }


//static function

// #include<iostream>
// using namespace std;

// class student{
// public:
//     int age;
//     float cgpa;
//     void details(){
//         cout << "Age of the student is: " << age << endl;
//         cout << "Cgpa of the student is: " << cgpa << endl;
//     }
// };

// int main(){
//     student s;

//     cout << "Enter age: ";
//     cin >> s.age;
//     cout << "Enter cgpa: ";
//     cin >> s.cgpa;

//     s.details();
// }


// #include <iostream>

// int main() {
//     int n;
//     std::cin >> n;  // Read the number of products sold

//     int products[20];  // Array to store product IDs, with a maximum size of 20
//     for (int i = 0; i < n; ++i) {
//         std::cin >> products[i];  // Read each product ID
//     }

//     // Array to track the frequency of each product ID
//     int freq[20] = {0};  // Array initialized to 0 for IDs from 1 to 100

//     // Count the frequency of each product ID
//     for (int i = 0; i < n; ++i) {
//         freq[products[i]]++;
//     }

//     // Output the frequency of each product ID
//     for (int i = 1; i <= 100; ++i) {
//         if (freq[i] > 0) {
//             if (freq[i] > 1) {
//                 std::cout << i << " - " << freq[i] << " times" << std::endl;
//             } else {
//                 std::cout << i << " - " << freq[i] << " time" << std::endl;
//             }
//         }
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int Area(int len, int bre){
//     return (len * bre);
// }

// int Area(float radius){
//     return ((3.14) * (radius)*(radius));
// }

// int Area(float base, float height){
//     return (1/2) * base * height;
// }


// int main(){

//     cout << "Area of a rectangle: " << Area(3,4) << endl;
//     cout << "Area of a cricle:  " << Area(5.5) << endl;
//     cout << "Area of a triangle: " << Area(5,4) << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// double Sum(double n1, double n2){
//     return n1 + n2;
// }

// float Sum(float n1, float n2, float n3){
//     return n1 + n2 + n3;
// }

// int Sum(int a, int b){
//     return a + b;
// }

// int main(){
    
//     cout << "Sum1: " << Sum(21.2, 32.4) << endl;
//     cout << "Sum2: " << Sum(15.2, 39.4, 56.23) << endl;
//     cout << "Sum3: " << Sum(89, 78) << endl;

//     return 0;
// } 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s1 = "became";
//     string s2 = "abcrome";
//     cout << s1.compare(s2) << endl;
//     cout << s1.compare(2,2,s2,5,2);

//     return 0;
// }



#include<iostream>
using namespace std;

struct Node{
    
};
