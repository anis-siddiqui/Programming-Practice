#include <stdio.h>
#define PI 3.14

int main(){
    int radius;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    printf("Area of circle = %.2f\n", PI*radius*radius);
    return 0;
}