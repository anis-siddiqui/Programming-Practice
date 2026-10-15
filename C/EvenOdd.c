#include <stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    
    if(scanf("%d" , &num) != 1){
        printf("Invalid number ");
        return 1;
    }

    if(num%2==0){
        printf("Your number %d is Even" , num);
    }else{
        printf("Your number %d is Odd" , num);
    }
    return 0;
}