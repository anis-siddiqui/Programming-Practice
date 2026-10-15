// Search for an element in an array by checking each element
// one by one. Print the index where the element is found, or
// indicate if it's not present.
// Example :
// Input : arr = {5, 12, 34, 56, 78}, key = 34
// Output : Element found at index: 2

#include <stdio.h>

int main(){
    int size , key;
    printf("Enter size of array : ");
    if(scanf("%d" , &size) != 1){
        printf("Invalid input!! \n");
        return 1;
    }
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        printf("Element %d = " , i+1);
        if(scanf("%d" , &arr[i]) != 1){
            printf("Invalid input! \n ");
            return 1;
        }
    }
    printf("Enter key to find element : ");
    if(scanf("%d" , &key) != 1){
        printf("Invalid input!\n");
        return 1;
    }
    for(int i = 0 ; i<size ; i++){
        if(arr[i] == key){
            printf("Element %d found at index %d\n" , key , i);
        } 
        if(i == size-1){
            if(arr[i] != key){
                printf("Element %d not found in array" , key);
            }
        }
    }
    return 0;
}