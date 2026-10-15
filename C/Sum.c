#include <stdio.h>

int main(){
    // int a = 10 , b = 20 , sum = a+b;
    // printf("Sum of %d & %d is %d \n" , a , b , sum);



    // input
    int first , second ;
    printf("Enter first number : ");
    if (scanf("%d" , &first) != 1 ){
        printf("Invalid number");
        return 1;
    }
    printf("Enter second number : ");
    if (scanf("%d" , &second) != 1 ){
        printf("Invalid number");
        return 1;
    }
    printf("Sum of %d & %d is %d \n" , first , second , first+second);
    return 0;
    
}