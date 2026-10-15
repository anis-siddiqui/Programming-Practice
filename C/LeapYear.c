#include <stdio.h>

int main(){
    int year;
    printf("Enter year : ");
    if (scanf("%d" , &year) != 1){
        printf("Invalid year");
        return 1;
    }
    if(year%100 == 0){
        if(year%400 == 0){
            printf("Leap Year");
        }else{
            printf("Not leap year");
        }
    }else if(year%4 == 0){
        printf("Leap Year");
    }else{
        printf("Not leap year");
    }
    return 0;
}