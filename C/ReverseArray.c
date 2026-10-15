// #include <stdio.h>

// int main(){
//     int size;
//     printf("Enter size of array : ");
//     if(scanf("%d" , &size) != 1){
//         printf("Invalid input!!\n");
//         return 1;
//     }
//     if(size <= 0){
//         printf("Size must be positive!\n");
//         return 1;
//     }
//     int arr[size];
//     for(int i = 0 ; i<size ; i++){
//         printf("Enter element %d = " , i+1);
//         if(scanf("%d" , &arr[i]) != 1){
//             printf("Invalid input!!\n");
//             return 1;
//         }
//     }

// PRINT IN REVERSE ORDER
//     printf("Your array in revrse order : \n");
//     for(int i = size-1 ; i>=0 ; i--){
//         printf("Element %d = %d\n" , i+1 , arr[i]);
//     }
//     return 0;
// }



#include <stdio.h>

int main(){
    int size;

    printf("Enter size of array : ");
    if(scanf("%d" , &size) != 1){
        printf("Invalid input!!\n");
        return 1;
    }
    if(size <= 0){
        printf("Size must be positive!\n");
        return 1;
    }

    int arr[size];
    for(int i = 0 ; i<size ; i++){
        printf("Enter element %d = " , i+1);
        if(scanf("%d" , &arr[i]) != 1){
            printf("Invalid input!!\n");
            return 1;
        }
    }

    int j=size-1;
// REVERSE BY SWAPPING
    for(int i = 0 ; i<size/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    for(int i = 0 ; i<size ; i++){
        printf("Element %d = %d\n" , i+1 , arr[i]);
    }

    
    return 0;
}