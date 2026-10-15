#include<stdio.h>
#include<math.h>
    
int main(){
    //Power of a number
    int num , power;
    printf("Enter number : ");
    if (scanf("%d" , &num) != 1) {
        printf("Invalid number");
        return 1;
    }
    printf("Enter power of number : ");
    if (scanf("%d" , &power) != 1) {
        printf("Invalid power");
        return 1;
    }
    double ans = pow(num , power);
    printf("Answer = %.01f" , ans);
    return 0;
}