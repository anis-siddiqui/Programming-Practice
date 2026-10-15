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


    printf("Your original array = " );
    for(int i = 0 ; i<size ; i++){
        printf("%d " , arr[i]);
    }

    printf("\n\n");

    printf("Your array after Rotate by 1 left = ");
    int temp = arr[0];
    for(int i = 0 ; i<size ; i++){
        if(i == size-1){
            arr[i] = temp;
        }else{ 
            arr[i] = arr[i+1];
        }
        
    }

    for(int i = 0 ; i<size ; i++){
        printf("%d " , arr[i]);
    }
}