# Merge two dictionaries into one.

# SOLUTION
# d1={'a':1}
# d2={'b':2}
# d1.update(d2)
# print(d1)
# END SOLUTION



# Sum all values in a dictionary.

# SOLUTION
# d = {"a":10,"b":20,"c":30}
# sum = 0
# for i in d:
#     sum += d[i]
# print("Sum:", sum)

# END SOLUTION



# Count the frequency of each element in a list using a dictionary.

# SOLUTION
# l = ["a","b","a","c","b","a"]
# d = {}
# for i in l:
#     if(i in d):
#         d[i] +=1
#     else:
#         d[i] = 1
# print(d)
# END SOLUTION



# Combine two dicts, adding values for common keys.

# SOLUTION
# d1={'a':5,'b':3}
# d2={'b':4,'c':2}
# for i in d2:
#     if(i in d1):
#         d1[i] += d2[i]
#     else:
#         d1[i] = d2[i]
# print(d1)
# END SOLUTION