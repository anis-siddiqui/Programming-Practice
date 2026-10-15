#include <stdio.h>
#include <string.h>

typedef struct Information{
    int rollNum;
    char name[20];
    int marks;
} Students;

void display(Students student[] , int size);

int main(){
    int size;
    printf("Enter number of students : ");
    if(scanf("%d" , &size) != 1){
        printf("Invalid input!!\n");
        return 1;
    }
    if(size <= 0){
        printf("Number of students must be greater than 0\n");
        return 1;
    }
    Students student[size];
    
    printf("\n");
    
    for(int i = 0 ; i<size ; i++){
        printf("Enter rollnumber of student %d : " , i+1);
        if(scanf("%d" , &student[i].rollNum) != 1){
            printf("Invalid input!!\n");
            return 1;
        }
        getchar();
        printf("Enter name of student %d : " , i+1);
        if(fgets(student[i].name , sizeof(student[i].name) , stdin) == NULL ){
            printf("Invalid input!!\n");
            return 1;
        }
        student[i].name[strcspn(student[i].name, "\n")] = '\0';
        printf("Enter marks of student %d : " , i+1);
        if(scanf("%d" , &student[i].marks) != 1){
            printf("Invalid input!!\n");
            return 1;
        }
        printf("\n");
    }
    display(student , size);
    int max = 0;
    for(int i = 1 ; i<size ; i++){
        if(student[i].marks > student[max].marks){
            max = i;
        }
    }
        printf("Topper Roll Number : %d\n", student[max].rollNum);
        printf("Topper Name : %s\n", student[max].name);
        printf("Topper Marks : %d\n", student[max].marks);
    
    return 0;
}

void display(Students student[] , int size){
    printf("--------Students detail--------\n");
    for(int i = 0 ; i<size ; i++){
        printf("Roll number of Student %d : %d\n" , i+1 , student[i].rollNum);
        printf("Name of Student %d : %s\n" , i+1 , student[i].name);
        printf("Marks of Student %d : %d\n" , i+1 , student[i].marks);
        printf("\n");
    }
}