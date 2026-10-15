#include <stdio.h>

int main(){
    int first , second , third ;

    printf("Enter first number : ");
    if(scanf("%d" , &first) != 1){
        printf("Invalid number!!\n");
        return 1;
    }

    printf("Enter second number : ");
    if(scanf("%d" , &second) != 1){
        printf("Invalid number!!\n");
        return 1;
    }

    printf("Enter third number : ");
    if(scanf("%d" , &third) != 1){
        printf("Invalid number!!\n");
        return 1;
    }

    if(first == second && second == third){
        printf("All numbers are Equal.\n");
    }else if (first == second && first>third ){
        printf("Numbers %d and %d are equal and Largest.\n" , first , second);
    }else if (second == third && second > first ){
        printf("Numbers %d and %d are equal and Largest\n." , second , third);
    }else if (third == first && third > second ){
        printf("Numbers %d and %d are equal and Largest\n." , third , first);
    }else if(first>second && first>third){
        printf("%d is Largest.\n" , first);
    }else if(second>third && second>first){
        printf("%d is Largest\n." , second);
    }else{
        printf("%d is Largest\n." , third);
    }

    return 0;
}