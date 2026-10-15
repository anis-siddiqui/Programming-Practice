a = int(input("Enter first number : "))
b = int(input("Enter second number : "))
c = int(input("Enter third number : "))

if(a > b and c):
    print(f"{a} is greater than {b} and {c}")
elif(b > c and a):
    print(f"{b} is greater than {c} and {a}")
else :
    print(f"{c} is greater than {a} and {b}")