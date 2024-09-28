// #include<iostream>
// using namespace std;

// int main(){
//     string course;
//     cout << "Enter a course to select: " << endl;
//     cin >> course;

//     if(course == "java"){
//         cout << "Amount 5000 and time 50 days";
//     }
//     else if(course == "Python"){
//         cout << "Amount 7000 and time 60 days";
//     }
//     else if(course == "Fullstack"){
//         cout << "Amount 10000 and time 4 months";
//     }
//     else if(course == "DSA"){
//         cout << "Amout 3000 and time 30 days";
//     }
//     else{
//         cout << "Invaild option";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter your ratings 1 to 5: ";
//     cin >> num;

//     if(num == 5){
//         cout << "Excellent";
//     }
//     else if(num == 4){
//         cout << "Good";
//     }
//     else if(num == 3) {
//         cout << "Average";
//     }
//     else if(num == 2){
//         cout << "Bad";
//     }
//     else if(num == 1){
//         cout << "Poor";
//     }
//     else {
//         cout << "Invaild choice";
//     }

//     return 0;
// }


//Loops

// #include<iostream>
// using namespace std;

// int main(){
//     int num,range;
//     cout << "Enter the table num: ";
//     cin >> num;
//     cout << "Enter the table range: ";
//     cin >> range;

//     for(int i = 1;i<=range;i+=1){
//         cout << num << " x " << i << " = " << num * i << endl;
//     }
// }


//Arrays

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] = {10,20,30,40,50,60,70,80,90,100};
//     for(int i = 0;i<10;i++){
//         cout << arr[i] << endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     char arr[5] = {'a','b','c','d','e'};
//     for(int i = 0;i<5;i++){
//         cout << arr[i] << endl;
//     }

// }


// #include<iostream>
// using namespace std;

// int add(int a, int b){

//     return (a+b);
// }

// int main(){
//     int a,b;
//     cout << "Enter value of a: ";
//     cin >> a;
//     cout << "Enter value of b: ";
//     cin >> b;

//     int sum = add(a,b);
//     cout << "Sum of 2 number is: " << sum << endl;
//     }


// #include<iostream>
// using namespace std;

// int main(){
//     int n, num, reminder, reverse_num = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     n = num;
//     while(n != 0){
//         reminder = n % 10;
//         reverse_num = reverse_num * 10 + reminder;
//         n /= 10;
//     }

//     cout << reverse_num << endl;

//     if(num == reverse_num){
//         cout << "It is panlidrome ";
//     } else{
//         cout << "Not a panlidrome ";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     bool is_prime = true;
//     cout << "Enter a number: ";
//     cin >> num;

//     if(num == 0 || num == 1){
//         is_prime = false;
//     } 
//     for(int i = 2;i<=num;i++){
//         if(num % 2 == 0){
//             is_prime = false;
//             break;
//         }
//     }
    
    
//     if(is_prime == true){
//         cout << "Number is a prime number ";
//     }else{
//         cout << "It is not a prime number ";
//     }
    
// }

