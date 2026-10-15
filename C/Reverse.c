#include <stdio.h>

int main(){
    int num , rev = 0 ;

    printf("Enter a number : ");
    if(scanf("%d" ,&num) != 1){
        printf("Invalid input : ");
        return 1;
    }

    printf("Reverse number = ");
    if(num == 0){
        printf("0");
    }else{ 
        while(num!=0){
            rev = rev*10 + (num%10);
            num = num/10;
        }
        printf("%d" , rev);
    }
    return 0;
}