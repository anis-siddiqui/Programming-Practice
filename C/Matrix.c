#include <stdio.h>

int main(){
    int rows , columns;
    printf("Enter number of rows in matrix : ");
    if(scanf("%d" , &rows) != 1){
        printf("Invalid input!!\n");
        return 1;
    } 
    if(rows<=0){
        printf("Number of rows must be positive!!");
        return 1;
    }

    printf("Enter number of columns in matrix : ");
    if(scanf("%d" , &columns) != 1){
        printf("Invalid input!!\n");
        return 1;
    }
    if(columns<=0){
        printf("Number of columns must be positive!!");
        return 1;
    }

    int matrix[rows][columns];

    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            printf("Enter Element A%d%d = " , i+1 , j+1);
            if(scanf("%d" , &matrix[i][j]) != 1){
                printf("Invalid input!!\n");
                return 1;
            }
        }
    }
    printf("Your Matrix :- \n");
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            printf("%d   " , matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}