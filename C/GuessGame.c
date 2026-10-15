#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random , guess;
    srand(time(NULL));
    random = rand()%100+1;

    do{
        printf("Guess a number (between 1-100): ");
        scanf("%d" , &guess);
        if(guess>random){
            printf("High.\n");
        }else if(guess<random){
            printf("Low.\n");
        }else{
            printf("Correct guess = %d" , guess);
        }
    }while(guess!=random);

    return 0;
}