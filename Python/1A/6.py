# 1. Write a program to create and print a list.

# SOLUTION
# l = [1,2,3,4,5]
# print(l)
# END SOLUTION


# 2. Write a program to add elements to a list.

# SOLUTION
# l = []
# l.append(34)
# l.insert(2,24)
# print(l)
# END SOLUTION


# 3. Write a program to remove elements from a list.

# SOLUTION
# l = [1,2,3,4,5]
# l.pop(4)
# l.remove(3)
# print(l)
# END SOLUTION


# 4. Write a program to find length of a list.

# SOLUTION
# l = [1,2,3,4,5]
# print(len(l))
# END SOLUTION


# 5. Write a program to find maximum and minimum element in a list.

# SOLUTION
# l = [10,20,30,40,50,2,67,11,23]
# max = l[0]
# min = l[0]
# for i in l:
#     if(i > max):
#         max = i
#     if(i < min):
#         min = i 
# print(f"Maximum = {max} Minimum = {min}")
# END SOLUTION


# 6. Write a program to slice first 3 elements from a list.

# SOLUTION
# l = [10,20,30,40,50,2,67,11,23]
# print(l[0:3])
# END SOLUTION


# 7. Write a program to reverse a list.

# SOLUTION
# l = [10,20,30,40]
# l.reverse()
# print(l)
# END SOLUTION


# SOLUTION
# l = [10,20,30,40]
# print(l)
# j = len(l)-1
# for i in range(0,len(l)//2):
#     temp = l[i]
#     l[i] = l[j]
#     l[j] = temp
#     j-=1
# print(l)
# END SOLUTION



# 8. Write a program to sort a list.

# SOLUTION
# l = [11,34,21,28,32,12,110,2,34]
# l2 = [12,34,34]
# l.sort()
# print(l)
# END SOLUTION

# SOLUTION
# l = [12,42,1,2,56,23,44,23,12,54,98]
# for j in range(0,len(l)-1):
#     for i in range(0,len(l)-1):
#         if(l[i] > l[i+1]):
#             temp = l[i+1]
#             l[i+1] = l[i]
#             l[i] = temp
# print(l)
# END SOLUTION




# 9. Write a program to count occurrences of an element in a list.

# SOLUTION
# l = [10,20,40,10,20,30,10,40,10,50,20,50,60,10,20,70,30,80,90]
# element = int(input("Enter an element: "))
# # print(l.count(element))
# count = 0
# for i in range(0,len(l)):
#     if(l[i] == element):
#         count += 1
# print(f"Element {element} found {count} times in list")
# END SOLUTION


# 10. Write a program to merge two lists.

# SOLUTION
# l1 = [1,2,3,4]
# l2 = [10,20,30,40]
## l1.extend(l2)
# for i in range(0,len(l2)):
#     l1.append(l2[i])
# print(l1)
# END SOLUTION