#include <stdio.h>

int main(){
    char name[20];
    int age , less;
    printf("Enter your name : ");
    scanf("%s" , name);
    printf("Enter your age : ");
    if (scanf("%d" , &age) != 1){
        printf("Invalid number");
        return 1;
    }
    if(age>18){
        printf("Hello %s you can vote." , name , less);
    }else{
        less = 18-age;
        printf("Hello %s you can vote after %d years." , name , less);
    }
    return 0;
}