tasks = {}

def add_task(tasks_dict):
    s_no = int(input("Enter serial number: "))
    if(s_no in tasks_dict):
        print("Serial number is already exist!!")
        return
    task = input("Enter task: ")
    tasks_dict[s_no] = task
    print(f"Task {s_no}. {task} added in your to-do list.")

def view_task(tasks_dict):
    print("\n---------------Tasks---------------")
    for i in tasks_dict:
        print(f"{i}. {tasks_dict[i]}")

def del_task(tasks_dict):
    s_no = int(input("Enter serial number: "))
    if s_no not in tasks_dict:
        print("Task does not exist!")
        return
    temp = tasks_dict[s_no]
    tasks_dict.pop(s_no)
    print(f"{s_no}. {temp} is deleted.")

choice = 0
while(choice!=4):
    print("\n---------------MENU---------------")
    print("1.Add Task \n2.View Task \n3.Delete Task \n4.Exit\n")
    choice = int(input("Enter your choice: "))
    if(choice == 1):
        add_task(tasks)
    elif(choice == 2):
        view_task(tasks)
    elif(choice == 3):
        del_task(tasks)
    elif(choice == 4):
        print("Successfully ended!")
        break
    else:
        print("Invalid choice!")
