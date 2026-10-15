#include <stdio.h>
#include <math.h>

int main(){
    // Rectangle
    int length , width;
    printf("Enter length of Rectangle : ");
    if (scanf("%d" , &length) != 1){
        printf("Invalid length");
        return 1;
    }
    printf("Enter width of Rectangle : ");
    if (scanf("%d" , &width) != 1){
        printf("Invalid width");
        return 1;
    }
    int area = length*width , perimeter = 2*(length+width);
    printf("Area of Rectangle = %d\n" , area);
    printf("Perimeter of Rectangle = %d\n" , perimeter);


    // circle
    float radius , pi = 3.14;
    printf("Enter radius of circle : ");
    if (scanf("%f" , &radius) != 1) {
        printf("Invalid number");
        return 1;
    }
    float area = pi*radius*radius , circumference = 2*pi*radius;
    printf("Area of circle = %.2f\n" , area);
    printf("Circumference of circle = %.2f\n" , circumference);
    return 0;
}