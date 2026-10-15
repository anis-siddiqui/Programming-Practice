# 1. Write a program to create and access a tuple.

# SOLUTION
# t = (1,2,3,2,1,4)
# print(t)
# END SOLUTION



# 2. Write a program to convert tuple into list.

# SOLUTION
# t = (1,2,3,4,5,3,2)
# print(type(t))
# t = list(t)
# print(type(t))
# END SOLUTION



# 3. Write a program to find index of an element in tuple.

# SOLUTION
# t = (1,2,3,4,5,3,2)
# print(t.index(4))
# END SOLUTION



# 4. Write a program to count occurrences in tuple.

# SOLUTION
# t = (1,2,3,4,5,6,2,3,2,4,1,2,3,4,2,3,1,3)
# num = int(input("Enter a number: "))
# # print(t.count(num))
# count = 0
# for i in range(0,len(t)):
#     if(num == t[i]):
#         count += 1
# print(f"{num} found {count} times in tuple")
# END SOLUTION



# 5. Write a program to swap two variables using tuple.

# SOLUTION
# a = 5
# b = 10
# print("Before swaping : a =", a, "b =", b)
# a,b = b,a
# print("After swaping : a =", a, "b =", b)
# END SOLUTION