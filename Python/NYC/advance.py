# Print a right-angle triangle with stars.
# lines = int(input("Enter number of lines: "))
# for i in range(1,lines+1):
#     print("* "*i)



# Print a mirrored right-angle triangle.
# lines = int(input("Enter number of lines: "))
# for i in range(lines,0,-1):
#     print("* "*i)


# Print a centred diamond with stars.
lines = int(input("Enter number of lines: "))
for i in range(1,lines+1):
    print()

for i in range(lines,1):
    print()





# A number is strong if sum of factorials of its digits equals the number.
# num = int(input("Enter a number: "))
# copy = num
# sum = 0
# while(copy!=0):
#     last_num = copy%10
#     fact = 1
#     for i in range(1,last_num+1):
#         fact = fact*i
#     sum+=fact
#     copy //= 10

# if(sum == num):
#     print("Strong number")
# else:
#     print("Not a strong number")






# Print all prime numbers between two numbers.
# start = int(input("Enter starting number:"))
# end = int(input("Enter starting number:"))
# l =[]
# for i in range(start, end+1):
#     if i>1 :
#         for j in range(2,i):
#             if(i%j == 0):
#                 break
#         else:
#             l.append(i)
# print(l)






# # Find which element occurred most in a list.
# l = [1,2,3,4,1,2,3,1,2,2,3,3,4,3,3,2,5,2,4,1,3,4,1,4,1,4,1,3,4,5,4,1,2,1,2,1,3,1,2,2]
# max_count = 0
# for i in l:
#     count = 0
#     for j in l:
#         if(j == i):
#             count+=1
#     if(count>max_count):
#         max_count = count
#         max_num = i
# print(f"{max_num} (occured {max_count} times)")