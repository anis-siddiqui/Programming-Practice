#include <stdio.h>

int main(){
    int per ;
    printf("Enter a Percentage(0-100) : ");
    if (scanf("%d" , &per) != 1){
        printf("Invalid input\n");
        return 1;
    }

    if(per>100 || per<0){
        printf("Percentage is out of range!!\n");
    }else if(per>=90){
        printf("Grade : A (Pass)\n");
    }else if(per>=75){
        printf("Grade : B (Pass)\n");
    }else if(per>=65){
        printf("Grade : C (Pass)\n");
    }else if(per>=50){
        printf("Grade : D (Pass)\n");
    }else if(per>=33){
        printf("Grade : E (Pass)\n");
    }else{
        printf("Grade : F (Fail)\n");
    }
    
    return 0;
}