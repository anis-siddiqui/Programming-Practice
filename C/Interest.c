#include <stdio.h>
#include <math.h>

int main(){
    //Compund Interest & Simple Interest
    float a1 , p , r , t , ci , x , si , a2; 
    /*(a1 = amount (p*(1+r/100)^t || (p+ci))   ,   p = principal   ,   r = rate   ,   t = time   ,   ci = compund interest (a1-p)   ,     x = (1+r/100)^t   ,   si = simple interest ((p*r*t)/100)   ,   a2 = amount (p+si))   */

    //taking input
    printf("Enter principal : ");
    if (scanf("%f" , &p) != 1){
        printf("Invalid principal");
        return 1;
    }
    printf("Enter rate : ");
    if (scanf("%f" , &r) != 1){
        printf("Invalid rate");
        return 1;
    }
    printf("Enter time : ");

    if (scanf("%f" , &t) != 1){
        printf("Invalid time");
        return 1;
    }

    //calculating ci
    x = pow(1+(r/100) , t); 
    a1 = p*x;
    ci = a1-p;

    //calculating si
    si = (p*r*t)/100;
    a2 = p+si;


    printf("Compound interest = %.2f and Total amount = %.2f\n" , a1 , ci);
    printf("Simple interest = %.2f and Total amount = %.2f" , a2 , si);

    return 0;
}