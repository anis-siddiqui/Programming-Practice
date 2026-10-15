# 1. Write a program to check whether a number is even or odd.

# SOLUTION 
# num = int(input("Enter a number: "))
# if(num%2 == 0):
#     print("Even number!")
# else:
#     print("Odd number")
# END SOLUTION


# 2. Write a program to check whether a number is positive, negative, or zero.

# SOLUTION 
# num = float(input("Enter a number: "))
# if(num>0):
#     print("Positive number!")
# elif(num<0):
#     print("Negative number!")
# else:
#     print("Zero!")
# END SOLUTION


# 3. Write a program to find the greatest of two numbers.

# SOLUTION 
# num1 = float(input("Enter first number: "))
# num2 = float(input("Enter second number: "))
# if(num1>num2):
#     print("First number is greatest!")
# elif(num2>num1):
#     print("Second number is greatest!")
# else:
#     print("Both numbers are equal!")
# END SOLUTION


# 4. Write a program to find the greatest of three numbers.

# SOLUTION 
# num1 = float(input("Enter first number: "))
# num2 = float(input("Enter second number: "))
# num3 = float(input("Enter third number: "))
# if(num1>num2 and num1>num3):
#     print("First number is greatest!")
# elif(num2>num3 and num2>num1):
#     print("Second number is greatest!")
# elif(num3>num1 and num3>num2):
#     print("Third number is greatest!")
# else:
#     print("All three numbers are equal!")
# END SOLUTION


# 5. Write a program to check whether a year is a leap year.

# SOLUTION 
# year = int(input("Enter a year: "))
# if(year%100 == 0):
#     if(year%400 == 0):
#         print("Leap year!")
#     else:
#         print("Not aleap year!")
# elif(year%4 == 0):
#     print("Leap year!")
# else:
#     print("Not a leap year!")
# END SOLUTION


# 6. Write a program to check whether a number is divisible by 5 and 11.

# SOLUTION 
# num = int(input("Enter a number: "))
# if(num%5 == 0 and num%11 == 0):
#     print("Number is divisible by 5 and 11")
# else:
#     print("Number is not divisible by 5 and 11")
# END SOLUTION


# 7. Write a program to check pass or fail using marks.

# SOLUTION 
# marks = int(input("Enter a number: "))
# if(marks<0 or marks>100):
#     print("Invalid marks!!")
# elif(marks>33):
#     print("Pass!")
# else:
#     print("Fail!")
# END SOLUTION


# 8. Write a program to display grade using marks.

# SOLUTION 
# marks = int(input("Enter your marks: "))
# if(marks>100 or marks<0):
#     print("Invalid marks!")
# elif(marks>90):
#     print("Grade: A+")
# elif(marks>75):
#     print("Grade: A")
# elif(marks>65):
#     print("Grade: B")
# elif(marks>55):
#     print("Grade: C")
# elif(marks>45):
#     print("Grade: D")
# elif(marks>33):
#     print("Grade: E")
# else:
#     print("Grade: F")
# END SOLUTION


# 9. Write a program to check whether a character is a vowel or consonant.

# SOLUTION 
# char = input("Enter a char: ")
# if(char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u'):
#     print("Vowel!")
# else:
#     print("Consonant!")
# END SOLUTION


# 10. Write a program to create a simple calculator using if-elif.

# SOLUTION 
# ope = input("Enter a operation('+','-','*','/'): ")
# num1 = int(input("Enter first number: "))
# num2 = int(input("Enter second number: "))
# if(ope == '+'):
#     print("Answer:", num1+num2)
# elif(ope == '-'):
#     print("Answer:", num1-num2)
# elif(ope == '*'):
#     print("Answer:", num1*num2)
# elif(ope == '/'):
#     print("Answer:", num1/num2)
# else:
#     print("Invalid operation!!")
# END SOLUTION