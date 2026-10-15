#include <stdio.h> 

 int main(){
    int first , second ;
    printf("Enter first number : ");
    if(scanf("%d" , &first) != 1 ){
        printf("Invalid number");
        return 1;
    }
    printf("Enter second number : ");
    if (scanf("%d" , &second) != 1){
        printf("Invalid number");
        return 1;
    }
    printf("Your numbers is : first = %d second = %d \n" , first , second);
    int temp = first;
    first = second;
    second = temp;
    printf("Swap of your numbers is : first = %d second = %d \n" , first , second);
    return 0;
}