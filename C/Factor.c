#include <stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    if(scanf("%d" , &num) != 1){
        printf("Invalid input!!");
        return 1;
    }

    printf("Factors of %d :- " , num);

    for(int i = 1 ; i<=num ; i++){
        if(num%i == 0){
            printf("%d " , i);
        }
    }
    return 0;
}