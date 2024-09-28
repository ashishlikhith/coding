//basic java program
/*
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
*/


//LOCAL VARIBLES
/* 
public class HelloWorld {
   public void pupAge() { // Creating an another function giving it a name
      int age = 0; // local variabe
      age = age + 7;
      System.out.println("Puppy age is : " + age);
   }

   public static void main(String args[]) { 
      HelloWorld t = new HelloWorld();   //crearting object in the main class and getting the value from the function we creates 
      t.pupAge();
   }
}
*/

//creating method and calling it.(Instance)
/*
public class HelloWorld {
    public String name;
    private double salary;
    public HelloWorld (String empName) { //constructor 
       name = empName;
    }
    public void setSalary(double empSal) {
       salary = empSal;
    }
    public void printEmp() {
       System.out.println("name  : " + name );
       System.out.println("salary :" + salary);
    }
    public static void main(String args[]) {
        HelloWorld empOne = new HelloWorld("Ransika");   // creating a method (classname objname = new classname();)
       empOne.setSalary(1000);
       empOne.printEmp();
    }
 }
*/

//Static Varibale 
/* 

public class HelloWorld{
   int id;
    String name;
    int salary;
    static String ceo;
    HelloWorld(int id, String name, int salary, String ceo){
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.ceo = ceo;
    }
    void display(){
        System.out.println("ID: " + id + ", " + "Name:: " + name + ", " + "Salary: $" + salary + " & " + "CEO:: " + ceo);
    }

}
*/




//If else 
/* 
public class HelloWorld{
   public static void main(String args[]){
      int i = 20;
      if(i > 15){
         System.out.println("i is greater than 15");
      }
      else{
         System.out.println("i is smaller than 15");
      }
   }
}
*/

// if, else if, else:
/* 
public class HelloWorld {
   public static void main(String args[]){
      String A = "Ashish";
      int length = A.length();
      if(length == 6){
         System.out.println(A);
      }
      else if(length > 6){
         System.out.println("Length is greater then we expect");
      }
      else{
         System.out.println("Enter string (or) Enter Name");
      }
   }
}
*/

//Switch 
/* 
public class HelloWorld {
   public static void main(String args[]){
      int day = 6;
      switch(day){
         case 1:
            System.out.println("Monday");
            break;
         case 2:
            System.out.println("Tuesday");
            break;
         case 3:
            System.out.println("Wednesday");
            break;
         case 4:
            System.out.println("Thursday");
            break;
         case 5:
            System.out.println("Friday");
            break;
         case 6:
            System.out.println("Saturday");
            break;
         case 7:
            System.out.println("Sunday");
            break;
      }
   }
}
*/

//task for caculating marks
/* 
public class HelloWorld {
    public static void main(String[] args) {
      int marks = 110;
      if (marks <= 100 && marks > 90) {
         System.out.println("You got A+ grade");
      } 
      else if (marks <= 90 && marks > 80) {
         System.out.println("You got A grade");
      }
      else if (marks <= 80 && marks > 70) {
         System.out.println("You got B grade");
      }
      else if (marks <= 70 && marks > 60) {
         System.out.println("You got C grade");
      }
      else if (marks <= 60 && marks > 50) {
         System.out.println("You got D grade");
      } 
      else if(marks <= 50 && marks > 40){
         System.out.println("You got E grade");
      }
      else if(marks < 40){
         System.out.println("You Failed in the test");
      }
      else{
         System.out.println("You Marks are invaild or You are absent in the exam");
      }
    }
}
*/


//task
/*
public class HelloWorld { 
   public static void main(String[] args){
      int marks;
      marks = 70;
      switch(marks/10){
         case 10:
            System.out.println("You got A+ grade");
            break;
         case 9:
            System.out.println("You got A grade");
            break;
         case 8:
            System.out.println("You got B grade");
            break;
         case 7:
            System.out.println("You got C grade");
            break;
         case 6:
            System.out.println("You got D grade");
            break;
         case 5:
            System.out.println("You got Just passed in the test");
            break;
         default:
            System.out.println("You got failed in the test");
      }
   }
}
*/

//LOOP
//For loop
/* 
public class HelloWorld {
   public static void main(String args[]){
      for(int i = 1; i <= 10;i++){
         System.out.println(i);
      }
   }
}
*/

//sum of first 10 natural numbers
/* 
public class HelloWorld {
   public static void main(String args[]){
      int sum = 0;
      for(int i = 1; i <=10; i++){
         sum += i;
      }
      System.out.println("Sum is " + sum);
   }
}
*/

//While loop
/* 
public class HelloWorld {
   public static void main(String args[]){
      int i = 0;
      while (i <= 10) {
         System.out.println(i);
         i++;
      }
   }
}
*/

//Sum of numbers in while loop
/* 
public class HelloWorld {
   public static void main(String args[]){
      int sum = 0;
      int i = 0;
      while (i <= 10) {
         sum = sum + i;
         i++;
      }
      System.out.println(sum);
   }
}
*/

//Do while loop
//Printing first 10 even natural numbers
/* 
public class HelloWorld {
   public static void main(String args[]){
      int i = 0;
      System.out.println("Printing first 10 even numbers");
      do{
         System.out.println(i);
         i+=2;
      }while(i <= 20);
   }
}
*/


//Arrays (single dimensional)
/* 
public class HelloWorld {
   public static void main(String args[]){
      int a[] = new int[3]; //declaration and instantiation
      a[0] = 1; //initialization
      a[1] = 2;
      a[2] = 3;
      for(int i = 1; i <= a.length;i++){
         System.out.println(a[i]);
      }
   }
}
*/

//setting the total array in single line
/* 
public class HelloWorld {
   public static void main(String args[]){
      int a[] = {1,2,3,4}; //declaration, instantiation and initialization
      for(int i = 0; i <= a.length; i++){
         System.out.println(a[i]);
      }
   }
}
*/

//For each loop
/* 
public class HelloWorld {
   public static void main(String args[]){
      int a[] = {1,2,3,4};
      for(int i:a){ //for(datatype var:(untill it travel))
         System.out.println(i);
      }
   }
}
*/

//passing array to a function
/* 
public class HelloWorld {
   public static void main(String[] args) {
       // Creating an array
       int[] numbers = {1, 2, 3, 4, 5};
       // Calling a method and passing the array
       printArray(numbers);
       // Modifying the array in the main method
       modifyArray(numbers);
       // Displaying the modified array
       System.out.println("After modification in the main method:");
       printArray(numbers);
   }
   // Method to print the elements of an array
   public static void printArray(int[] arr) {
       System.out.print("Array elements: ");
       for (int num : arr) {
           System.out.print(num + " ");
       }
       System.out.println();
   }
   // Method to modify the elements of an array
   public static void modifyArray(int[] arr) {
       // Doubling each element of the array
       for (int i = 0; i < arr.length; i++) {
           arr[i] *= 2;
       }
   }
}
*/

//multi dimensional array:
//printing matrix
/* 
public class HelloWorld {
   public static void main(String args[]){
      int arr[][] = {{1,2,3}, {4,5,6}, {7,8,9}};
      for(int i=0;i<3;i++){  //accessing row
         for(int j=0;j<3;j++){  //accessing column
           System.out.print(arr[i][j]+" ");  
         }  
         System.out.println();  
        }        
   }
}
*/

//addition of matrix 
/* 
public class HelloWorld {
   public static void main(String args[]){
      int arr1[][] = {{1,2,3}, {2,3,4}, {3,4,5}};
      int arr2[][] = {{1,2,3}, {2,3,4}, {3,4,4}};
      int arr3[][] = new int[3][3];
      for(int i = 0; i<3; i++){
         for(int j = 0; j<3; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            System.out.print(arr3[i][j] + " ");
         }
         System.out.println();
      }
   }
}
*/

//Class
/* 
public class HelloWorld { //class should be same as file name
   public static void main(String args[]){
      System.out.println("Ashish");
   }
}
*/

//Objet 
/* 
public class HelloWorld {
   int age = 18;
   String name = "Ashish";
   public static void main(String args[]){
      HelloWorld H1 = new HelloWorld(); //Creating an objet
      System.out.println(H1.age); //accessing member through reference variable  
      System.out.println(H1.name);
   }
}
*/

//there are 3 ways in initialize an object
// 1 Initialization through reference :
/* 
public class HelloWorld {
   int age;
   String name;
   public class HelloWorld_1 {
      public static void main(String args[]){
         //Creating Objects intilazling through
         HelloWorld H1 = new HelloWorld();
         HelloWorld H2 = new HelloWorld();
         H1.age = 18;
         H1.name = "Ashish";
         H2.age = 18;
         H2.name = "Likhith";

         System.out.println(H1.age+" "+H1.name);  
         System.out.println(H2.age+" "+H2.name);  
       
      }
   }
}
*/

// 3 Initialization through a constructor 
/* 
public class HelloWorld {
   int modelYear;
   String modelName;
   
   public static void My(int year, String name) {
   modelYear = year;
   modelName = name;
   }
   
   public static void main(String[] args) {
   My myCar = new My(1969, "Mustang");
   System.out.println(myCar.modelYear + " " + myCar.modelName);
   }
}
*/


//Methods (Predefine methods)
/* 
public class HelloWorld {
   public static void main(String args[]){
      String Name = "Ashish"; 
      int length = Name.length(); //caculating the length of the string 
      System.out.println(length);
   }
}
*/

//User define
/* 
public class HelloWorld {
   public static void main(String args[]){
      int num = 5;
      findEvenOdd(num);
   }
   public static void findEvenOdd(int num){
      if(num%2==0){
         System.out.println("Even num");
      }
      else{
         System.out.println("Odd num");
      }
   }
}
*/

//How to take input from user
/* 
import java.util.Scanner;
public class HelloWorld {
   public static void main(String args[]){
      Scanner scan = new Scanner(System.in); //create an object 
      System.out.println("Enter a number: ");
      int num = scan.nextInt(); //call the object with inbuilt function nextInt
      findEvenOdd(num);
   }
   public static void findEvenOdd(int num)  {  
      if(num%2==0)   
         System.out.println(num+" is even");   
      else   
         System.out.println(num+" is odd");  
   }  

}
*/

//method overloading (Calling one method more than one time)
// 1) By changing num of arg  2) By changing the data type



/* //reverse a number
public class HelloWorld {
   public static void main(String args[]) {
       int number = 12345;
       int reversedNumber = reverseNumber(number);
       System.out.println("number: " + number);
       System.out.println("Reversed number: " + reversedNumber);
   }
   public static int reverseNumber(int num) {
       int reversedNum = 0;
       while (num != 0) {
           int digit = num % 10;
           reversedNum = reversedNum * 10 + digit;
           num /= 10;
       }
       return reversedNum;
   }
}

*/
//Largest of 3 number
/* 
public class HelloWorld {
   public static void main(String args[]){
      int num1 = 20;
      int num2 = 30;
      int num3 = 40;
      if(num1 < num2){
         if(num2 < num3){
            System.out.println(num3);
         }
      }
   }
}
*/

/* //largest of 3 ternary method
public class HelloWorld{  
   public static void main(String args[]){  
      int x=50;   
      int y=80;  
      int z=70;  
      int largestNumber= (x > y) ? (x > z ? x : z) : (y > z ? y : z);  
      System.out.println("The largest numbers is:  "+largestNumber);  
   }  
}  
*/

//Sum of natural
/* 
public class HelloWorld {
   public static void main(String[] args) {
       int[] numbers = {1, 2, 3, 4, 5}; 
       int sum = calculateSum(numbers);
       System.out.println("Sum of numbers = " + sum);
   }
   public static int calculateSum(int[] numbers) {
       int sum = 0;
       for (int number : numbers) {
           sum += number;
       }
       return sum;
   }
}
*/



/* 
public class HelloWorld {
   public static void main(String[] args) {
       int n = 10; 
       System.out.println("Fibonacci Series up to " + n + " terms:");
       FibonacciSeries(n);
   }
   public static void FibonacciSeries(int n) {
       int firstTerm = 0, secondTerm = 1;
       for (int i = 0; i < n; i++) {
           System.out.println(firstTerm + " ");
           int nextTerm = firstTerm + secondTerm;
           firstTerm = secondTerm;
           secondTerm = nextTerm;
       }
   }
}
*/

/* 
public class HelloWorld {
   public static void main(String args[]){
      int number = 3;
      if(number % 2 == 1){
         System.out.println("Odd number");
      }
      else{
         System.out.println("even number");
      }
   }
}
*/

/* 
public class HelloWorld {
   public static void main(String[] args) {
       int number = 5;
       int factorial = 1;
       for (int i = 1; i <= number; i++) {
           factorial *= i;
       }
       System.out.println("Factorial of " + number + " = " + factorial);
   }
}

*/



