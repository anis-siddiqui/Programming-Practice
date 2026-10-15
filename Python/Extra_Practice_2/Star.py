# for i in range(5,0,-1):
#     print(" "*i , "*"*i)

a = int(input("Enter a number: "))
j = a
sum = 0
while(j!=0):
    sum += j%10
    j = j//10

print(sum)