#include <stdio.h>

int main(){
    int lines;
    printf("Enter number of lines : ");
    if(scanf("%d" ,&lines) != 1){
        printf("Invalid input !!");
        return 1;
    }

    //Right-Triangle star pattern
    // for(int i = 1 ; i<=lines ; i++){
    //     for(int j = 1 ; j<=i ; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for(int i = 1 ; i<=lines ; i++){
    //     for(int j = lines ; j>=i ; j--){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    
    
    return 0;
}