//SMS --> Student Management System

#include <stdio.h>
#include <string.h>

typedef struct Student{
    char name[20];
    int age;
    int studentClass;
    int rollNum;
} Student;

void add(Student *s , int *count);
void display(Student *s , int count);
void search(Student *s , int count);


int main(){
    int opt , count = 0;
 Student s[100];
    do{
        printf("What do you want to do ?\n");
        printf("1.Add Student \n2.Display Students \n3.Search Student \n4.Exit\n");
        printf("Enter one option(1-4):- ");
        if(scanf("%d" , &opt) != 1){
            printf("Invalid input!!");
            return 1;
        }
        switch(opt){
            case 1:
                add(s , &count);
                break;
            case 2:
                display(s , count);
                break;
            case 3:
                search(s , count);
                break;
            case 4:
                break;
            default:
                printf("Invalid option!!\n");
                break;
        }
        printf("\n---------------------------------------\n\n");
    }while(opt!=4);
    printf("Successfully exit!!\n");
    return 0;
}


void add(Student *s , int *count){
    printf("Enter name of student %d: " , *count+1);
    getchar();
    if(fgets(s[*count].name , sizeof(s[*count].name) , stdin) == NULL){
        printf("Invalid input!!\n");
        return;
    }
    s[*count].name[strcspn(s[*count].name , "\n")] = '\0';

    printf("Enter age of student %d: " , *count+1);
    if(scanf("%d" , &s[*count].age) != 1){
        printf("Invalid input!!\n");
        return;
    }  
    printf("Enter Class of student %d: " , *count+1);
    if(scanf("%d" , &s[*count].studentClass) != 1){
        printf("Invalid input!!\n");
        return;
    }  
    printf("Enter Roll Number of student %d: " , *count+1);
    if(scanf("%d" , &s[*count].rollNum) != 1){
        printf("Invalid input!!\n");
        return;
    }  

    FILE *sms = fopen("SMS.txt" , "a");
    fprintf(sms, "\nStudent %d\n", *count + 1);
    fprintf(sms , "Name: %s\n" , s[*count].name );
    fprintf(sms , "Age: %d\n" , s[*count].age );
    fprintf(sms , "Class: %d\n" , s[*count].studentClass );
    fprintf(sms , "Roll Number: %d\n" , s[*count].rollNum );
    fclose(sms);
    (*count)++;
}

void display(Student *s , int count){

}

void search(Student *s , int count){

}