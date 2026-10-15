#include <stdio.h>

int main(){
    float first , second;
    printf("Enter first number : ");
    if (scanf("%f" , &first) != 1){
        printf("Invalid number");
        return 1;
    }

    printf("Enter second number : ");
    if(scanf("%f" , &second) != 1){
        printf("Invalid number");
        return 1;
    }
    if(first>second){
        printf("Number %f is greater than number %f" , first , second);
    }else if(first<second){
        printf("Number %f is greater than number %f" , second , first);
    }else{
        printf("Both number %f and %f are equal" , first , second);
    }
    return 0;
}