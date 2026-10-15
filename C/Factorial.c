#include <stdio.h>

int main(){
    int n ;
    long long int fact = 1;
    printf("Enter a nummber : ");
    if(scanf("%d" , &n) != 1){
        printf("Invalid input!!");
        return 1;
    }
    for(int i = 1 ; i<=n ; i++){
        fact = fact*i;
    }
    printf("Factorial = %lld\n" , fact);
    return 0;
}