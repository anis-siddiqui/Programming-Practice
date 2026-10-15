#include <stdio.h>

void prime(int n);
void palindrome(int n);
void armstrong(int n);
void factorial(int n);
void fibonacci(int n);
void sumOfDigits(int n);

int main(){
    int n;
    printf("Enter a positive integer: ");
    if(scanf("%d",&n) != 1){
        printf("Invalid input!!");
        return 1;
    }
    if(n<=0){
        printf("Only positive integers ar allowed!!");
        return 1;
    }
    int opt;
    do{
        printf("\n\n----------MENU---------- \n1.Prime \n2.Palindrome \n3.Armstrong \n4.Factorial \n5.Fibonacci \n6.Sum of digits \n7.Break \n");
        printf("Enter your option: ");
        if(scanf("%d",&opt) != 1){
            printf("Invalid input!!");
            return 1;
        }

        switch (opt){
            case 1:
                prime(n);
                break;
            case 2:
                palindrome(n);
                break;
            case 3:
                armstrong(n);
                break;
            case 4:
                factorial(n);
                break;
            case 5:
                fibonacci(n);
                break;
            case 6:
                sumOfDigits(n);
                break;
            case 7:
                break;
            default:
                printf("Invalid Input!!");
                break;
        }
    }while(opt!=7);

    return 0;
}


void prime(int n){
    if(n==1){
        printf("Not prime");
        return;
    }
    int prime = 1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("Prime number\n");
    }else{
        printf("Not Prime number\n");
    }
}

void palindrome(int n){
    int rev = 0;
    int copy = n;
    while(copy>0){
        rev = rev*10 + copy%10;
        copy = copy/10;
    }
    if(rev == n){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
}

void armstrong(int n){
    int copy = n;
    int count = 0;
    int armstrong=0;
    while(copy>0){
        copy = copy/10;
        count+=1;
    }
    copy = n;
    while(copy>0){
        int num1 = copy%10;
        int num2 = 1;
        for(int i=1; i<=count; i++){
            num2 = num2*num1;
        }
        armstrong = armstrong+num2;
        copy = copy/10;
    }
    if(armstrong == n){
        printf("Armstrong number\n");
    }else{
        printf("Not Armstrong number\n");
    }
}

void factorial(int n){
    int fac = 1;
    for(int i=n; i>1;i--){
        fac = fac*i;
    }
    printf("Factorial= %d\n", fac);
}

void fibonacci(int n){
    int first=0, second=1;
    for(int i=0; i<n; i++){
        if(i==0){
            printf("%d ", first);
            continue;
        }
        printf("%d ",second);
        int temp = second;
        second = second+first;
        first = temp;
    }
    printf("\n");
}

void sumOfDigits(int n){
    int sum = 0;
    int copy = n;
    while(copy>0){
        sum = sum+copy%10;
        copy = copy/10;
    }
    printf("Sum of digits: %d\n", sum);
}
