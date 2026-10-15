# Pascal Triangle star pattern

# lines = int(input("Enter number of lines :-"))
# for i in range(1,lines+1):
#     print("* "*i)



# Hollow pyramid star pattern

# line = int(input("Enter number of lines :- "))
# for i in range(1,line+1,1):
#     for j in range(1,line*2,1):
#         if(i+j == line+1 or i-j == -1*(line-1) or i == line):
#             print("*",end=" ")
#         else:
#             print(" ",end=" ")
#     print(" ")
    


#Customised hollow pyramid star pattern

# line = int(input("Enter number of lines :- "))
# for i in range(1,line+1,1):
#     if(line%2==0):
#         num = (line*3)+(i//2+1)
#     else:
#         num = (line*3)+(i//2+2)
#     for j in range(1,num,1):
#         if(i==line):
#                 print("*" , end="")
#         elif(i+j == line+1 or i-j == -1*(line-i)):
#             print("*"*i , end=" ")
#         else:
#             print(" ",end=" ")
#     print(" ")



# Upper Butterfly star pattern

# lines = int(input("Enter number of lines :- "))
# for i in range(1,lines+1):
#     for j in range(1,(lines*2)):
#         if(i+j <= i*2 or i+j >= lines*2 or i == lines):
#             print("*" , end=" ")
#         else:
#             print(" " , end=" ")
#     print()



# Lower Butterfly star pattern

# lines = int(input("Enter number of lines :- "))
# for i in range(1,lines+1):
#     for j in range(1,lines*2):
#         if(i+j <= lines+1 or i-j <= (-1)*(lines-1) or i == 1):
#             print("*" , end=" ")
#         else:
#             print(" " , end=" ")
#     print()



# Full Butterfly star pattern

# lines = int(input("Enter number of lines :- "))
# for i in range(1,lines+1):
#     for j in range(1,(lines*2)):
#         if(i+j <= i*2 or i+j >= lines*2 or i == lines):
#             print("*" , end=" ")
#         else:
#             print(" " , end=" ")
#     print()
# for i in range(1,lines+1):
#     for j in range(1,lines*2):
#         if(i+j <= lines+1 or i-j <= (-1)*(lines-1) or i == 1):
#             print("*" , end=" ")
#         else:
#             print(" " , end=" ")
#     print()



# X-star pattern

# lines = int(input("Enter number of lines :- "))
# for i in range(1,lines+1):
#     for j in range(1,lines+1):
#         if(i+j == i*2 or i+j==lines+1):
#             print("*" , end=" ")
#         else:
#             print(" " , end=" ")
#     print()



# Diamond star pattern
l = int(input("Enter number of lines :- "))
for i in range(1,l+1):
    for j in range(1,l*2):
        if(i+j>l):
            print("*",end=" ")
            if(i-j==(-1*(l-1))):
                break;
        else:
            print(" ",end=" ")
    print()

for i in range(1,l,1):
    for j in range(1,l*2,1):
        if(i+j>=(i*2+1)):
            print("*",end=" ")
            if(i+j==((2*(l-1))+1)):
                break;
        else:
            print(" ",end=" ")
    print()

