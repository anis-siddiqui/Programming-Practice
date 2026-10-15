num = int(input("Enter anumber: "))
copy = num
final = 0
while(copy!=0):
    num2 = copy%10
    num2  = num2**3
    final = final + num2 
    copy = copy//10

if(final==num):
    print("Armstrong number")
else:
    print("Not Armstrong number")