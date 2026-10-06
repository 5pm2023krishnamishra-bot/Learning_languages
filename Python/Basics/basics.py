# print("hello world") --  print function 
print("my name is krishna ")
print(23)
# A variable is a name given to a memory location in program 
# <variable = value>
# ex- name="krishna" , age = 19, price = 1.43
name = "Krishna"
age = 19
bmi = 4.3
print("age")
print(age)
print("My name is ",name)
print("my age is ",age)
# type gives output of datatypes of variables
print(type(name))
print(type(age))
print(type(bmi))
# Datatypes
# Integers - can be +ve,-ve,0 (int)
# Strings -  "hello" , 'krishna',it can be closed btw single , double or triple affestrophy .
# Float - decimal values
# Boolean - true/false
# none - 
old=False
a=None
print(type(old))
print(type(a))
# Keywords are reserved words are in python , they can't be used as identifiers.
# Operators - an operator is a symbol that performs a certain operation btw operands.
# Arithmetic operators - (+,-,*,/,%,**)
a=2
b=4
print(a+b)
print(a**b)
print(b%a)
# relational operators - (==,!=,>,<,>=,<=)
print (a==b)
print(a!=b)
print(a>b)
# assignment operators - (=,+=,-=,*=,/=,%=,**=)
# logical operators - (not,and,or)
print(not False)
print(not True)
print(True and False)
print (True or False)
# Type conversion - which interpreter does automaticaly.
inta=2
intb=4.5
sum=inta+intb
print(sum)
# Type casting - which is done by programer.
# intc="2" 
# print(inta+intc) , python will give error here because int can't be added to string so , for this we'll do typecasting 
intc=int("2")
print(inta+intc)
# Input statements
name1 = input("enter your name : ")
print("welcome ",name1) # it'll always be a str by default
print(type(name1))
age1=int(input("enter your age : ")) # now it'll take the specified datatype only , on entering other datatype python will give error. 
print("age = ",age1)
print(type(age1))