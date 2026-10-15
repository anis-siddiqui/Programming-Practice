#include <stdio.h>

int main(){
    int n ;
    printf("Enter a number : ");
    if(scanf("%d" , &n) != 1){
        printf("Invalid number!!");
        return 1;
    }


    //1 to n
    // for(int i = 1 ; i<=n ; i++){
    //     printf("%d\n" , i);
    // }


    //n to 1
    // for(int i = n ; i>0 ; i--){
    //     printf("%d\n" , i);
    // }


    //sum & average of 1 to n
    // float sum = 0;
    // for(int i = 1 ; i<=n ; i++){
    //     sum = sum + i;
    // }
    // float average = sum/n;
    // printf("Sum = %.1f\n" , sum);
    // printf("Average = %.1f\n" , average);



    return 0;
}