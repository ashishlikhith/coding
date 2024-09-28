#for and while loop
#for loop

# s1=input('str1: ')
# print("input Str1:",s1)
# l=len(s1)
# for i in range(0,l//2):
#     print('value:',s1[i])



# str1=input('Enter: ')
# str2=input('A single letter: ')
# for i in str1:
#     if i==str2:
#         print('yes',i)
#         break

# str1=input('Enter: ')
# str2=input('A single letter: ')
# flag=0
# for i in str1:
#     if i==str2:
#         flag=1
#         break
# if flag==0:
#     print('no')
# else:
#     print('yes')


# str1=input('Enter: ')
# str2=input('A single letter: ')
# flag=0
# for i in str1:
#     if i==str2:
#         flag=1
        
# if flag==0:
#     print('no')
# else:
#     print('yes')


# str1=input('Enter: ') 
# str2=input('A single letter: ')
# for i in str1:
#     if i==str2:
#         a=str1.count(str2)
# print(a)




# txt = "The best things in life are free!"
# print("free" in txt)
# a = " Hello, World! "
# print(a.strip())
# a = "Hello, World!"
# print(a.replace("H", "J")) 

#string builtin functions
'''
a= 'AshisH'
print(a.capitalize()) #coverts first letter to capital
print(a.casefold()) #converts string to lower case
print(a.count()) #count the number of charather
print(a.encode()) #an endcode version of string
print(a.endswith('H')) #specify the last letter if the str
print(a.expandtabs()) #sets the size of the tab
print(a.find('H')) #Used to find a charather in the str
print(a.isalnum()) #returns true if all the str is alphanumeric
print(a.isalpha()) #returns true if it has alphabetit 
print(a.isdigit()) #returns true if it has a digit
print(a.islower()) #change the letters to lower 
print(a.isnumeric()) #returus true if it has a numeric value
print(a.isupper()) #changes to upper case
print(a.join('Hello')) #to the given string it join's the take string
print(a.format()) #formats specified values in a string
print(a.format_map()) #"            "           "
print(a.index('H')) #
print(a.isascii())
print(a.isidentifier())
print(a.marketrans())
print(a.sprit()) #removes the white spaces of the string
'''

#Boolen Values
#these are the only values which give boolen false
'''
print(bool(False))
print(bool(None))
print(bool(0))
print(bool(""))
print(bool(()))
print(bool([]))
print(bool({}))

#isinstance is a fun which is used to check the type which returns in true or false
x = 200
print(isinstance(x, int))
'''


#Operaters
'''
a=3
b=2
print(a+b) #add
print(a-b) #sub
print(a*b) #mul
print(a/b) #div
print(a%b) #modulas
print(a**b) #exp
print(a//b) #floor div
'''

#printing triangle
'''
a=int(input('enter a number: '))
for i in range(1,a+1):
    for j in range(1,i+1):
        print('*',end=' ')
    print()
'''
#printing triangle with stars
'''
n=int(input('n: '))
for i in range(1,n+1):                     #output
    for j in range(1,n+1):                 # * 
        if j==1 or i==n or i==j:           # * *
            print('*',end=" ")             # *   * 
        else:                              # *     *
            print(' ',end=' ')             # * * * * * 
    print()
'''

#printing trinigle with stars using for loop in mirror view
'''
n=int(input('n: '))
for i in range(1,n+1):
    for j in range(1,n+1):
        if j==n or i==n or j==(n-(i-1)):
            print('*',end=" ")
        else:
            print(' ',end=' ')
    print()
'''


#class
# class virus:
#     def __init__(self,name):
#         self.name=name
#     def display(self):
#         print('name:',self.name)
# class living(virus):
#     pass


'''
n = int(input())
if n % 2 == 1:
    print("Weird")
elif n % 2 == 1 and n >= 2 and n <= 5:
    print("Not Weird")
elif n % 2 == 1 and n >= 6 and n <= 20:
    print("Weird")
elif n % 2 == 1 and n > 20:
    print("Not Weird")
else:
    print('complete')
'''

'''
class ReverseString:
   def __init__(self, string):
       self.string = string

   def reverse(self):
       return self.string[::-1]


if __name__ == "__main__":
   string = input("Enter a string: ")
   reverse_string = ReverseString(string)
   print(reverse_string.reverse())
'''

'''
def sum_n_numbers(n):
    total = 0
    for i in range(1, n + 1):
        total += i
    return total

# Input
n = int(input("N: "))

# Output
result = sum_n_numbers(n)
print(result)
'''

'''
class Solution:    
    #Complete this function
    def __init__(self,N):
        self.n=N
    def printsol(self):
        for i in range(self.n+1):
            print(i,end=" ")
n=int(input())
num = Solution(n)
num.printsol()
'''

#Taking 2 input in a same line
'''
n,m = [int(i) for i in input().split()]
if m>n:
    print('YES')
else:
    print('NO')
'''

#Checking the age and marks for qualifiying a govt exam
'''
T = int(input())
for i in range(T):
    X,Y,A = [int(j) for j in input().split()]
    if X>=20 and Y<=40 and A<=50:
        print('YES')
    else:
        print('NO')
'''

# there are 3 fun for finding search(tells where to where it is and prints 1st code), 
# findall(prints all which matchs the pattern) 
# sub(which replaces the word we want by giving three parameters)
'''
import re
pattern = r"[6-9][0-9]{9}"
string="Welcome, 6309441639 Ashish 8328586208 Rama Rao 1234567890"
phones=re.search(pattern,string)
print(phones)
print(string)
'''

'''
A=input("Enter: ")
b=12
a=float(A)
print(a+b)

a=input('Enter: ')
for i in a:
    print(i,end="")
'''

'''
a="Ashish"
print(list(a))
'''

#Given string "Hello World", write a program to remove 'o' from the given string using python programming.
'''
a="Hello World!"
print(a[0:4]+a[5::])
'''
#"\" is used to break the line but gives the same result
'''
sum=1+2+3+\
5
print(sum)
'''

#swaping of nmbers
'''
x=1
y=2
temp=x
x=y
y=temp
print(x, y)
'''
#OR
'''
x,y=1,2
x,y=y,x
print(x, y)
'''

# a=5.4355
# print(round(a,2))

'''
import math
a=0
print(math.sin(a))
'''

#ord is function which represent letters in numbers starts from captial letter is 65 and small letter is 97
'''
letter = 'A',
print(ord(letter))
'''

#for printing words in reversed order 
'''
a= "Ashish"
print(a[::-1])
print(''.join(reversed(a))) #it is an inbuilt function used to return the function
'''

'''
a = "\t Welcome \n"
print(a)
print(a.strip())
'''

#taking the input ASCII number and printing the letter
'''
n =  input('Enter a ASCII code: ')
print(chr(int(n)))
'''

#printing prime numbers
'''
a = int(input("Enter the first number: "))
b = int(input("Enter the last number: "))
for i in range(a,b):
    if (i % 2 == 1):
        print(i)
'''

'''
list1=['a','b','c']
del list1[1]
print(list1)
'''

'''
a = open('data.txt','r')
print(a.read(7))
print(a.readline()) #it prints first line after the read mode
'''
# os is used to remove or rename or more things to do in files
'''
import os
os.rename('data.txt','data1.txt')
os.remove('data.txt')
'''

'''
def function(a,b):
    if a == b:
        print('They are equal')
    else:
        print('They are not equal')
a=int(input('Enter 1st num: '))
b=int(input('Enter 2nd num: '))
print(function(a,b))
'''

'''
a=int(input())
b=int(input())
for i in range(a,b):
    if(i%2==1):
        print(i)
'''


'''
class InventoryItem:
    def _init_(self, item_name, initial_quantity, price_per_unit):
        self.__item_name = item_name
        self.__quantity = initial_quantity
        self.__price_per_unit = price_per_unit

    def get_name(self):
        return self.__item_name

    def get_quantity(self):
        return self.__quantity

    def get_price(self):
        return self.__price_per_unit

    def update_quantity(self, update_quantity):
        if update_quantity > 0:
            self.__quantity += update_quantity
        else:
            print("Insufficient quantity")


item_name = input()
initial_quantity = int(input())
price_per_unit = float(input())
update_quantity = int(input())

item = InventoryItem(item_name, initial_quantity, price_per_unit)

print(item.get_name())
print(item.get_quantity())
print(item.get_price())

item.update_quantity(update_quantity)
print(item.get_quantity())
'''

a = input('Enter num: ').split(',')
l=[]
for i in len(a):
    b = int(i)
    l.append(b)
 