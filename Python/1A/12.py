# 1. Write a program demonstrating single inheritance.

# SOLUTION
# class Animal:
#     def __init__(self,name):
#         self.name = name

# class Dog(Animal):
#     pass

# d1 = Dog("Tommy")
# print(d1.name)
# END SOLUTION



# 2. Write a program using super() keyword.

# SOLUTION
# class CarFactory:
#     def __init__(self,name,tyre,type):
#         self.name = name
#         self.tyre = tyre
#         self.type = type

# class Audi(CarFactory):
#     def __init__(self, name, tyre, type,average):
#         super().__init__(name, tyre, type)
#         self.average = average

# audi = Audi("Audi",4,"Petrol",40)
# print(audi.average)
        
# END SOLUTION



# 3. Write a program to override a method.

# SOLUTION
# class Animal:
#     def sound(self):
#         print("Animal makes a sound")

# class Dog(Animal):
#     def sound(self):
#         print("Dog barks")

# dog = Dog()
# dog.sound()
# END SOLUTION



# 4. Write a program demonstrating multiple inheritance.

# SOLUTION
# class Father:
#     def f(self):
#         print("Father's method")

# class Mother:
#     def m(self):
#         print("Mother's method")

# class Child(Father,Mother):
#     pass

# c = Child()
# c.f()
# c.m()
# END SOLUTION