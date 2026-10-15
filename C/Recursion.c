#include <stdio.h>

//n to 1
void numbers(int n);
//1 to n
void numberss(int n);
//Factorial
int factorial(int n);

int main(){
    printf("Enter a number : ")
    // numbers(n);
    // numberss(n);
    printf("Factorial = %d" , factorial(n));
    return 0;
}

//n to 1
void numbers(int n){
    if(n==0){
        return;
    }
    printf("%d " , n);
    numbers(n-1);
}

//1 to n
void numberss(int n){
    if(n==0) return;
    numberss(n-1);
    printf("%d " , n);
}

//Factorial
int factorial(int n){
    if (n==0  || n==1) 
        return 1;
    return n*factorial(n-1);
}