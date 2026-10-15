#include <stdio.h>

int main(){
    int rows , columns , MainD=0 , secD=0 ;
    printf("Enter number of rows or columns of Square matrix : ");
    if(scanf("%d" , &rows) != 1){
        printf("Invalid input!!\n");
        return 1;
    } 
    if(rows<=0){
        printf("Number of rows must be positive!!");
        return 1;
    }

    columns = rows;

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
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            if(i==j){
                MainD+=matrix[i][j];
            }
            if(i+j==rows-1){
                secD+=matrix[i][j];
            }
        }
    }
    printf("Sum of Main Diagonal = %d\n" , MainD);
    printf("Sum of Secondary Diagonal = %d\n" , secD);
}
// #include <stdio.h>

// int main(){
//     int rows , columns , sum=0 ;
//     printf("Enter number of rows or columns of Square matrix : ");
//     if(scanf("%d" , &rows) != 1){
//         printf("Invalid input!!\n");
//         return 1;
//     } 
//     if(rows<=0){
//         printf("Number of rows must be positive!!");
//         return 1;
//     }

//     columns = rows;

//     int matrix[rows][columns];

//     for(int i=0 ; i<rows ; i++){
//         for(int j=0 ; j<columns ; j++){
//             printf("Enter Element A%d%d = " , i+1 , j+1);
//             if(scanf("%d" , &matrix[i][j]) != 1){
//                 printf("Invalid input!!\n");
//                 return 1;
//             }
//         }
//     }
//     for(int i=0 ; i<rows ; i++){
//         for(int j=0 ; j<columns ; j++){
//             if(i==j || i+j==rows-1){
//                 sum+=matrix[i][j];
//             }
//         }
//     }
//     printf("Sum of Diagonals = %d" , sum);
// }