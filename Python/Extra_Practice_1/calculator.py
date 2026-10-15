a = input("aap caculate karna chahte hai (yes/no) :")
while a == "yes" :
    a = int(input("Enter first number : "))
    b = int(input("Enter second number : "))
    operation = input("What you want to do with these numbers ('+','-','*','/') : ")

    if (operation == "+") :
        print("result =" , a+b)
    elif (operation == "-") :
        print("result =" , a-b)
    elif (operation == "*") :
        print("result =" , a*b)
    elif (operation == "/") :
        if b != 0 :
            print("result =" , a/b)
        else :
            print("cannot divide by 0")
    else :
        print("invalid option")
    a = input("aap caculate karna chahte hai (yes/no) :")        