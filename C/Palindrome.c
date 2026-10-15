#include <stdio.h>

int main(){
    int num , rev = 0;

    printf("Enter a number : ");
    if(scanf("%d" ,&num) != 1){
        printf("Invalid input : ");
        return 1;
    }

    int num2 = num;
    if(num == 0){
        rev = 0;
    }else{
        while(num2!=0){
            rev = rev*10 + (num2%10);
            num2 = num2/10;
        }
    }

    printf("%d",rev);

    if(num == rev){
        printf("\nPalindrome");
    }else{
        printf("\nNot Palindrome");
    }
}