# l = [1,2,3,4,5]
# r = int(input("Enter number of rotation: "))
# for i in range(0,r):
#     temp = l[0]
#     for j in range(0,len(l)):
#         if(j==len(l)-1):
#             l[0] = temp
#             temp = 0
#         else:
#             temp2 = l[j+1]
#             l[j+1] = temp
#             temp = temp2
# print(l)


# num = int(input("Enter a number: "))
# final = num
# final = 0
# while(final>0):
#     final = final+final%10
#     final=final//10
# if(num%final == 0):
#     print("Yes")
# else:
#     print("No")


# num = int(input("Enter a number: "))
# final = num
# while(final>9):
#     sum = 0
#     while(final>0):
#         sum+=final%10
#         final//=10
#     final = sum
# if(final== 1):
#     print("Magic Number!!")
# else:
#     print("Not a Magic Number")


# num = int(input("Enter anumber: "))
# square = num**2
# copy = square
# sum = 0
# while(copy>0):
#     sum+= copy%10
#     copy//=10
# if(sum ==  num):
#     print("Neon number!!")
# else:
#     print("Not a neon number")


# num = int(input("Enter anumber: "))
# copy = num
# sum = 0
# while(copy>0):
#     sum+=copy%10
#     copy//=10
# if(num%sum == 0):
#     print("Harshad number!")
# else:
#     print("Not harshad number")



# num = int(input("Enter anumber: "))
# copy = num
# sum = 0
# while(copy>0):
#     numb = copy%10
#     sum+= numb**3
#     copy//=10
# if(sum== num):
#     print("Armstrong number")
# else:
#     print("Not armstrong number!!")


# num =int(input("Enter a numbe: "))
# for i in range(2,num):
#     if(num%i == 0):
#         print("Not prime!!")
#         break
# else:
#     print("Prime")

# num = int(input("Enternumber: "))
# if(num%2==0):
#     print("Even number")
# else:
#     print("Odd number")

# num = int(input("Enter a number: "))
# copy = num
# rev = 0
# while(copy>0):
#     rev = rev*10+copy%10
#     copy//=10
# if(rev == num):
#     print("Palindrome")
# else:
#     print("Not palindrome")

     
# num = int(input("Enter a number: "))
# copy1 = num
# square = num**2
# final = 0
# count = 0
# while(copy1>0):
#     copy1//=10
#     count+=1
# for i in range(0,count):
#     final = final*10  + square%10
#     square//=10
# copy2 = final
# final = 0
# while(copy2>0):
#     final = final*10 + copy2%10 
#     copy2//=10
# if(final == num):
#     print("automorphic number!")
# else:
#     print("Not automorphic number!")                                                               

