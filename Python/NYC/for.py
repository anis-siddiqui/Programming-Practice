# Print "Hello World" n times.

# n = int(input("Enter a number: "))
# for i in range(n):
#     print("Hello World")


# Print natural numbers from 1 to n.

# n = int(input("Enter a number: "))
# for i in range(1, n+1):
#     print(i)


# Reverse for loop — print n down to 1.j

# n = int(input("Enter a number: "))
# for i in range(n,0,-1):
#     print(i)


# Print the multiplication table of a number.

# n = int(input("Enter a number: "))
# for i in range(1,11):
#     print(n*i)


# Sum of first n natural numbers.

# n = int(input("Enter a number: "))
# sum = 0 
# for i in range(1,n+1):
#     sum += i
# print(f"Sum of {n} natural numbers = {sum}")


# Factorial of a number.

# n = int(input("Enter a number: "))
# fac = 1
# for i in range(1,n+1):
#     fac *= i
# print(f"Factorial of {n} = {fac}")


# Print sum of all even and odd numbers in a range separately.

# start = int(input("Enter starting range: "))
# end = int(input("Enter ending point: "))
# even_sum = 0
# odd_sum = 0
# for i in range(start, end+1):
#     if(i%2 == 0):
#         even_sum += i
#     else:
#         odd_sum += i
# print(f"Even sum = {even_sum}, Odd sum = {odd_sum}")


# Print all factors of a number.

# num = int(input("Enter a number: "))
# print("Factors =", end=" ")
# for i in range(1, num+1):
#     if(num%i == 0):
#         print(i, end=" ")


# Check if a number is perfect (sum of factors = the number itself).

# num = int(input("Enter a number: "))
# sum = 0
# for i in range(1,num):
#     if(num%i == 0):
#         sum += i
# if(sum == num):
#     print("Perfect number.")
# else:
#     print("Not a perfect number.")


# Check if a number is prime.

# num = int(input("Enter a number: "))
# for i in range(2,num):
#     if(num%i==0):
#         print("Not a prime number.")
#         break
# else:
#     print("Prime number.")

# 2nd method -> java, c, c++(where no for-else available)
# num = int(input("Enter a number: "))
# prime = True
# for i in range(2,num):
#     if(num%i == 0):
#         prime = False
# if(prime):
#     print("Prime number.")
# else:
#     print("Not a prime number.")


# Reverse a string without using built-in functions.

# word = input("Enter a word: ")
# for i in range((len(word))-1, -1, -1):
#     print(word[i], end="") 


# Check if a string is a palindrome.

# word = input("Enter a word: ")
# rev = ""
# for i in range((len(word))-1, -1, -1):
#     rev += word[i]
# if(word == rev):
#     print("Palindrome")
# else:
#     print("Not palindrome")


# Count letters, digits, and special symbols in a string.

# word = input("Enter a word: ")
# char = 0
# symbol = 0
# num = 0
# for i in range(0,len(word)):
#     word2 = ord(word[i])
#     if(word2 >= 48 and word2 <= 57):
#         num += 1
#     elif((word2 >= 65 and word2 <= 90) or (word2 >= 97 and word2 <= 122)):
#         char += 1
#     else:
#         symbol += 1
# print(f"Numbers: {num} Characters: {char} Symbols: {symbol}")