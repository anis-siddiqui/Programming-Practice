# 1. Write a program to print numbers from 1 to 10.

# SOLUTION 
# for i in range(1,11):
#     print(i)
# END SOLUTION


# 2. Write a program to print even numbers between 1 and 50.

# SOLUTION 
# for i in range(2,51,2):
#     print(i)
# END SOLUTION


# 3. Write a program to print odd numbers using while loop.

# SOLUTION 
# i = 1
# while(i!=50):
#     if(i%2!=0):
#         print(i)
#     i+=1
# END SOLUTION


# 4. Write a program to print multiplication table of a number.

# SOLUTION 
# num = int(input("Enter a number: "))
# for i in range(1,11):
#     print(num*i)
# END SOLUTION


# 5. Write a program to find the sum of first n natural numbers.

# SOLUTION 
# num = int(input("Enter a number: "))
# i = 1
# sum = 0
# while(i != num+1):
#     sum = sum + i 
#     i += 1
# print("Sum=", sum)
# END SOLUTION


# 6. Write a program to find factorial of a number.

# SOLUTION 
# num = int(input("Enter a number: "))
# fac = 1
# for i in range(1,num+1):
#     fac = fac*i
# print("Factorial =", fac)
# END SOLUTION


# 7. Write a program to reverse a number.

# SOLUTION 
# num = int(input("Enter a number: "))
# num2 = num
# rev = 0
# while(num2 != 0):
#     rev = rev*10 + num2%10
#     num2 = num2//10
# print("Reverse =", rev)
# END SOLUTION


# 8. Write a program to count digits in a number.

# SOLUTION 
# num = int(input("Enter a number: "))
# num2 = num
# count = 0
# while(num2 != 0):
#     num2 = num2//10
#     count += 1
# print("Digits =", count)
# END SOLUTION


# 9. Write a program to print Fibonacci series.

# SOLUTION 
first = 0
second = 1
print(first)
print(second)
i = 0
while(i<10):
    fbnc = first + second
    print(fbnc)
    first = second
    second = fbnc
    i+=1
# END SOLUTION


# 10. Write a program to check whether a number is prime.

# SOLUTION 
# num = int(input("Enter a number: "))
# for i in range(2,num):
#     if(num%i==0):
#         print("Not prime!")
#         break
# else:
#     print("Prime!")
# END SOLUTION


# 11. Write a program to print numbers using range().

# SOLUTION 
# for i in range(1,11):
#     print(i)
# END SOLUTION


# 12. Write a program to find the sum of digits of a number.

# SOLUTION 
# num = int(input("Enter a number: "))
# num2 = num
# sum = 0
# while(num2!=0):
#     sum = sum + num2%10
#     num2 = num2//10
# print("Sum=", sum)
# END SOLUTION


# 13. Write a program to print square of numbers from 1 to n.

# SOLUTION 
# num = int(input("Enter a number: "))
# for i in range(1,num+1):
#     print(i**2)
# END SOLUTION


# 14. Write a program to find power of a number.

# SOLUTION 
# num = int(input("Enter a number: "))
# power = int(input("Enter power: "))
# num2 = 1
# for i in range(1,power+1):
#     num2 = num2*num
# print("Answer=", num2)
# END SOLUTION


# 15. Write a program to count vowels in a string.

# SOLUTION 
# string = input("Enter a string: ")
# count = 0
# for i in range(0,len(string)):
#     if(string[i] == 'a' or string[i] == 'e' or string[i] == 'i' or string[i] == 'o' or string[i] == 'u'):
#         count += 1
# print("Vowels=", count)
# END SOLUTION


