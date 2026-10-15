#include <stdio.h>

int main(){
    int num ;
    printf("Enter a number : ");
    if (scanf("%d" , &num) != 1){
        printf("Invalid input\n");
        return 1;
    }
    
    if(num == 0){
        printf("%d is Even and neither Positive nor Negative\n" , num);
    }else if(num%2 == 0 && num>0){
        printf("%d is Even and Positive\n" , num);
    }else if(num%2 == 0 && num<0){
        printf("%d is Even and Negative\n" , num);
    }else if(num%2 != 0 && num>0){
        printf("%d is Odd and Positive\n" , num);
    }else if(num%2 != 0 && num<0){
        printf("%d is Odd and Negative\n" , num);
    }
    return 0;
}