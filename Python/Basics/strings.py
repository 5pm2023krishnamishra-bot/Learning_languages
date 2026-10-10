str1="this is a string"
str2='krishna'
str3="""GNIOT"""
# these all 3 strings are valid 
# ESCAPE SEQUENCE CHARACTERS.
str4="this is a stirng .\nwe're creating in python."#for moving in next line we use '\n'.
print(str4) 
str5="this is a stirng .\twe're creating in python."# \t gives a tab gap between lines.
print(str5)
# Basics operations on strings.
# 1- Concatation(addition)
str6=str1+str3
print(str6)
# 2- Length of string syntax <len(str)> 
print(len(str1))
# INDEXING-starts with 0.
print(str1[0])#index of strings can't be modified !!
# indexing can also be -ve ,is starts with -1 at last character and decreases by 1 on every letter preeceding
print(str3[-4])
# SLICING - accessing parts of strings.
# syntax - <str[starting_index:ending_index]> (ending index is not included)
print(str3[1:4])
print(str3[:4])#str[:n] is same as str[0:n]
print(str3[1:])#str[n:] is same as str[n:len]
# STRING FUNCTIONS 
# 1- str.endswith("er.") returns true if string ends with substr.
print(str3.endswith("T"))
# 2- str.capitalize() - capitalizes 1st character.
print(str2.capitalize())
# 3- str.replace(old,new) - replaces all occurences of old with new .
old="a"
new="an"
str7=str4.replace(old,new)
print(str7)
# 4- str.find(word) - retuns 1st index of 1st occurrence .
str8='python'
print(str4.find(str8))
# 5- str.count("substr") - count the occurence of substring.
print(str4.count("in")) 