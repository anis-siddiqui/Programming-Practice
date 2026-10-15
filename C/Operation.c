#include <stdio.h>

int main(){
//     int a = 5 , b = 6 , sum = a+b , sub = a-b , mul = a*b , div = a/b;
//     printf("Sum of %d & %d is = %d \n" , a , b , sum);
//     printf("Substration of %d & %d is = %d \n" , a , b , sub);
//     printf("Multiplication of %d & %d is = %d \n" , a , b , mul);
//     printf("Division of %d by %d is = %d \n" , a , b , div);



// input
    int a , b ;
    printf("Enter first number :");
    if (scanf("%d" , &a) != 1){
        printf("Invalid number");
        return 1;
    }
    printf("Enter second number :");
    if (scanf("%d" , &b) != 1){
        printf("Invalid number");
        return 1;
    }
    int sum = a+b , sub = a-b , mul = a*b , div = a/b;
    printf("Sum of %d & %d is = %d \n" , a , b , sum);
    printf("Substration of %d & %d is = %d \n" , a , b , sub);
    printf("Multiplication of %d & %d is = %d \n" , a , b , mul);
    printf("Division of %d by %d is = %d \n" , a , b , div);
    

    return 0;
}