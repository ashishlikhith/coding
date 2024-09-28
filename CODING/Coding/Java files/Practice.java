/* 
import java.util.Scanner;
public class Practice {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int a = scan.nextInt();
        //System.out.println("The number you entered"+ a);
        if(a%2 == 1){
            System.out.println("Weird");
        }
        if(a%2==0){
            if(a >= 2 && a <= 5){
                System.out.println("Not Weird");
            }
            else if(a >= 6 && a <=20){
                System.out.println("Weird");
            }
            else if(a > 20){
                System.out.println("Not Weired");
            }
        }
    }
}
*/

/* 
import java.util.Scanner;
public class Practice {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        double b = scan.nextDouble();
        scan.nextLine();// Consume the newline character
        String str = scan.nextLine();
        System.out.println("String: " + str);
        System.out.println("Double: " + b);
        System.out.println("Int: " + a);
    }
}
*/

/*
public class Practice {
    public static void main(String[] args) {
        int num = 2;
        for(int j = 1; j<=10; j++){
            System.out.println(num + " * " + j + " = " + j*2);
        }
    }
}
*/


/*
import java.util.Scanner;

public class Practice {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number less then 5 digit: ");
        int num = scan.nextInt();
        

        String str1 = "" + num;

        //System.out.println(str1.length());

        if (str1.length() == 1) {
            System.out.println(num + " can be fit in Short, int, long");
        } else if (str1.length() == 3 || str1.length() == 2) {
            System.out.println(num + " can be fit in Short, int, long");
        } else if (str1.length() == 5 || str1.length() == 4) {
            System.out.println(num + " can be fit in int and long");
        } else {
            System.out.println("You enterd more the 5 digited number");
        }

    }
}
*/

//Calling a class by using object
/* 
import java.util.Scanner;
class Student {
    int id;
    String name;
}
class Practice {
    public static void main(String args[]) {
        Student s1 = new Student();

        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        s1.id = scan.nextInt();
        scan.nextLine();
        System.out.print("Enter a string: ");
        s1.name = scan.nextLine();

        System.out.println("The number is: "+s1.id);
        System.out.println("The string is: "+s1.name);
    }
}
*/

/* 
//Intialize object through method
class Student{
    int rollno;  
    String name;  
    void insertRecord(int r, String n){  
    rollno=r;  
    name=n;  
    }
    void displayInformation(){
        System.out.println(rollno+" "+name);
    }  
}
class Practice {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        s1.insertRecord(29,"Ashish");
        s2.insertRecord(27,"Gowtham");
        s1.displayInformation();
        s2.displayInformation();
    }
}
*/




//Method overloading
//calling a method more than once (by changing num of args) or (data type)
//By num of args
/* 
class Adder{ 
    static int add(int a,int b){
        return a+b;
    } 
    static int add(int a,int b,int c){
        return a+b+c;
    } 
} 
class Practice{ 
    public static void main(String[] args){ 
        System.out.println(Adder.add(11,11)); 
        System.out.println(Adder.add(11,11,11)); 
    }
} 
*/

//By changing data types
/* 
class Multiply{
    static int mul(int a, int b){
        return(a+b);
    }
    static double mul(double c,double d){
        return(c+d);
    }
}
public class Practice {
    public static void main(String[] args){
        System.out.println(Multiply.mul(2345, 23456));
        System.out.println(Multiply.mul(345.5, 567.5));
    }
    
}
*/

//Method overriding
/* 
class A{
    public String name(){
        System.out.print("This is name function in class A");
        return null;
    }

}
class B extends A{
    public String name(){
        System.out.print("This is name function in class b");
        return null;
    }
}
class Practice{
    public static void main(String[] args){
        A objA = new A();
        objA.name();
        A objB = new B();
        objB.name();
    }
}
*/

//Constructors 
//There are 2 types of constructors


//Nested class
/* 
class OuterClass {
    int x = 10;
  
    class InnerClass {
      int y = 5;
    }
}
  public class Practice {
    public static void main(String[] args) {
      OuterClass Outer = new OuterClass(); //accessing the outer class
      OuterClass.InnerClass Inner = Outer.new InnerClass(); //accessing the inner class by using outer class
      System.out.println(Inner.y + Outer.x);
    }
}
*/


//static keyword
//static is used to allocate the memory once for each time
/* 
class Student{
    int RollNo;
    String Name;
    static String College = "Lpu";
    Student(int r, String n){
        RollNo = r;
        Name = n;
    }
    void disply(){
        System.out.println(Name);
        System.out.println(RollNo);
        System.out.println(College);
        System.out.println();
    }
}
public class Practice {
    public static void main(String[] args) {
        Student S1 = new Student(29, "Ashish");
        Student S2 = new Student(27, "Gowtham");
        S1.disply();
        S2.disply();
    }
    
}




static String college = "ITS";  
    static void change(){  
    college = "BBDIT";  
    } 
*/

//Static method
//Static method can be invoked by without the need for creating an instance of a class
/*
class Student{
    int RollNo;
    String Name;
    static String College = "Sri Viswa";
    static void change(){
        College = "LPU";
    }
    Student(int r, String n){
        RollNo = r;
        Name = n;
    }
    void disply(){
        System.out.println("RollNo "+RollNo);
        System.out.println("Name "+Name);
        System.out.println("College "+College);
        System.out.println();
    }
}
public class Practice {
    public static void main(String[] args) {
        Student.change();
        Student S1 = new Student(8, "Ashish");
        Student S2 = new Student(16, "Gowtham");
        Student S3 = new Student(7, "Bhanu");
        Student S4 = new Student(57, "Nikilesh");
        S1.disply();
        S2.disply();
        S3.disply();
        S4.disply();
    }
}
 */

//Static block
//it is invoked before the main function in the main class
/* 
class Practice{
    static{System.out.println("This is a static block");}
    public static void main(String[] args) {
        System.out.println("Hello Amigos");
    }
}
*/

//Final keyword
//final variable once assigned a value can never be changed.
/* 
class Practice{
    final String BikeName = "KTM";
    int model = 125;
    void change(){
        String BikeName = "DUKE"; 
    }
    public static void main(String[] args) {
        Practice oj = new Practice();
        oj.change();
    }
}
*/



//Doubts in course
//Arrays
//object
//Methods
//Constructors
//


/* 
abstract class Bike{  
    Bike(){System.out.println("bike is created");}  
    abstract void run();  
    void changeGear(){System.out.println("gear changed");}  
}  
//Creating a Child class which inherits Abstract class  
class Honda extends Bike{  
    void run(){System.out.println("running safely..");}  
}  
//Creating a Test class which calls abstract and non-abstract methods  
class Practice{  
  public static void main(String args[]){  
    Bike obj = new Honda();  
    obj.run();  
    obj.changeGear();  
  }  
} 
*/


/* 
abstract class Student{
    void information(){
        int rollno = 29;
        String Section = "K23CG";
        String Dept = "CSE";
        System.out.println("Students information");
        System.out.println("RollNo: "+rollno+" "+"Section: "+Section+" "+"Dept: "+Dept);
    }
    abstract void name();
}
class Name extends Student{
    void name(){
        String Name = "Ashish";
        System.out.println("Name: "+Name);
    }
}
class Practice{
    public static void main(String[] args) {
        Student student = new Name();
        student.name();
        student.information();
    }
}
*/


//Strings
public class Practice {
    public static void main(String[] args) {
        String str1 = "Ashish";
        System.out.println(str1);
        String str2 = new String("Likhith");
        System.out.println(str2);
    }
}
    