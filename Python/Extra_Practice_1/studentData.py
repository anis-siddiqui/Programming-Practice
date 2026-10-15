name = input("Enter your name : ")

print("Enter your marks by this serial : ")
print("[English , Hindi , Maths , Physics , Chemistry]")
English = int(input())
Hindi = int(input())
Maths = int(input())
Physics = int(input())
Chemistry = int(input())

marks = [English , Hindi , Maths , Physics , Chemistry]

percentage = sum(marks)/len(marks)

student = {
    "name" : name  ,
    "marks" : marks , 
    "percentage" : percentage
}
print(student)

if(percentage > 100):
    print("You mistook with numbers")
elif(percentage >= 80):
    print("Excellent")
elif(percentage >= 60):
    print("Good")
else:
    print("Needs Improvement")

