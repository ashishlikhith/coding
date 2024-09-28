'''
#print a code if user enters alphabet print alphabet,digit print digit,float print float, if user enters end print no value.
num1 = input("Enter number: ")
while num1 != "end":
  if num1.isdigit():
    print(int(num1),"is digit")
  elif num1.isalpha():
    print("alphabet")
  else:
    print(float(num1),"is float")
  num1 = input("Enter number: ")
else:
  print("no value")
'''




#making a while loop of numbers fixing the first two numbers and print the other numbers and asking the user to enter last
#fibbonaci series

# n = int(input("Enter the last digit: "))
# a=0
# b=1
# print(a)
# while(b<=n):
#     print(b)
#     temp = b
#     b = a + b
#     a = temp


#print the multiplication of number from the given number to till end of loop by decreasing(factorial) number
'''
nnum = int(input("Enter the value:"))
fac = 1

while nnum > 1:
    fac = fac * nnum
    nnum = nnum - 1

print("Factorial:", fac)
'''

#print the gcd of the given numbers
'''
import math
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
gcd_result = math.gcd(num1, num2)
print("The GCD of {} and {} is {}".format(num1,num2,gcd_result))
'''

#Different method of gcd

# n=int(input("Enter the number:"))
# m=int(input("Enter the number: "))
# i = m
# while(i>=1):
#     if(n%i==0 and m%i==0):
#         print("The GCD of",i)
#         break
#     else:
#         i=i-1


#for loop
'''
str="hello"
for i in str:
    print(i)

list1=[1,2.5,"hello"]
for i in list1:
    print(i)
'''

#printing table in the for loop below
'''
num1=int(input("Enter the number: "))
num2=int(input("Number upto you want the caculaction "))
n=1
while(n<=num2):
    print("{} x {} = {}".format(num1,n,num1*n))
    n=n+1
    if(n>12):
        break
print("It is the {} table".format(num1))
'''

#printing table in the for loop below
'''
num1=int(input("Enter the number: "))
num2=int(input("Number upto you want the caculaction "))
i=1
for i in range(num2+1):
    print("{} x {} = {}".format(num1,i,num1*i))
    i = i+1
    if(i>12):
        break
print("It is the {} table".format(num1))
'''


'''
num1 = input("Enter a number: ")

while num1 != "end":
    if num1.isdigit():
        print("It's a digit")
    else:
        list1 = list(num1)
        i = 0
        f = 0
        while i < len(list1):
            if list1[i] == "." or list1[i].isdigit():
                i = i + 1
            else:
                f = 1
                break
        if f == 1:
            print("It's a string")
        else:
            print("It's a float")
    num1 = input("Enter input: ")
'''

'''
while True:
    user_input = input("Enter input (or 'end' to exit): ")
    
    if user_input == "end":
        break

    if "." in user_input:
        if user_input.replace(".", "", 1).isdigit():
            print("It's a float:", float(user_input))
        else:
            print("It's a string:", user_input)
    elif user_input.isdigit():
        print("It's an integer:", int(user_input))
    else:
        print("It's a string:", user_input)
'''

'''n=str(input("Enter the name: "))
while(n!="end"):
    m=int(input("Enter the marks: "))
    print("{} scored {} marks".format(n,m))
    n=str(input("Enter the name: "))'''

#for loop 
'''n=int(input("enter the number of lines"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print("*",end=' ')
    print()
'''


'''
n=int(input("enter the number of lines"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print(j,end=' ')
    print()
'''

'''
n=int(input("enter the number of lines"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print(i,end=' ')
    print()
'''

'''
n=int(input("enter the number"))
for i in range(1, n + 1):
    for j in range(n - i):
        print(" ", end=" ")
    for k in range(i):
        print("*", end=" ")
    print()
'''

#factors for loop
'''
n = int(input("enter the number"))
for i in range(1, n + 1):
    if i%n ==0:
        i=list
    else:
        continue
    print(list)
'''

'''
num = int(input("Enter a number: "))
factors = []
sum=0
for i in range(1, num):
    if num % i == 0:
        factors.append(i)
        sum = sum + i
print("Factors of", num, "are:", factors)
if sum == num:
    print(num, "is a prefect number")
else:
    print(num, "is not a prefect number")
'''

'''
#printing prime numbers with for loops
n=int(input("Enter Number: "))
for i in range(2,n):
    if n % i == 0:
        print("not a prime number")
        break
else:
    print("prime number")
'''

# printing an amstrong number
'''
num_input = input("Number: ") #taking input as string
length = len(num_input) #length of of the input string
sum = 0 #sum as 0:
for i in range(0,length): #making sure that the input string as a index 
    s1 = int(num_input[i]) #making the input string as a integer
    sum = sum + s1**length #caculate the sum    
num_input1 = int(num_input) #making the input as interger
if sum == num_input1: # making a stright forword if condition
    print(num_input1, "is a amstrong number")
else:
    print(num_input1, "is not a amstrong number")
'''

'''
n = input("Enter the password:")
for i in range(0,len(n)):
    if n.isdigit(n[i]):
        print("is a digit")
    elif n.isalpha(n[i]):
        print("is a alpha ")
    else:
        print("is a special character")
'''

'''
# Function to count the number of alphabets, digits, and special characters in a string
def count_characters(input_string):
    alphabet_count = 0
    digit_count = 0
    special_count = 0
    
    for char in input_string:
        if char.isalpha():
            alphabet_count += 1
        elif char.isdigit():
            digit_count += 1
        else:
            special_count += 1
    
    return alphabet_count, digit_count, special_count

# Input string from the user
input_string = input("Enter a string: ")

# Calculate the counts
alphabet_count, digit_count, special_count = count_characters(input_string)

# Display the results
print("Number of alphabets:", alphabet_count)
print("Number of digits:", digit_count)
print("Number of special characters:", special_count)
'''

'''
str = input("Enter a string: ")
s1 = 0
s2 = 0
s3 = 0
for i in str:
    if i.isalpha():
        #print(i)
        s1 += 1
    elif i.isdigit():
        #print(i)
        s2 += 1
    else: 
        #print(i)
        s3 += 1
print("it is a string",s1)
print("it is a digit",s2)
print("it is a special character",s3)
'''

'''
n=int(input("Enter the number:"))
m=int(input("Enter the number: "))
i=1
gcd=0
while(i<=n and i<=m):
    if(n%i==0 and m%i==0):
        gcd=i
    i=i+1
print("gcd",gcd)
'''

'''
import sys

def create_state_capital_dict():
  state_capital_dict = {}
  while True:
    state = input("State (or 'end' to quit): ")
    if state == "end":
      break
    capital = input("Capital: ")
    state_capital_dict[state] = capital
  return state_capital_dict

def main():
  state_capital_dict = create_state_capital_dict()
  print(state_capital_dict)

if __name__ == "__main__":
  main()
'''
#FUNCTIONS
"""
def main():
    print("hello world!")
    print("goodbye world")
n = int(input("Enter the number: "))
i =1
for i in range(1,n+1):
    main()
    i = i+1
"""
#ARTHAMATIC FUNCTIONS
'''
def add():
    a=int(input("Enter a:"))
    b=int(input("enter b:"))
    print(a+b)
def sub():
    a=int(input("Enter a:"))
    b=int(input("enter b:"))
    print(a-b)
def mult():
    a=int(input("Enter a:"))
    b=int(input("enter b:"))
    print(a*b)
def division():
    a=int(input("Enter a:"))
    b=int(input("enter b:"))
    print(a/b)
print("1 for +, 2 for -, 3 for *, 4 for /")
n = int(input("Enter choice:"))
if n ==1:
    add()
elif n ==2:
    sub()
elif n ==3:
    mult()
elif n ==4 :
    division()
else :
    print("Incorrect number")
'''

'''
def main(a,b):
    print(a+b)

x = int(input("Enter x:"))
y = int(input("Enter y:"))
main(x,y)
'''


#AREA OF THE SHAPE

'''
shape=input("choose a shape\n c for circle\n s for square\n r for rectangle\n t for triangle\n : ")
def c():
    r=int(input("enter radius: "))
    print("the area of the circle is",3.14*r*r)
def s():
    s=int(input("enter side length: "))
    print("the area of square is",s*s)
def r():
    l=int(input("enter length: "))
    w=int(input("enter width: "))
    print("the area of rectangle is",l*w)
def t():
    b=int(input("enter the base of triangle: "))
    h=int(input("enter the height of triangle: "))
    print("the area of the triangle is",0.5*b*h)
if shape=="c":
    c()
if shape=="s":
    s()
if shape=="r":
    r()
if shape=="t":
    t()
'''

#priting transpose of a matrix
'''
m = [[1, "a"],[2, "b"],[3, "c"]]

mt =[[0, 0, 0],[0, 0, 0]]

for i in range(len(m)):
    for j in range(len(m[0])):
        mt[j][i] = m[i][j]
print(mt)
'''

#printing more problems in one code 
'''S
a,b=5,6
c=a if a%2==0 else b
print(c)
#multiplying every number of a in to b (each number of a multiple with b of number)
[print(a*b) for a in [1,2,3] for b in [10,20,30,]]
#printing the numbers which are equal in 2 lists of numbers or >= to numbers
[print(a) for a in [10,8,5,4] for b in [4,7,5,10] if a>=b]
#print the table by exculding any number which you want and continue the loop
[print(a*7) for a in range(1,11) if (not a*7 == 42)]
#taking the range form the user and printing the number which is divisble by the numbers you want 
n1=int(input())
n2=int(input())
l1=[a for a in range (n1,n2) if (a%2==0 and a%3==0)]
print(l1)
'''

#Basic Functaion code
'''
def add():
    a = int(input("a: "))
    print("sum:",a+5)

print("Before function")
add()
print("After function")
'''

'''
#Adding and subtract using function by using parameter and argument
def add(a):
    print("sum: ",a+5)#in this a,b are parameters
def sub(b):
    print("sum: ",b-5)

a = int(input("a: "))
add(a)#in this a,b are arguments
sub(a)
print("After function")
'''

#Making function for finding area of circle and cylinder by using parameter and argument
'''
def areaci(r):
    print("area of circle: ",3.14*r**2)
def areacy(r,h):
    print("area of cylinder: ",2*3.14*r*h)

r = int(input("r: "))
h = int(input("h: "))
areaci(r)
areacy(r,h)
print("After function")
'''
#printing the str values only once if they are repeated they will be skipped in the and only unquie values will print
'''
n = int(input("n: "))
print(n[0])
l=len(n)
for i in range(1,l):
    flag=0
    for j in range(0,i):
        if n[i] == n[j]:
            flag = 1
            break
    if flag == 0:
        print(n[i])
'''

#In this code we can say that the parameters are upto the function after that it doesn't have any contact with gobal value

'''
def fun1(b):
    b = b+1
    print("b inside fun1: ",b)
a = int(input("Enter a: "))
print("a inside a: ",a)
fun1(a)
print("Value of a after fun1 call",a)
'''

#in this code the changed value form the function is returing to the global variable and we can use the value to another function
'''
def fun1(b):
    b = b+1
    print("b inside fun1: ",b)
    return(b)

def fun2(a):
    print("a times 2:",a*2)

a = int(input("Enter a: "))
print("c inside a: ",a)
c=fun1(a)
print("Value of a after fun1 call",a)
fun2(c)
'''

#if you wnat to cahnge the global variable we use "global" key word for it
''' 
def fun1():
    global a
    a = 6
def fun2():
    a = 7

a = 5
print("value of a before fun1 call",a)
fun1()
print("Value of a after fun1 call",a)
fun2()
print("Value of a before fun2 call",a)
'''

#keyword argumrnts 
#we used keywords so that where you set the value of the b or a it will be assigend a you set.
'''
def sub(a,b):
    print(a-b)

sub(5,4)
sub(a=5,b=4)
sub(b=5,a=4) 
sub(4,5)
'''

'''
def welcome(a,b):
    print(message+" "+name)

name=input("Name: ")
message=input("Message: ")
welcome(message, name)
welcome(b=name,a=message)
'''

#making the user to force only to use key word argument
'''
def fun(*,a,b):
    print(a+b)
a = 2
b = 8
fun(a=a,b=b)
'''

'''
#pascal triangle
def pascaltriangle(row):
    for i in range(0,row):
        c=1
        for j in range(0,i+1):
'''

'''
def sum(* args):
    sum=0
    for i in args:
        sum=sum+i
    print("Sum:" ,sum)

sum(1,2,3)
sum(1,2)
'''

#Printing the largest number Of the given numbers
'''
def find_largest(*numbers):
    largest = numbers[0]
    for num in numbers:
        if num > largest:
            largest = num
    return largest

numbers = [12, 34, 23, 56, 78, 90]
print("The largest number:", find_largest(numbers))
'''


#Another number to print the higest number using the function arrugement
'''
def ln(*n):
    l=len(n)
    num=list(n)
    for i in range(0,l-1):
        if num[i]>num[i+1]:
            num[i+1]=num[i]
    print("largest number:", num[l-1])
ln(12,34,23,56,78,90)
'''

#Using of the function arrugment of lambda function
'''
si=lambda p,r,t:p*r*t/100
p=int(input('p:'))
r=int(input('r:'))
t=int(input('t:'))
print("Sinple Interset:", si(p, r, t))
'''

'''
Max = lambda a, b :a if (a>b) else b
print(Max(1,3))
'''

'''
li=[1,2,3]
def mul(x):
    return(x*2)
result=map(mul,li)
print(list(result))
'''

#using Recursion function
'''
def fac(n):
    if(n==1 or n==0):
        return 1
    else:
        return(n*fac(n-1))
num=int(input("num: "))
if num<0:
    print("No factorial")
else:
    print("Factorial:" ,fac(num))
'''

#Adding two numbers using recursion
'''
def add(a,b):
    if b==0:
        return a
    else:
        return a + add(1, b-1)
print(add(10,5))
'''
#lists
'''
list1=[1,2,3.4,'python']
print("entire:",list1)
print("second index",list1[2])
print("list form 1 to 4",list1[1:4])
list2=['a','b']
print("conc",list1+list2)
print("repetation",list1*3)
list3=list2
print("list:",list3)
list3[0]='c'
print(list2)
print(list3)
'''

#Taking input of list values
'''
n = input("input should be seprated by comma for word to word to enter in list: ")
list1=n.split(',')
print(list1)
print(type(list1))
'''
'''
list1=['a','b','c']
list2=list1
print(list1)
print(list2)
list3=list1.copy()
list1[1]="1"
print(list1)
print(list2)
print(list3)
'''

'''
#some useful inbuilt functions
list1=['a','b','c','h','g','t','z']
print(max(list1))#it print max value of the list 
print(min(list1))#it prints min value of the list
print(len(list1))#it prints length of the list
print("sorted",sorted(list1))#it sroted the list in assending or desending order
del list1[2]#it is used to delete the value in the of the given index
print(list1)
list1.remove('z')#it removes the value of the list of the given value
print(list1)
pop=list1.pop()#it removes the last value of the list
print('pop: ',pop)
list1.clear()#it clears the values of the list but not the entire list
print(list1)
'''

'''
list1=['a','s','h','i','s','h']
list1.append('f')#append is used to add a value at the end of the list as you given
print(list1)
list2=['c','d']
list1.append(list2)
print(list1)#in this output we can see how it is appended
list1.extend(list2)
print(list1)#it enters just the values
list1.insert(2,'1')
print(list1)#it enters the value given at the postion you want
'''


#Dictonary
#in strings tuples lists we use index to print single value
#but for dictonaries we use key to get the value
'''
dict1={"name":"Python","age":5,"address":"Jal"}
print(dict1)
print('Name:',dict1["name"])#it is used to print the keyword value 
'''

#Taking dictonary For the user
#For that
'''
a = input('str1: ')
b = input('str2: ')
list1=a.split(",")
list2=b.split(',')
d1=dict(zip(list1,list2))#Zip is used to combine the lists
print("D1:",d1)
print(type(d1))
'''

#Sets
'''
set1={1,2,"a",4,5}
print(set1)

set2={1,2,3,4,5}
print(set2)

set2.add(5)#it adds an element into the set but one element
print(set2)

set2.update([9,10])#it can add multiple elements
print(set2)

set2.remove(1)#it removes the element which you want
print(set2)

set3=set1.union(set2)#it is combines two sets
print(set3)

set4=set1.intersection(set2)#it prints the common values in both sets
print(set4)

set5={1,2,3,4,5,5,4}
print(set5)#it removes the duplicates
print(len(set5))#the len of the set also will be after removing the duplicates

print(set4.isdisjoint(set5))#checks weather it is disjoint or not

print(set4.issubset(set5))#checks weaather it is subset or not
'''

#lists comprehension 
'''
print([i for i in range(1,12)])
print([i*2 for i in range(1,12)])
print([i**2 for i in range(1,12) if i%2==0])
print([a for a in [1,2,3,4] for b in [2,4,6] if a==b])
'''
#set comprehension
'''
print({i for i in range(1,11)})
print({i*2 for i in range(1,12)})
print({i**2 for i in range(1,12) if i%2==0})
print({a for a in [1,2,3,4] for b in [2,4,6] if a==b})
'''
#dictonary comprehension
'''
dict1={i:i*2 for i in range(0,3)}
print(dict1)

list1=[1,2,3]
print(list(enumerate(list1)))

list2=[1,2,3]
dict2={key:value for key, value in enumerate(list2)}

dict3={k:"python" for k in "name"}
print(dict3)
'''

#Classes...!
'''
class car:
    pass

c1=car()
c2=car()
c3=car()
name1=input("name: ")
c1.name=name1
c1.brand="Hyndai"
c2.name="limbo"
c2.brand="madara"
c3.name="swift"
c3.brand="maruti"
print("Name of C1 is:",c1.name)
print("Name of C2 is:",c2.name)
print("Name of C3 is:",c3.name)
'''

'''
class stundent:
    pass
s1=stundent()
s2=stundent()
s1.name="sachin"
s1.num=123
s2.name="Rahul"
s2.num=5789
print("s1 name is:",s2.name)
'''

#Set a class name of vehicle getdata of 3 values(name,model,color) take input from user Take 3 differet vehicles as parameters And use printdata to print them...!
'''
class vehicle:
    def setdetails(self,name,model,color):
        self.name=name
        self.model=model
        self.color=color
    def getdetails(self):
        print("Name of vehicle:",self.name)
        print('Model of the vehicle:',self.model)
        print('Color of the vehicle',self.color)
Car=vehicle()
Bus=vehicle()
Bike=vehicle()
a = input("Enter The Car name: ")
b = input('Enter the Car model: ')
c = input("Enter the Car color: ")
d = input("Enter The Bus name: ")
e = input('Enter the Bus model: ')
f = input("Enter the Bus color: ")
g = input("Enter The Bike name: ")
h = input('Enter the Bike model: ')
i = input("Enter the Bike color: ")
Car.setdetails(a,b,c)
Bus.setdetails(d,e,f)
Bike.setdetails(g,h,i)
Car.getdetails()
Bike.getdetails()
Bus.getdetails()
'''

#inhertance of a class
'''
class vehicle: #vehile is a base class
    def setdetails(self,name,model):
        self.name=name
        self.model=model
    def getdetails(self):
        print("Name of vehicle:",self.name)
        print('Model of the vehicle:',self.model)

class bus(vehicle): #the bus is a devired class of base class of name vehicle
    def setbus(self,color):
        self.color=color
    def getbus(self):
        print('Color of the bus',self.color)

b1 = bus()
b1.setdetails("Volovo","X11")
b1.setbus("blue")
b1.getdetails()
b1.getbus()
'''

'''
class A:
    def setname(self,name):
        self.name=name;
    def getname(self):
        print("Name of A:",self.name)
class B:
    def setage(self,age):
        self.age=age
    def getage(self):
        print('Age of B:',self.age)
class C(A,B):
    def setaddress(self,address):
        self.address=address
    def getaddress(self):
        print("Address of C:",self.address)

a=input('Enter name: ')
b=int(input('Enter age: '))
c=input('Enter Address: ')
A1=A()
B1=B()
C1 = C()
A1.setname(a)
B1.setage(b)
C1.setname(a)
C1.setage(b)
C1.setaddress(c)
C1.getname()
C1.getage()
C1.getaddress()
'''

'''
f = open('data.txt',"r")
print(f.readline())
print(f.readlines())

f = open('data.text','r')
print(f.read(3))#it will read first 3 letters 
print(f.read(3))#it will read after first 3 letters


f = open('data.txt','r+')
print(f.tell())
f.write('Hello')
print(f.tell())#tell is used to tell the postion of the pointer
'''

'''
f = open('data.txt','r+')
f.write('Hello')
print(f.tell())
f.seek(3) # it is used to move the pointers position
print(f.tell())


f = open('data.txt','r+')
print(f.read(5))
f.seek(2)
print('123')
f.seek(0)
f.read(5)
print(f.tell())


f = open('data.txt','r+')
n = int(input('Enter the stating: '))
m = int(input('Enter the length: '))
f.seek(n)
print(f.read(m))
'''

'''
f = open('data.txt','r+')
m = int(input('Enter the line number: '))
print(f.readlines(m))
'''

'''
class triangle:
    def set_sides(self,side1,side2,side3):
        self.a=side1*side2*side3
    def get_sidea(self):
        print(self.a)

ob = triangle()
ob.set_sides(2,3,4)
ob.get_sidea()
'''

'''
class Maruthi:
    def setdetails(self,name,price):
        self.name = name
        self.price = price
    def getdetails(self):
        print('Name:',self.name)
        print('Price:',self.price)

class sedan:
    def set_details(self,name,price):
        self.name = name
        self.price = price
    def get_details(self):
        print('name:',self.name)
        print('price:',self.price)

m1=Maruthi()
s1=sedan()
m1.setdetails("maruthi","10 Lakhs")
s1.set_details("sedan", "6 Lakhs")
m1.getdetails()
s1.get_details()
'''

'''
class MyClass:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def swap(self):
        temp = self.a
        self.a = self.b
        self.b = temp
    def getdet(self):
        print(self.a,self.b)

ob1 = MyClass(1, 2)
ob1.swap()
ob1.getdet()
'''

#Finding the leep year using dividble factors
'''
def is_leap(year):
    leap = False
    
    if year % 4 == 0:
        leap = True
        
        if year % 100 == 0:
            leap = False

            if year % 400 == 0:
                leap = True
                
    return leap
year = int(input())
print(is_leap(year))
'''

#execptions
'''
a=5
b=0
try:
    print(a/b)
except Exception as e:
    print('b should not be  zero 0,', e)
finally:
    print('last line')
'''

'''
class BalanceException(Exception):
    pass
def checkBalance():
    money=int(input('Enter the money: '))
    withdraw=int(input('Enter the amount: '))
    try:
        bal=money-withdraw
        if (bal<2000):
            raise BalanceException('insuffient Balance')
        print(bal)
    except BalanceException as e:
        print(e)
checkBalance()
'''



