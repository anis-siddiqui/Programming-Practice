# Print all positive and negative elements separately.

# l = []
# p = []
# n = []
# opt = 1
# while(opt==1):
#     element = int(input("Enter element: "))
#     l.append(element)
#     opt = int(input("Do you want to enter more element?(1->Yes): "))
# for i in l: 
#     if(i>=0):
#         p.append(i)
#     else:
#         n.append(i)
# print(f"Positive: {p} Negative: {n}")



# Find the mean (average) of all list elements.

# l = []
# opt = 1
# while(opt==1):
#     element = int(input("Enter element: "))
#     l.append(element)
#     opt = int(input("Do you want to enter more element?(1->Yes): "))
# sum = 0
# for i in l:
#     sum += i
# print("Mean:", sum/len(l))



# Find the greatest element and print its index. 

# l = []
# opt = 1
# while(opt==1):
#     element = int(input("Enter element: "))
#     l.append(element)
#     opt = int(input("Do you want to enter more element?(1->Yes): "))
# greatest = l[0]
# for i in range(0,len(l)):
#     if(l[i] > greatest):
#         greatest = l[i]
#         ind = i
# print(f"Greatest : {greatest} Index: {ind}")



# Find the second greatest element.

# l = []
# opt = 1
# while(opt == 1):
#     element = int(input("Enter element: "))
#     l.append(element)
#     opt = int(input("Do you want to enter more element?(1->Yes): "))
# largest = l[0]
# sec_largest = l[0]
# for i in l:
#     if(i>largest):
#         largest = i
#     elif(i>sec_largest):
#         sec_largest = i
# print(largest)
# print(sec_largest)


# Check if the list is already sorted.

# l = []
# opt = 1
# while(opt == 1):
#     element = int(input("Enter element: "))
#     l.append(element)
#     opt = int(input("Do you want to enter more element?(1->Yes): "))
# s = 0
# for i in range(0,len(l)-1):
#     if(l[i]>l[i+1]):
#         s=1
# answer = "Sorted list!" if s == 0 else "Unsorted list!" 
# print(answer)



"""
 1.contextulize
 2.ask AI for prompt
 3.agents
 google ai studio
"""