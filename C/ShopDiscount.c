#include <stdio.h>

int main(){
    int amount;
    printf("Enter amount : ");

    if(scanf("%d" , &amount) != 1){
        printf("Invalid amount");
        return 1;
    }

    if(amount>=0 && amount<5000){
        printf("After discounting 0%% your amount is = %d" , amount);
    }else if(amount>=5000 && amount<7000){
        float amount2 = amount - amount*(5/100.0);
        printf("After discounting 5%% your amount is = %.2f" , amount2);
    }else if(amount>=7000 && amount<9000){
        float amount2 = amount - amount*(10/100.0);
        printf("After discounting 10%% your amount is = %.2f" , amount2);
    }else if(amount>=9000){
        float amount2 = amount - amount*(20/100.0);
        printf("After discounting 20%% your amount is = %.2f" , amount2);
    }

    return 0;
}