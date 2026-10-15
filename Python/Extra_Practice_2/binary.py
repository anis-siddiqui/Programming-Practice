a = input("Enter a word or sentence :- ")
b = bytearray(a , "utf-8")
for i in range(0,len(a)):
    print(a[i] , ":-" , b[i]) 