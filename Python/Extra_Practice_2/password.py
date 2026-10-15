# import time;
# import random;

# char = "0123456789"
# password = int(input("Enter your password : "))
# print("\n Accessing Database........\n")
# guess = ""
# j=0
# while guess!=password :
#     guess=""
#     for i in range(len(str(password))):
#         guess += random.choice(char)
#         print("\n Trying......!",guess)
#         j+=1
#     time.sleep(0.01)
# print("Password cracked",guess)
# print(j)


#chat gpt wala

import random

password = input("Enter your password (only digits): ")
print("\n Accessing Database........\n")

limit = 10 ** len(password)
all_possibilities = [str(i).zfill(len(password)) for i in range(limit)]

random.shuffle(all_possibilities)

j = 0
# 3. Ab loop chalao, ek-ek karke random unique number bahar aayega
for guess in all_possibilities:
    print("Trying......!", guess)
    j += 1
    
    # Password match hote hi loop khatam
    if guess == password:
        print("\n🎉 Password cracked:", guess)
        print("Total attempts:", j)
        break
        
  # Speed badhane ke liye is line ko hata sakte ho
