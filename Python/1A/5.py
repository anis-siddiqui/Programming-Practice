# 1. Write a function to add two numbers.

# SOLUTION
# def sum(a,b):
#     return a+b
# print(sum(7,18))
# print(sum(123,23432))
# END SOLUTION


# 2. Write a function to check whether a number is even or odd.

# SOLUTION
# def even_or_odd(a):
#     return "Even" if a%2==0 else "Odd"
# print(even_or_odd(9))
# print(even_or_odd(19))
# print(even_or_odd(24))
# END SOLUTION


# 3. Write a function to find factorial of a number.

# SOLUTION
# def factorial(a):
#     if(a == 1):
#         return 1
#     return a*factorial(a-1)
# print(factorial(7))
# END SOLUTION


# 4. Write a function to check whether a number is prime.

# SOLUTION
# def prime(a):
#     for i in range(2,a):
#         if(a%i==0):
#             print("Not Prime")
#             break
#     else:
#         print("Prime")
# prime(7)
# prime(8)
# END SOLUTION


# 5. Write a function to return the maximum of two numbers.

# SOLUTION
# def max(a,b):
#     return a if a>b else b
# print(max(44,46))
# print(max(49,46))
# END SOLUTION


# 6. Write a function to reverse a string.

# SOLUTION
# def rev(a):
#     rev = ""
#     for i in range(len(a)-1,-1,-1):
#         rev += a[i]
#     return rev
# print(rev("Hello"))
# END SOLUTION


# 7. Write a function with default parameters.

# SOLUTION
# def fun(a = 0 , b = 0 , c = 0 , d = 0):
#     return a+b+c+d
# print(fun(100))
# END SOLUTION


# 8. Write a function to count vowels in a string.

# SOLUTION
# def vowel(a):
#     count = 0
#     for i in a:
#         if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u'):
#             count += 1
#     return count
# print(vowel("Hello World!"))
# END SOLUTION


# 9. Write a function to calculate area of a circle.

# SOLUTION
# def area(r):
#     return 3.14*r*r
# print(area(5))
# END SOLUTION


# 10. Write a function that returns multiple values.

# SOLUTION
# def ret():
#     return 5,10,14,123
# a,b,c,d = ret()
# print(a)
# print(b)
# print(c)
# print(d)
# END SOLUTION
