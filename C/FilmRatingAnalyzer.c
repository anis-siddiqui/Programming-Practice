#include <stdio.h>

int main(){
    float rating;
    printf("Enter rating of film (0-10) : ");
    if(scanf("%f" , &rating) != 1){
        printf("Invalid Rating");
        return 1;
    }
    
    if(rating>=0.0 && rating<5.0){
        printf("Poor");
    }else if(rating>=5.0 && rating<6.0){
        printf("Below Average");
    }else if(rating>=6.0 && rating<7.0){
        printf("Average");
    }else if(rating>=7.0 && rating<8.0){
        printf("Good");
    }else if(rating>=8.0 && rating<9.0){
        printf("Excellent");
    }else if(rating>=9.0 && rating<=10){
        printf("Masterpiece");
    }else{
        printf("Invalid rating");
    }
    return 0;
}