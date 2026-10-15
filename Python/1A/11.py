# 1. Write a program to create a class with attributes.

# SOLUTION
# class Student:
#     name = "Anis"
#     age =  17
#     height = 5.11
#     weight = 67
# print(Student.name)
# print(Student.age)
# print(Student.height)
# print(Student.weight)
# END SOLUTION



# 2. Write a program using init method.

# SOLUTION
# class Student:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
# END SOLUTION



# 3. Write a program to create object and access attributes.

# SOLUTION
# class Student:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
# s1 = Student("Anis", 17)
# print(s1.name)
# print(s1.age)
# END SOLUTION



# 4. Write a program to create method inside a class.

# SOLUTION
# class Student:
#     def __init__(self,name):
#         self.name = name
#     def study(self):
#         print(f"{self.name} is studying.")
# s1 = Student("Anis")
# s1.study()
# END SOLUTION



# 5. Write a program for Student class.

# SOLUTION
# class Student:
#     def __init__(self,name,age,standard,rollNum):
#         self.name = name
#         self.age = age
#         self.standard = standard
#         self.rollNum = rollNum

#     def study(self):
#         print(f"{self.name} is studying.")

#     def play(self):
#         print(f"{self.name} is playing.")

#     def eat(self):
#         print(f"{self.name} is eating.")

#     def sleep(self):
#         print(f"{self.name} is sleeping.")



# s1 = Student("Anis",17,"College 1st year",1001)
# print(s1.name)
# print(s1.age)
# print(s1.standard)
# print(s1.rollNum)
# s1.study()
# s1.play()
# s1.eat()
# s1.sleep()
# END SOLUTION



# 6. Write a program for Bank Account class.

# SOLUTION
# class BankAccount:
#     def __init__(self,name,date_of_birth,accountNo,branchName,balance):
#         self.name = name
#         self.date_of_birth = date_of_birth
#         self.accountNo = accountNo
#         self.branchName = branchName
#         self.__balance = balance

#     def deposit(self, deposit_amount):
#         self.__balance += deposit_amount
    
#     def credit(self, credit_amount):
#         if(self.__balance > credit_amount):
#             self.__balance -= credit_amount
#         else:
#             print("Insufficent balance to credit")

#     def check_balance(self):
#         print(self.__balance)



# ac1 = BankAccount("Anis", "10-12-2008", 1001 , "Sandalpur" , 500)
# print(ac1.name)
# print(ac1.date_of_birth)
# print(ac1.accountNo)
# print(ac1.branchName)
# ac1.deposit(500)
# ac1.credit(250)
# ac1.check_balance()
# END SOLUTION