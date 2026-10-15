#include <stdio.h>

int main(){
    int num , count = 0 ;
    printf("Enter a number : ");
    if(scanf("%d" , &num) != 1){
        printf("Invalid input!\n");
        return 1;
    }

    for(int i = 1 ; i<=num ; i++){
        if(num%i == 0){
            count++;
        }
    }

   if(count > 2){
    printf("Not prime\n");
   }else{
    printf("Prime\n");
   }

    return 0;
}