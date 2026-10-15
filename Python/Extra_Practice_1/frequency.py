# Wrong hai 
a = [4, 5, 1, 2, 1, 5, 4]
ans = 0
for i in range(0,len(a)):
    for j in range(i+1,len(a)):
        if(a[j]==a[i]):
            break
    else:
        ans = i
        break
print(a[ans])
