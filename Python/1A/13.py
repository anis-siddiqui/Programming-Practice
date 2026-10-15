# 1. Write a program to create and write data into a text file.

# SOLUTION
# with open("Hello.txt" , "w") as f:
#     data = input("Write data in your file: ")
#     f.write(data)
# END SOLUTION



# 2. Write a program to read data from a text file.

# SOLUTION
# with open("Hello.txt" , "r") as f:
#     print(f.read())
# END SOLUTION



# 3. Write a program to append data to a file.

# SOLUTION
# with open("Hello.txt" , "a") as f:
#     info = input("Write in your file: ")
#     f.write(info)
#     f.write("\n")
# END SOLUTION



# 4. Write a program to count number of lines in a file.

# SOLUTION
# with open("Hello.txt" , "r") as f:
#     count = 0
#     for i in f:
#         count += 1
#     print("Lines:", count)
# END SOLUTION



# 5. Write a program to handle division by zero exception.

# SOLUTION
# a = int(input("Enter first number: "))
# b = int(input("Enter second number: "))
# try:
#     print("Division:", a/b)
# except Exception as err:
#     print("Error:", err)
# END SOLUTION



# 6. Write a program using try-except-finally.

# SOLUTION
# a = int(input("Enter first number: "))
# b = int(input("Enter second number: "))
# try:
#     print("Division:", a/b)
# except Exception as err:
#     print("Error:", err)
# finally:
#     print("Sum:", a+b)
# END SOLUTION



# 7. Write a program to create a custom exception.

# SOLUTION
# age = int(input("Enter your age: "))
# if age < 0 or age > 120:
#     raise TypeError("Invalid age!!") 
# else:
#     print("Valid age")
# END SOLUTION 