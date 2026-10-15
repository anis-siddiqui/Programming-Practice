#include <stdio.h>

void clearBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

// Return maximum number from array
int max(int arr[], int n){
    int maximum = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}

// Return miniimum number from array
int min(int arr[], int n){
    int minimum = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}

// Return sum of every elements
int sum(int arr[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];

    }
    return sum;
}

int main(){
    int n,even_count=0,odd_count=0;

    // Numbers of input for operations
    printf("Enter how many numbers you want to enter: ");
    scanf("%d",&n);
    clearBuffer();

    // For Input numbers
    printf("Enter numbers: ");
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    // For Even Odd count
    for(int i=0; i<n ; i++){
        if(arr[i]%2==0){
            even_count += 1;
        }else{
            odd_count += 1;
        }
    }

    // Printing Operations
    printf("Maximum: %d\n", max(arr,n));
    printf("Minimum: %d \n", min(arr,n));
    printf("Sum: %d \n", sum(arr,n));
    printf("Average: %.2f \n", (float)sum(arr,n)/n);
    printf("Evens: %d \n", even_count);
    printf("Odds: %d \n", odd_count);

    return 0;
}