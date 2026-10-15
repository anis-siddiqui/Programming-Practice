// #include <stdio.h>

// //Functions declarations
// int sum(int a , int b);
// int min(int a , int b);
// int max(int a , int b);
// void evenOdd(int a);
// int factorial(int a);


// //Main Function
// int main(){
//     int input , a ,b;
    
//     do{
//         printf("Choose any option :-\n 1. Sum\n 2. Min\n 3. Max\n 4. Even or Odd\n 5. Factorial\n 6. Exit\n  Choice : ");

//         if (scanf("%d" , &input) != 1){
//             printf("\nInvalid input !!\n");
//             return 1;
//         }

//         printf("\n");

//         switch(input){
//             case 1:
//                 printf("Enter two number a and b : ");
//                 if(scanf("%d %d" , &a , &b) != 2){
//                     printf("\nInvalid input!!");
//                     return 1;
//                 }
//                 printf("Sum = %d\n\n" , sum(a , b));
//                 break;

//             case 2:
//                 printf("Enter two number a and b : ");
//                 if(scanf("%d %d" , &a , &b) != 2){
//                     printf("\nInvalid input!!");
//                     return 1;
//                 }
//                 printf("Min = %d\n\n" , min(a , b));
//                 break;

//             case 3:
//                 printf("Enter two number a and b : ");
//                 if(scanf("%d %d" , &a , &b) != 2){
//                     printf("\nInvalid input!!");
//                     return 1;
//                 }
//                 printf("Max = %d\n\n" , max(a , b));
//                 break;

//             case 4:
//                 printf("Enter a number a : ");
//                 if(scanf("%d" , &a) != 1){
//                     printf("\nInvalid input!!");
//                     return 1;
//                 }
//                 printf("Answer = ");
//                 evenOdd(a);
//                 printf("\n\n");
//                 break;

//             case 5:
//                 printf("Enter a number a : ");
//                 if(scanf("%d" , &a) != 1){
//                     printf("\nInvalid input!!");
//                     return 1;
//                 }
//                 printf("Factorial = %d\n\n" , factorial(a));
//                 break;

//             case 6:
//             break;
            
//             default:
//             printf("\nInvalid Choice!!\n\n");
//             break;
            
//         }
        
//     }while(input != 6);
    
//     printf("Successfully Exit");

//     return 0;
// }




// //FUNCTIONS IMPLEMENTATIONS

// //Sum
// int sum(int a , int b){
//     return a+b;
// }



// //Minimum
// int min(int a , int b){
//     int c;
//     if(a<=b)return a;
//     return b;
// }



// //Maximum 
// int max(int a , int b){
//     int c;
//     if(a>=b) return a;
//     return b;
// }



// //Even or Odd
// void evenOdd(int a){
//     if(a%2 == 0){
//         printf("Even");
//     }else{
//         printf("Odd");
//     }
// }



// //Factorial
// int factorial(int a){
//     int c = 1;
//     for(int i = 1 ; i<=a ; i++){
//         c = c*i;
//     }
//     return c;
// }









// 2nd method(Clean method)


#include <stdio.h>
#include <math.h>

//Functions declaration


void sub();
void mul();
void division();
void max();
void min();
void factorial();
void sqroot();
void power();
void evenOdd();



int main(){
    int opt;
    printf("---------------CLI UTILITY TOOLKIT---------------\n\n");
    do{
        printf("Options:-\n");
        printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Maximum\n6.Minimum\n7.Factorial\n8.SquareRoot\n9.Power\n10.Even or Odd\n11.Exit\n");

        printf("Enter a option : ");
        if(scanf("%d" , &opt) != 1){
            printf("\nInvalid option!!");
            return 1;
        }

        switch(opt){
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                division();
                break;
            case 5:
                max();
                break;
            case 6:
                min();
                break;
            case 7:
                factorial();
                break;
            case 8:
                sqroot();
                break;
            case 9:
                power();
                break;
            case 10:
                evenOdd();
                break;
            case 11:
                break;
            default:
                printf("Wrong option!!");
                break;
        }
    }while(opt != 11);

    printf("Successfully Exit!!");

    return 0;
}



//Functions implementation

void add(){
    int a , b;
    printf("Enter two number a and b : ");
    if(scanf("%d %d" , &a , &b) != 2){
        printf("\nInvalid input!!");
        return;
    } 
    printf("Addition of number %d and %d = %d\n\n" , a , b , a+b);
}


void sub(){
    int a , b;
    printf("Enter two number a and b : ");
    if(scanf("%d %d" , &a , &b) != 2){
        printf("\nInvalid input!!");
        return;
    } 
    printf("Substraction of number %d and %d = %d\n\n" , a , b , a-b);
}


void mul(){
    int a , b;
    printf("Enter two number a and b : ");
    if(scanf("%d %d" , &a , &b) != 2){
        printf("\nInvalid input!!");
        return;
    } 
    printf("Multiplication of number %d and %d = %d\n\n" , a , b , a*b);
}


void division(){
    float a , b;
    printf("Enter two number a and b : ");
    if(scanf("%f %f" , &a , &b) != 2){
        printf("\nInvalid input!!");
        return;
    } 
    if(b==0){
        printf("Cannot divide by zero\n\n");
    }else{
        printf("Division of number %.2f by %.2f = %.2f\n\n" , a , b , a/b);
    }
}


void max(){
    int a , b;
    printf("Enter two number a and b : ");
    if(scanf("%d %d" , &a , &b) != 2){
        printf("\nInvalid input!!");
        return;
    } 
    printf("Maximum number is = %d\n\n" , a>=b ? a : b);
}

 
void min(){
    int a , b;
    printf("Enter two number a and b : ");
    if(scanf("%d %d" , &a , &b) != 2){
        printf("\nInvalid input!!");
        return;
    } 
    printf("Minimum number is = %d\n\n" , a<=b ? a : b);
}


void factorial(){
    int a , b = 1;
    printf("Enter a number  : ");
    if(scanf("%d" , &a) != 1){
        printf("\nInvalid input!!");
        return;
    } 
    if(a<0){
        printf("\nInvalid input!\n\n");
        return;
    }else{
        for(int i = 1 ; i<=a ; i++){
            b = b*i;
        }
        printf("Factorial of number %d = %d\n\n" , a , b);
    }
}


void sqroot(){
    int a;
    printf("Enter a number  : ");
    if(scanf("%d" , &a) != 1){
        printf("\nInvalid input!!");
        return;
    } 
    printf("SquareRoot of number %d = %.2f\n\n" , a , sqrt(a));
}


void power(){
    int a , b;
    printf("Enter a number (first number then power): ");
    if(scanf("%d %d" , &a , &b) != 2){
        printf("\nInvalid input!!");
        return;
    } 
    printf("Number %d's power %d = %.2f\n\n" , a , b , pow(a , b));

}


void evenOdd(){
    int a;
    printf("Enter a number  : ");
    if(scanf("%d" , &a) != 1){
        printf("\nInvalid input!!");
        return;
    } 
    printf("Number %d is = %s\n\n" , a , a%2==0 ? "Even" : "odd");
}

