# Separate each digit of a number and print on a new line.

# num = int(input("Enter anumber: "))
# num2 = num
# while(num2 != 0):
#     print(num2%10)
#     num2 = num2//10


# Accept a number and print its reverse.

# num = int(input("Enter a number: "))
# num2 = num
# rev = 0
# while(num2 != 0):
#     rev = rev*10 + num2%10
#     num2 = num2//10
# print("Reverse:", rev)


# Check if a number is palindromic (equal to its reverse).

# num = int(input("Enter a number: "))
# num2 = num
# rev = 0
# while(num2 != 0):
#     rev = rev*10 + num2%10
#     num2 = num2//10
# if(rev == num):
#     print("Palindrome")
# else:
#     print("Not palindrome")


# Build a number guessing game — computer picks a random number, user keeps guessing until correct.

# import random
# num = random.randint(1,100)
# guess = -1
# tries = 0
# while(guess != num):
#     guess = int(input("Guess a number: "))
#     if(guess > num):
#         print("High")
#     elif(guess < num):
#         print("Low")
#     else:
#         print("Correct guess!" , guess)
#     tries += 1 
# print(f"Guessed in {tries} tries.")