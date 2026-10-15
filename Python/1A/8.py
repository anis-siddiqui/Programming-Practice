# 1. Write a program to create a dictionary.

# SOLUTION
# d = {1:100,2:101,3:102}
# print(type(d))
# END SOLUTION



# 2. Write a program to access values from dictionary.

# SOLUTION
# d = {1:100,2:101,3:102}
# print(d[1])
# print(d.get(1))
# print(d.items())
# print(d)
# END SOLUTION



# 3. Write a program to add a new key-value pair in dictionary.

# SOLUTION
# d = {1:100,2:101,3:102}
# d.update({4:103})
# print(d)
# d[4] = 105
# print(d)
# END SOLUTION



# 4. Write a program to update dictionary value.

# SOLUTION
# d = {1:100,2:101,3:102}
# d.update({4:103,5:104,6:105})
# print(d)
# END SOLUTION



# 5. Write a program to delete a key from dictionary.

# SOLUTION
# d = {1:100,2:101,3:102}
# d.pop(3)
# print(d)
# END SOLUTION



# 6. Write a program to iterate dictionary using loop.

# SOLUTION
# d = {1:100,2:101,3:102}
# for i in d:
#     print(d[i])
# END SOLUTION



# 7. Write a program to count frequency of characters using dictionary.

# SOLUTION
# word = input("Enter a string: ")
# freq = {}
# for i in word:
#     if(i not in freq):
#         freq[i] = 1
#     else:
#         freq[i] += 1
# print(freq)
# END SOLUTION