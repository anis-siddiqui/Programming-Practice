l =[1,2,3,5,6]
l2 =[10,9,8,7,4]

for i in range(0,len(l2)):
    l.append(l2[i])

for j in range(0,len(l)-1):
    for i in range(0,len(l)-1):
        if(l[i] > l[i+1]):
            temp = l[i+1]
            l[i+1] = l[i]
            l[i] = temp
   
print(l)

# d = {"Name":"Anis", "Age":17}
# d.get()
# print(d)