# 1.Write a program to print Hello World.

# SOLUTION
# print("Hello World!!")
# END SOLUTION



# 2. Write a program to take user name as input and print a welcome message.

# SOLUTION
# name = input("Enter your name: ")
# print("Welcome,", name)
# END SOLUTION



# 3. Write a program to input two numbers and print their sum.

# SOLUTION
# num1 = int(input("Enter first number: "))
# num2 = int(input("Enter second number: "))
# sum = num1+num2
# print(f"Sum = {sum}")
# END SOLUTION



# 4. Write a program to check the data type of user input.

# SOLUTION
# a = eval(input("Enter anything: "))
# print("Data type", type(a))
# END SOLUTION



# 5. Write a program to convert string input into integer.

# SOLUTION 1
# a = int(input("Enter a number: "))
# print(type(a))
# END SOLUTION


# SOLUTION 2
# a = input("Enter a number: ")
# a = int(a)
# print(type(a))
# END SOLUTION


# 6. Write a program to swap two variables.

# SOLUTION
# num1 = int(input("Enter first number: "))
# num2 = int(input("Enter second number: "))
# print(f"Before swapping : num1 = {num1} num2 = {num2}")
# temp = num1 
# num1 = num2 
# num2 = temp
# print(f"After swapping : num1 = {num1} num2 = {num2}")
# END SOLUTION

# SOLUTION
# a = int(input("Enter first number: "))
# b = int(input("Enter second number: "))
# a,b = b,a 
# print("a=", a)
# print("b=", b)
# END SOLUTION


# 7. Write a program to calculate simple interest.

# SOLUTION
# principal = float(input("Enter principal amount: "))
# rate = float(input("Enter rate: "))
# time = float(input("Enter time: "))
# s_i = (principal*rate*time)/100
# print("Simple interest =", s_i)
# END SOLUTION



# 8. Write a program to convert Celsius to Fahrenheit.

# SOLUTION
# celcius = float(input("Enter temperature in Celcius: "))
# fahrenheit = (celcius*(9/5))+32
# print("Temperature in Fahrenheit =", fahrenheit)
# END SOLUTION



# 9. Write a program to take boolean input and print its opposite value.

# SOLUTION 1 
# a = input("Enter True or False: ") == "True"
# print("Opposite:", not a)
# END SOLUTION

# SOLUTION 2 
# a = eval(input("Enter True or False: "))
# print("Opposite:", not a)
# END SOLUTION



# 10. Write a program to take multiple inputs in a single line.

# SOLUTION
# a,b,c,d = input("Enter four words: ").split()
# print(a)
# print(b)
# print(c)
# print(d)
# END SOLUTION


