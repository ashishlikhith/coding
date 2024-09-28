/*
#include<stdio.h>
int main(){
    printf("Ashish\n");
    int a = 5;
    printf("Value is %d", a);
}
*/

///How to take input from the user using scanf
/*
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 2 numbers for addition: ");
    scanf("%d%d",&a,&b);
    c = a + b;
    printf("Sum is %d",c);
}
*/

//Caculate the area of the circle
/*
#include<stdio.h>
int main(){
    int radius,area;
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("The area of the circle is %f",area);
}
*/

//ternary operator (Condition)?Expression1:Expression2
/*
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    (a>b)?printf("A is greater"):printf("B is greater");
}
*/

//Checking the number is even or odd
/*
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    (num%2==0)?printf("Number is even"):printf("Number is odd");
}
*/

/*
#include <stdio.h>
int main() {
    int userInput, result;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    result = 0.22 * userInput;
    printf("Gross Salary = %d", result+userInput);
    return 0;
}
*/

//Nested ternary opertor
/*
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a > 0?printf("a is postive"):(a<0?printf("a is negative"):printf("a is zero"));
}
*/


//Bitewise Operator
/*
#include<stdio.h>
int main(){
    int a = 10, b = 6, c;
    c = a & b;
    printf("A & B is %d",c);
}
*/

/*
#include<stdio.h>
int main(){
    float p, result;
    int t;
    scanf("%f%d",&p,&t);
    result = (t/2) * (2*p +(t-1) * 5);
    printf("Rs . %.2f",result);
}
*/

/*
#include<stdio.h>
int main(){
    int x = 100;
    int result = (x >= 10)?(x <= 80) ? 1:2:3;
    printf("%d", result);
}
*/


/*
#include <stdio.h> 

int minCoins(int c) {
    int notes[] = {100, 50, 10, 5, 2, 1};
    int no_of_notes = 6;
    int result = 0;
    
    for (int i = 0; i < no_of_notes; i++) {
        if (c >= notes[i]) {
            result += c / notes[i];
            c = c % notes[i];
        }
    }
    
    return result;
}

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("Minimum number of coins required are: %d\n", minCoins(amount));
    return 0;
}
*/


//checking weather the number is even or odd
/*
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("The given number is even %d",a);
    }
    else{
        printf("the given number is odd %d",a);
    }
}
*/


//checking weather the given number is postive, negative or zero
/*
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("the given number is postive\n");
    }
    else if (a<0){
        printf("the given number is negative\n");
    }
    else{
        printf("the number is zero\n");
    }
}
*/

//checking weather character is small or upper or not a character
/*
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch<='z'){
        printf("the given character is small case");
    }
    else if(ch >='A' && ch <='Z'){
        printf("the givern charatcer is uppper case");
    }
    else{
        printf("It is not a character");
    }
}
*/


//cheacking weather the character is vowel or not 
/*
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch =='u'){
        printf("the given charcter is a vowel");
    }
    else{
        printf("It is not an vowel");
    }
}
*/

//changing the lower case to upper case
/*
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >='a' && ch <='z')
        ch = ch - 32;

    printf("The upper case of a given charcter is %c",ch);
} 
*/

//Switch

// #include<stdio.h>
// int main(){
//     int num,a, b;
//     printf("Enter the value of a and b: ");
//     scanf("%d%d",&a,&b);
//     printf("Enter 1 for add, 2 for sub,3 for mul,4 for division: ");
//     scanf("%d",&num);
//     switch (num)
//     {
//     case 1:
//         printf("Sum is %d",a+b);
//         break;
//     case 2:
//         printf("Sub is %d",a-b);
//         break;
//     case 3:
//         printf("mul is %d",a * b);
//         break;
//     case 4:
//         printf("Div is %d",a/b);
//         break;
//     default:
//         printf("wrong input selected");
//         break;
//     }
// }


//Switch
/*
#include<stdio.h>
int main(){
    int a;
    printf("Enter {1 - Sunday, 2 - Monday, 3 - Tuesday,4 - Wednesday,5 - Thursday,6 - Friday, 7 - Saturday}");
    printf("\nEnter a number: ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Today is Sunday");
            break;
        case 2:
            printf("Today is Monday");
            break;
        case 3:
            printf("Today is Tuesday");
            break;
        case 4:
            printf("Today is Wednesday");
            break;
        case 5:
            printf("Today is Thursday");
            break;
        case 6:
            printf("Today is Friday");
            break;
        case 7:
            printf("Today is Saturday");
            break;
    }
}
*/


//while loop

// #include<stdio.h>
// int main(){
//     int x = 1;
//     while (x<=10)
//     {
//         printf("Programming\n");
//         x++;
//     }
// }


/*
#include<stdio.h>
int main(){
    int x = 1;
    while(x<=10){
        printf("%d\n",x);
        x++;
    }
}
*/

/*
#include<stdio.h>
int main(){
    int x = 10;
    while(x>=1){
        printf("%d\n",x);
        x--;
    }
}
*/

//print table
/*
#include<stdio.h>
int main(){
    int num,x;
    scanf("%d",&num);
    x = 1;
    while(x<=10){
        printf("%d * %d = %d\n",num,x,num * x);
        x++;
    }
}
*/



//Factioral of a number
// #include<stdio.h>
// int main(){
//     int num,f=1;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         f=f*num;
//         num--;
//     }
//     printf("Factorial is %d",f);
// }


//printing the sum of numbers

// #include<stdio.h>
// int main(){
//     int x = 1;
//     int sum = 0;
//     while(x<=10){
//         sum = sum + x;
//         x++;
//     }
// }


//checking weather the numbers from 1 to 100 are divisible 
/*
#include<stdio.h>
int main(){
    int x = 1;
    while(x<=100){
        if(x%7==0){
            printf("%d\n",x);
        }
        x++;
    }
}
*/

//How to find the ascii value of all the small case 
/*
#include<stdio.h>
int main(){
    char ch = 'a';
    while(ch<='z'){
        printf("Ascii value of %c is %d\n",ch,ch);
        ch++;
    }
}
*/

// to print the all ascii value of all the charcter

// #include<stdio.h>
// int main(){
//     int x = 0;
//     while(x<=256){
//         printf("Ascii value of %c is %d\n",x,x);
//         x++;
//     }
// }



/*
#include<stdio.h>
int main(){
    int x = 1, sum =0;
    while(x<100){
        if(x%3==0){
            sum = sum + x;
        }
        x++;
    }
    printf("Sum of numbers which is divisible by 3 is: %d",sum);
}
*/


//finding that a number can be an exponent of 2 or not 

// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if ((num & (num - 1)) == 0) {
//         printf("%d is a power of 2.\n", num);
//     } else {
//         printf("%d is not a power of 2.\n", num);
//     }
//     return 0;
// }



/*
#include<stdio.h>
int main(){
    char ch;
    float f;
    scanf("%c\n%f",&ch,&f);
    if(ch == 'A' || 'B' || 'C' || 'D' || 'E' || 'F'){
        if(ch == 'A'){
            printf("%.2f",f);
        }
        else if(ch == 'B'){
            printf("%.2f",f - (f * 0.02));
        }
    }
}
*/


//Printing a number by reversing it

// #include<stdio.h>
// int main(){
//     int n,t,rev=0;
//     scanf("%d",&n);
//     while(n!=0){
//         t = n % 10;
//         rev = rev * 10 + t;
//         n = n/10;
//     }
//     printf("The reversed number is: %d",rev);
// }



//checking weather the number is palindrome number or not
/*
#include<stdio.h>
int main(){
    int n,t,rev=0,temp;
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        t = n % 10;
        rev = rev * 10 + t;
        n = n/10;
    }
    if(temp == rev)
        printf("The number is palindrome");
    else
        printf("The number is not a palindrome");
}
*/

//How to count the numbers digits in a number

// #include<stdio.h>
// int main(){
//     int n,count = 0;
//     scanf("%d",&n);
//     while(n!=0){
//         count++;
//         n = n/10;
//     }
//     printf("Number of digits are %d",count);
// }



/*
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        sum = sum + n % 10;
        n = n/10;
    }
    printf("the sum of num is %d",sum);
}
*/


//finding weather the number is armstrong number or not using functions

// #include <stdio.h>
// #include <math.h>

// int countDigits(int num) {
//     int count = 0;
//     while (num != 0) {
//         num /= 10;
//         ++count;
//     }
//     return count;
// }

// int isArmstrong(int num) {
//     int originalNum, remainder, n = 0, result = 0;

//     originalNum = num;

//     // Count number of digits
//     int digits = countDigits(num);

//     // Calculate result
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, digits);
//         originalNum /= 10;
//     }

//     // Check if number is Armstrong
//     if (result == num)
//         return 1; // It's an Armstrong number
//     else
//         return 0; // It's not an Armstrong number
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if(num == 153){
//         printf("%d is an Armstrong number",num);
//     }
//     else if (isArmstrong(num))
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);

//     return 0;
// }



//do while
/*
#include<stdio.h>
int main(){
    int i = 1;
    do{
        printf("%d",i);
        i++;
    }while(i >= 10);
}
*/

//for loop
/*
#include<stdio.h>
int main(){
    int i;
    for(i = 1;i<=10;i++){
        printf("%d\n",i);
    }
}
*/



//Printing sum of odd and even numbers using one for loop

// #include<stdio.h>
// int main(){
//     int num,sum1 = 0,sum2 = 0;
//     for(num = 1; num <=100;num++){
//         if(num%2==0){
//             sum1 = sum1 + num;
//         }
//         else{
//             sum2 = sum2 + num;
//         }
//     }
//     printf("The sum of even numbers is: %d",sum1);
//     printf("\nThe sum of odd numbers is: %d",sum2);
// }


//fresh code to copy
/*
#include<stdio.h>
int main(){

    return 0;
}
*/


//printing armstrong number between 100 to 999

// #include<stdio.h>
// int main(){
//     int n,t,arm,x;
//     for(n=100;n<=999;n++){
//         t=n;
//         arm = 0;
//         while(t!=0){
//             x = t%10;
//             arm = arm + x*x*x;
//             t = t/10;
//         }
//         if(n == arm)
//         printf("%d\n",n);
//     }
//     return 0;
// }


/*
#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,tot;
    float per;
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    tot = m1+m2+m3+m4+m5;
    per = ( (float)tot / 500 ) * 100;
    printf("Total: %d\n",tot);
    printf("Percentage: %.2f",per);
    return 0;
}
*/

//factioral of num 1 t0 15

// #include <stdio.h>
// int main() {
//     long int i, temp, f;
//     for (i = 1; i <= 15; i++) {
//         temp = i;
//         f = 1;
//         while (temp != 0) {
//             f = f * temp;
//             temp--;
//         }
//         printf("Factorial of %ld is %ld\n", i, f);
//     }
//     return 0;
// }



//sum of digits of its own from 101 to 999

// #include <stdio.h>
// int main() {
//     int num, digit, sum, temp;
//     for (num = 101; num <= 999; num++) {
//         sum = 0;
//         temp = num;

//         while (temp != 0) {
//             digit = temp % 10;
//             sum += digit;
//             temp /= 10;
//         }

//         printf("%d = %d\n", num, sum);
//     }

//     return 0;
// }



//checking weather a number is prime or not

// #include<stdio.h>
// int main()
// {
//     int n,i,f=1;
//     scanf("%d",&n);
//     for(i=2;i<=n/2;i++)
//     {
//         if(n%i==0)
//         {
//             f=0;
//             break;
//         }
//     }
//     if(f==0)
//     printf("Number is not a prime number\n");
//     else
//     printf("Number is prime\n");
    
// }


//break statement
/*
#include<stdio.h>
int main(){
    int i = 1;
    while(i<=10){
        if( i == 5){
            break;
        }
        else{
            printf("%d\n",i);
        }
        i++;
    }
    printf("Out of loop");
}
*/

//checking weather the number is perfect number

// #include<stdio.h>
// int main(){
//     int num,i,sum=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(i=1;i<num;i++){
//         if(num%i==0){
//             sum += i;
//         }
//     }
//     if(sum == num){
//         printf("The number is a perfect number");
//     }
//     else{
//         printf("The number is not a perfect number");
//     }
// }


//printing the odd and even divisors of number differently

// #include<stdio.h>
// int main(){
//     int i,num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("\nEven divisors");
//     for(i = 1; i<=num; i++){
//         if(num%i==0){
//             if(i%2==0){
//                 printf(" %d",i);
//             }
//         }
//     }
//     printf("\nodd divisors");
//     for(i = 1; i<=num; i++){
//         if(num%i==0){
//             if(i%2!=0){
//                 printf(" %d",i);
//             }
//         }
//     }
// }


//printing perfect number from 1 to 100

// #include<stdio.h>
// int main(){
//     int i,j,num,sum;
//     for(i=1;i<=100;i++){
//         num = i;
//         sum = 0;
//         for(j=1;j<num;j++){
//             if(num%j==0){
//                 sum = sum + j;
//             }
//         }
//         if(sum == i){
//             printf("%d\n",num);
//         }
//     }   
// }

//Functions
//Call by value [In this want changes are made in function those changes dosen't make any changes in main function]

// #include<stdio.h>
// void increment(int x){
//     x = x+1;
// }
// int main(){
//     int x = 10;
//     printf("X before increment: %d",x);
//     increment(x);
//     printf("\nX after increment: %d",x);
// }

//Call by address method [What changes are made in function that changes are apply in main function we use pointers for that]

// #include<stdio.h>
// void increment(int *p){
//     *p = *p + 1;
// }
// int main(){
//     int x = 10;
//     printf("X before increment %d",x);
//     increment(&x);
//     printf("\nX after increment %d",x);
// }

//Swapping of numbers using functions(call by value)

// #include<stdio.h>
// void swap(int a, int b){
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }
// int main(){
//     int a = 12,b = 24;
//     printf("Number before swaaping %d, %d",a,b);
//     swap(a,b);
//     printf("\nNumber After swaaping %d, %d",a,b);
// }

//call by address for swapping

// #include<stdio.h>
// void swap(int *a,int *b){
//     int c;
//     c = *a;
//     *a = *b;
//     *b = c;
// }
// int main(){
//     int a = 12,b = 23;
//     printf("Number before swapping %d, %d",a,b);
//     swap(&a,&b);
//     printf("\nNumbers after swapping %d, %d",a,b);
// }



//Checking whether the number is perfect or not
// #include<stdio.h>
// void perfect(int a){
//     int i,sum=0;
//     for(i = 1;i<a;i++){
//         if(a%i==0){
//             sum = sum + i;
//         }
//     }
//     if(sum == a){
//         printf("Number is a perfect number");
//     }
//     else{
//         printf("Number is not a perfect number");
//     }
// }
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     perfect(a);
// }


//printing the greatest of 3 numbers using function

// #include <stdio.h>
// int greatest() {
//     int a, b, c;
//     printf("Enter 3 numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b && a > c)
//         return a;
//     else if (b > a && b > c)
//         return b;
//     else
//         return c;
// }

// int main() {
//     int max;
//     max = greatest();
//     printf("The greatest of three is %d", max);
//     return 0;
// }

//checking whether the number is prime or not using function

// #include <stdio.h>
// int prime(int x) {
//     int i, f = 1;
//     for (i = 2; i <= x / 2; i++) {
//         if (x % i == 0) {
//             f = 0;
//             break;
//         }
//     }
//     if (f == 1)
//         return 1;
//     else
//         return 0;
// }

// int main() {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     if (prime(x))
//         printf("%d is a prime number.", x);
//     else
//         printf("%d is not a prime number.", x);
//     return 0;
// }


//factorial of a number using function and for loop

// #include<stdio.h>
// int factorial(int num){
//     int i,sum=1;
//     for(i = 1;i<=num;i++){
//         sum = sum * i;
//     }
//     return sum;
// }
// int main(){
//     int num,fac;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     fac = (factorial(num));
//     printf("factioral of number %d is %d",num,fac);
// }

//factorial of a num using function and while loop

// #include<stdio.h>
// long int factorial(long int x){
//     long int f =1;
//     while(x!=0){
//         f = f * x;
//         x--;
//     }
//     return f;
// }
// int main(){
//     int num,fac;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     fac = factorial(num);
//     printf("Factorial of number %d is %d",num,fac);
// }


//printing reverse of a number

// #include<stdio.h>
// int reverse(int n){
//     int t, rev =0;
//     while(n!=0){
//         t = n %10;
//         rev = rev*10+t;
//         n = n/10;
//     }
//     return rev;
// }
// int main(){
//     int num;
//     printf("Enter a numebr: ");
//     scanf("%d",&num);
//     printf("Reverse of number: %d",reverse(num));
// }



//Finding the prime factors of the given number

// #include <stdio.h>

// int main() {
//     int num, i, j, isPrime;
//     // Input a number from the user
//     printf("Enter any number to find its prime factors: ");
//     scanf("%d", &num);
//     // Find all prime factors
//     for (i = 2; i <= num; i++) {
//         if (num % i == 0) {
//             // Check if 'i' is prime
//             isPrime = 1;
//             for (j = 2; j <= i / 2; j++) {
//                 if (i % j == 0) {
//                     isPrime = 0;
//                     break;
//                 }
//             }
//             // If 'i' is prime, print it
//             if (isPrime == 1) {
//                 printf("%d ", i);
//             }
//         }
//     }
//     return 0;
// }


//Recursion
//base case is used to stop the condition at a point and recursive case give the out put(it is used like loop)
/*
#include<stdio.h>
long int factioral(int a){//recursive
    if(a == 0 || a == 1)//base case
        return 1;
    else
        return(a*factioral(a-1));//recursive case
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The Factioral of number is: %d",factioral(a));
}
*/

//Reverse of a number using recursion

// #include<stdio.h>
// int t,rev;
// int Reverse(int a){
//     if(a != 0){
//         t = a%10;
//         rev = rev * 10 + t;
//         Reverse(a/10);
//     }
//     else{
//         return rev;
//     }
// }
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     printf("The reverse of a number is: %d",Reverse(a));
// }



//fibonnaci seriers using recursion

// #include<stdio.h>
// int fibb(int n){
//     if(n==1)
//         return 0;
//     else if(n == 2)
//         return 1;
//     else
//         return (fibb(n-1)+fibb(n-2));
// }
// int main(){
//     int i,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         printf("%d\n",fibb(i));
//     }
// }


//code for skiping 2

// #include<stdio.h>
// int main(){
//     //for increament we can use i=i+1,i+=1 and i++ 
//     //for decreament we can use i = i-1,i-=1,i--
//     for(int i=0;i<=10;i+=2){
//         printf("%d\n",i);
//     }
// }


// printing A to Z;
// #include<stdio.h>
// int main(){
//     for(char ch = 'A';ch <='Z';ch+=1){
//         printf("%c \n",ch);
//     }
//     return 0;
// }


