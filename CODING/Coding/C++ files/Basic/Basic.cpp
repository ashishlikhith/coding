// The main difference between c and c++ is c++ is object oriented language
// It also has boolen values and it has a string data type

// Data Types

// #include<iostream>
// int main(){

//     //integer
//     int a = 3;
//     std::cout << a << std::endl; //this line prints the output and the for next line we use std::endl or '\n'

//     //double
//     double b = 10.3;
//     std::cout << b << std::endl; //the double colon is known as scope resolution operator

//     //char a single character
//     char letter = 'A';
//     std::cout << letter << std::endl;

//     //boolen (bool) if it is true the output is one false output is zero
//     bool light = true;
//     bool fan = false;

//     std::cout << fan << std::endl;
//     std::cout << light << std::endl;

//     //string for strings the decleration is different
//     std::string name = "Ashish";
//     std::string full_name;
//     std::getline(std::cin >> std::ws, full_name); // to get input of string which consist of spaces and to elimenate \n (new line char) std::ws

//     std::cout<< "hello " << name << std::endl; // we can mearge letter like left angle bracket
//     std::cout<< "hello " << full_name << std::endl;

//     const int age = 18; //it is constant we cannot change the value
//     std::cout << age << std::endl;

//     return 0;
// }

/* for removing std we use namespace after include */

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 34;
//     cout << "Number: " << num;
// }

/* if we want 2 varblies having same name we use namespace we can mention namespace in main function */

// #include<iostream>
// using namespace std;

// namespace first{
//     int num = 23;
// }
// int main(){
//    using namespace first;
//     int num = 45;

//     cout << "Number in main function: " << num << '\n';
//     cout << "number in namespace: " << first::num;
// }

/*typedef keyword used to give an alias to data type */

// #include<iostream>
// using namespace std;

// typedef std::string str_t; // _t is complasory to know the data type

// int main(){
//     str_t name = "Ashish";
//     cout << name;
// }

/* Arthemetic Operations {+ - / * %}
 order pranthasis (mult and div) (add and sub) */

// #include<iostream>
// using namespace std;

// int main(){
//     int tot = 6 - 5 + 4 * 3 / 2;
//     cout << tot;
// }

//comparession operators

// #include<iostream>
// int main(){
//     int a,b;
    
//     std::cout << "Enter 1st number: ";
//     std::cin >> a;

//     std::cout << "Enter 2nd number: ";
//     std::cin >> b;

//     if(a>b){
//         std::cout << a << " A is greater then B " << b;
//     } else if(a<b){
//         std::cout << b << " B is greater then B " << a;
//     } else {
//         std::cout << a << " A is equal to B " << b;
//     }
// }


//Logic operator (&& || !)

// #include<iostream>
// int main(){
//     int num1,num2,sum;

//     std::cout << "Enter a num1: ";
//     std::cin >> num1;

//     std::cout << "Enter a num2: ";
//     std::cin >> num2;

//     sum = num1 + num2;

//     if(sum > 2 && sum < 10){ //both the cases should be true
//         std::cout << "The sum is good";
//     } else{
//         std::cout << "The sum is not good";
//     }

//     if(sum < 2 || sum > 10){ //any one cases should be true
//         std::cout << "The sum is not good";
//     } else{
//         std::cout << "The sum is good";
//     }

//     if(sum != 23){
//         std::cout << "We removed the line 23";
//     }

//     return 0;
// }


//checking weather the number is equal of not

// #include<iostream>

// int main(){
//     int a,b;

//     std::cout << "Enter 1st number: ";
//     std::cin >> a;

//     std::cout << "Enter 2nd number: ";
//     std::cin >> b;

//     if(a == b){
//         std::cout << a << " A is equal to B " << b;
//     }else{
//         std::cout << a << " A is not equal to B " << b;
//     }

//     return 0;
// }


/* Increament or decreament */

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 3;
//     num ++;//post increament
//     ++ num; //pre increament

//     num --; //post decreament
//     -- num; // pre decrement
// }

/* Type converstion (implicit and explicit) */

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 3.14;
//     cout << num << endl; //we get 3 implicit

//     double a = (int) 3.23;
//     cout << a;
// }

/* How to imput */

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter a number: "; //insertion operator
//     cin >> num; //extration

//     cout << "The enterd number is: " << num;
// }

/*How to take input */

// #include<iostream>
// int main(){
//     int num;
//     std::string name;

//     std::cout << "Enter your name: ";
//     std::getline(std::cin >> std::ws, name); //used to take a sentence and remove white space char

//     std::cout << "Enter your age: ";
//     std::cin >> num;

//     std::cout << "Hello " << name << " So your age is " << num;
// }

/* Math functions */

// #include <iostream>
// #include <math.h>

// int main(){
//     double a = 3.23;
//     double b = 4.45;
//     double c;

//     c = std::max(a, b); //max of 2 number 
//     c = std::min(a, b); // min of 2 numbers
//     c = pow(3, 4); // power of 3 of 4
//     c = sqrt(9); // square root
//     c = round(a);
//     c = ceil(a); //round up
//     c = floor(b); //round down
//     c = abs(-2); //absolute value

//     std::cout << c;
// }

//finding hypotenuos of a right angle triangle

// #include<iostream>
// #include<math.h>

// int main(){
    
//     double s1,s2,hyp;
//     std::cout << "Enter the first side: ";
//     std::cin >> s1;

//     std::cout << "Enter the second side: ";
//     std::cin >> s2;

//     hyp = sqrt(pow(s1, 2) + pow(s2, 2));

//     std::cout << "Hypotenuos is: " << hyp;

//     return 0;
// }


//if else condition statements

// #include<iostream>
// int main(){
//     int age;

//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     if(age >= 18){
//         std::cout << "Welcome to our site";
//     } else if (age <= 0){
//         std::cout << "Enter a valid age";
//     } else{
//         std::cout << "Your are not good enough to enter";
//     }

//     return 0;
// }


//Switch in this as a case we can use a char or a number char -> case 'A': number -> case 1:

// #include<iostream>
// int main(){
//     int month;

//     std::cout << "Enter number btw (1-12): ";
//     std::cin >> month;

//     switch(month){
//         case 1:
//            std::cout << "January";
//            break;
//         case 2:
//            std::cout << "February";
//            break;
//         case 3:
//            std::cout << "March";
//            break;
//         case 4:
//            std::cout << "April";
//            break;
//         case 5:
//            std::cout << "May";
//            break;
//         case 6:
//            std::cout << "June";
//            break;
//         case 7:
//            std::cout << "July";
//            break;
//         case 8:
//            std::cout << "August";
//            break;
//         case 9:
//            std::cout << "September";
//            break;
//         case 10:
//            std::cout << "October";
//            break;
//         case 11:
//            std::cout << "November";
//            break;
//         case 12:
//            std::cout << "December";
//            break; 
//         default:
//            std::cout << "You entered wrong number"; 
//     }
//     return 0;
// }


//Caculator (+ - * /) using switch

// #include<iostream>
// int main(){
    
//     char operation;
//     double n1, n2, result;

//     std::cout << "Enter opertaion (+ - * /): ";
//     std::cin >> operation;

//     std::cout << "Enter number 1: ";
//     std::cin >> n1;

//     std::cout << "Enter number 2: ";
//     std::cin >> n2;

//     switch(operation){
//         case '+':
//             result = n1 + n2;
//             std::cout << "Result: " << result;
//             break;
//         case '-':
//             result = n1 - n2;
//             std::cout << "Result: " << result;
//             break;
//         case '*':
//             result = n1 * n2;
//             std::cout << "Result: " << result;
//             break;
//         case '/':
//             result = n1 / n2;
//             std::cout << "Result: " << result;
//             break;
//         default:
//             std::cout << "Enter a vaild char";
//     }
//     return 0;
// }


//ternary operator 
// condition ? case1 : case2;

// #include<iostream>
// int main(){
//     int num1,num2;

//     std::cout << "Enter number 1: ";
//     std::cin >> num1;

//     std::cout << "Enter number 2: ";
//     std::cin >> num2;

//     (num1 > num2)? std::cout << "num1 is greater the num2" : std::cout << "Num2 is greater then num1";

//     bool hungry = false;
//     hungry ? std::cout << "You are hungry" : std::cout << "You are full"; // we can write hungry == true or just hurgry because we are using boolen values

//     return 0;
// }


//tempreture converstion

// #include<iostream>
// int main(){
//     double temp;
//     char unit;

//     std::cout << "Enter F for fahreheit\n" ;
//     std::cout << "Enter C for Celsius\n" ;
//     std::cin >> unit;

//     if(unit == 'F' || unit == 'f'){
//         std::cout << "Enter temp in Celsius: ";
//         std::cin >> temp;

//         temp = (1.8 * temp) + 32;
//         std::cout << "Temp in Fahreheit is " << temp;
//     } 
//     else if(unit == 'C' || unit == 'c'){
//         std::cout << "Enter temp in Fehrenheit: ";
//         std::cin >> temp;

//         temp = (temp - 32) / 1.8;
//         std::cout << "Temp in Celsius is " << temp;
//     }
//     else{
//         std::cout << "Entered Invaild inpur";
//     }
// }


//String Functions

// #include<iostream>
// int main(){
//     std::string name;
//     std::getline(std::cin, name);

//     std::cout << name.length(); //tells the lenght of the string
//     std::cout << name.empty(); //Tells is the string empty or not
//     std::cout << name.append("@gmail.com"); // It attaches at last of the string 
//     std::cout << name.at(1); //It tells you what char is present in string
//     std::cout << name.insert(0,"@"); //It will insert you at particular postion
//     std::cout << name.find(' '); //It will find char at what postion it is
//     std::cout << name.erase(0,2); //It will delete for certain part in the string

// }


//LOOPs

//While Loop

// #include<iostream>
// int main(){
//     std::string name;
//     std::getline(std::cin, name);
//     int len = name.length();
//     int i = 0;

//     while(i<=len){
//         std::cout << name[i] << std::endl;
//         i++;
//     }
// }

//Do while run the code once first and check the condition

// #include<iostream>
// int main(){
//     int num;

//     std::cin >> num;

//     do{
//         std::cout << num << '\n';
//         num --;
//     }while(num > 0);

//     return 0;
// }


//For loop
// #include<iostream>
// int main(){
    
//     for(int i = 1;i<=5;i+=2){ // we are printing number by skipping a number
//         std::cout << i << '\n';
//     }
//     return 0;
// }


//Break (Entirely stops the loop) or continue(Skips the iteration and jumps to another) 

// #include<iostream>
// int main(){
//     for(int i = 0;i < 10;i++){
//         std::cout << i << '\n';
//         if(i == 7){
//             break;
//         } else if(i == 4){
//             continue;
//         }
//     }

//     return 0;
// }


//Nested loop

// #include<iostream>
// int main(){
//     for(int i = 0;i<3;i++){
//         for(int j = 1; j <= 10; j++){
//             std::cout << j << ' ';
//         }
//         std::cout << '\n';
//     }
// }


//printing prime numbers between range

// #include<iostream>
// using namespace std;

// int main(){
    
//     for(int i = 1;i<=100;i++){
//         int j;
//         for(j = 2;j < 100;j++){
//             if(i % j == 0){
//                 break;
//             }
//         }
//         if(j == i){
//             cout << i << endl;
//         }
//     } 
//     return 0;
// }


//patterns using loops

//Rectangle
// #include<iostream>
// using namespace std;

// int main(){
    
//     int row,col;
//     cin >> row >> col;

//     for(int i = 1; i<=row; i++){ //first we always write rows and after condition for rows  
//         for(int j = 1; j<=col; j++){ //we use another for loop for col
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//Hallow rectangle

// #include<iostream>
// using namespace std;

// int main(){

//     int row, col;
//     cin >> row >> col;

//     for(int i = 1; i<=row ;i++){
//         for(int j = 1; j<=col; j++){
//             if(i == 1 || i == row || j == 1 || j == col){
//                 cout << "* ";
//             } else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     } 
// }

//Inverted Half pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for(int i = n;i>=1;i--){
//         for(int j = 1 ; j<= i;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Half Inverted 180 degrees tillted 

// #include<iostream>
// using namespace std;

// int main(){
//     int n; // taking a number as input
//     cin >> n;

//     // we took both for loops almost same because we are printing something at everything
//     for(int i = 1;i<=n;i++){ // rows
//         for(int j = 1; j<=n;j++){ //column
//             if(j <= n-i){
//                 cout << "  ";
//             } else{
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Half pyrimad using number

// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin >> n;

//     for(int i = 1;i<=n;i++){ //rows goes form 1 to n
//         for(int j = 1;j<=i;j++){ // column goes from 1 to row number
//             cout << i << " "; // we print the row number
//         }
//         cout << endl;
//     }

//     return 0;
// }


//Floyd's triangle
// this simlar to Half pyrimad using number the difference we print number as row number but in this we take count and print it untill the number

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int count = 1;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=i;j++){
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
// }


// butterfly patter

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     for(int i = 1;i<=n;i++){ // rows
//         for(int j = 1;j<=i;j++){ // First we are printing stars 
//             cout << "* ";
//         }
//         int space = 2*n - 2*i; // formula for spaces
//         for(int j = 1; j<=space;j++){
//             cout << "  ";
//         }
//          for(int j = 1;j<=i;j++){ // after spaces we get print stars so this is an another loop for it 
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     // this is for lower part in this it runs in reverse order

//     for(int i = n;i>=1;i--){ // rows
//         for(int j = 1;j<=i;j++){ // First we are printing stars 
//             cout << "* ";
//         }
//         int space = 2*n - 2*i; // formula for spaces
//         for(int j = 1; j<=space;j++){
//             cout << "  ";
//         }
//          for(int j = 1;j<=i;j++){ // after spaces we get print stars so this is an another loop for it 
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// Advance patterns

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for(int i = 1;i<=n;i++){ // rows goes from 1 to n
//         for(int j = 1;j<=n+1-i;j++){ // we get column by setting a formula as n + 1 - row.no
//             cout << j << " "; // we print column number as every column number is same
//         }
//         cout << endl;
//     }
//     return 0;
// }


// even one's and odd zero's

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for(int i = 1;i<=n;i++){ //row form 1 to n
//         for(int j = 1;j<=i;j++){ //column goes form 1 to row.no
//             if((i + j) % 2 == 0){ //if row.no + col.no is even print 1 else 0
//                 cout << 1 << " ";
//             } else{
//                 cout << 0 << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }



// rhombus pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for(int i = 1;i<=n;i++){ // row run for 1 to n
//         // before printing stars we print some spaces
//         for(int j = 1;j<=n-i;j++){ // for spaces n - row.no
//             cout << "  ";
//         }
//         for(int j = 1; j<=n;j++){ // for stars 1 to n
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


//getting a random numbers these num are pseudo-random Not turly random (but close)

// #include <iostream>
// #include<ctime>

// using namespace std;

// int main(){

//     srand(time(NULL)); // it genrates a random number using time
//     int num1 = rand() % 6 + 1; //it give range from 0 to num so we add +1 
//     cout << num1;

//     return 0;
// }


//Number guessing game

// #include<iostream>
// #include<ctime>

    // using namespace std;

    // int main(){
        
    //     srand(time(NULL));
    //     int randnum = rand() % 10 + 1;
    //     int user;

    //     cout << "Pick a number between 1 - 10 if get right you get price ";
    //     cin >> user;

    //     if(randnum == user){
    //         cout << "Good job you won free lunch in your dreams";
    //     } else if (randnum > user)
    //     {
    //         cout << "You are higher then the number";
    //     }
    //     else if (randnum < user)
    //     {
    //         cout << "You are lower then the number";
    //     }
        
    //     return 0;
    // }



//functions

// #include<iostream>
// using namespace std;

// int Addition(int n1,int n2);

// int main(){

//     int a,b;
//     cin >> a >> b;

//     Addition(a,b);

//     return 0;
// }

// int Addition(int n1,int n2){
//     int add;
//     add = n1 + n2;

//     cout << add;

//     return 0;
// }


//Over loading functions

// #include<iostream>
// using namespace std;

// void pizza();
// void pizza(string topp1);
// void pizza(string topp2);

// int main(){

//     string topp1 = "Pepporina";
//     string topp2 = "panner";
//     pizza(topp1,topp2);

//     return 0;
// }
// void pizza(){
//     cout << "Here is your pizza!!";
// }
// void pizza(string topp1){
//     cout << "Here is your pizza with " << topp1 << " !!";
// }
// void pizza(string topp1, string topp2){
//     cout << "Here is your pizza " << topp1 << topp2 << " !!";
// }


//concatenating 2 strings using functions

// #include <iostream>
// using namespace std;

// string concatstrings(string str1, string str2);

// int main(){

//     string s1,s2;
//     s1 = "Likhith";
//     s2 = "Ashish";

//     concatstrings(s1,s2);

//     return 0;
// }

// string concatstrings(string str1, string str2){
//     cout << str1 + " " + str2;
// }


// Global var and local var 

// #include<iostream>

// int num = 2; //These are global varibles which are decleared out side of the function or block of code

// int main(){

//     int num = 1; //local varibles are decleared inside the function or a block of code ({})
//     std::cout << num;
//     std::cout << ::num; //to get gloabl var if there is any var which decleared inside the scope have same name

//     return 0;
// }


