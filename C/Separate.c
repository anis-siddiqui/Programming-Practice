#include <stdio.h>

int main(){
    int num1;
    printf("Enter a number : ");
    if(scanf("%d" , &num1) != 1) {
        printf("Invalid input!");
        return 1;
    }

    int num2 , sum = 0;

    printf("Reverse and separate numbers = ");

    if(num1==0){
        printf("0");
    }else{
        while(num1!=0){
            num2 = num1%10;
            num1 = num1/10;
            sum = sum + num2;
            printf("%d " , num2);
        }
    }
    printf("\nSum of numbers = %d" , sum);

    return 0 ;
}