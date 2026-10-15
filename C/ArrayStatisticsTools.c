#include <stdio.h>

// void print(int num[] , int size);
void sum(int num[] , int size);
void avg(int num[] , int size);
void max(int num[] , int size);
void min(int num[] , int size);

int main(){
    int size , opt;

    printf("Enter size of your array : ");   
    if(scanf("%d" , &size) != 1){
        printf("Invalid input! \n");
        return 1;
    }
    if(size<=0){
        printf("Size must be positive!! \n");
        return 1;
    }
 

    int num[size];
    for(int i = 0; i<size ;i++){
        printf("Enter Element %d = " , i+1);
        if(scanf("%d" , &num[i]) != 1){
            printf("Invalid input! \n");
            return 1;
        }
    }
    printf("Size of your array is = %d\n" , size);

    do{
        printf("\nWhat operation do you want to perform on array :- \n");
        printf("1.Addition \n2.Average \n3.Maximum \n4.Minimum \n5.Exit\n");
        printf("Enter choice : ");
        
        if(scanf("%d" , &opt) != 1){
            printf("Invalid input! \n");
            return 1;
        }
        switch(opt){
            case 1:
                sum(num , size);
                break;
            case 2:
                avg(num , size);
                break;
            case 3:
                max(num , size);
                break;
            case 4:
                min(num , size);
                break;
            case 5:
                printf("Exiting.... \n");
                break;
            default:
                printf("Invalid operation! \n");
                break;
        }
        
    }while(opt != 5);

    printf("Exit Successfully! \n");

    // print(num , size);

    return 0;
}


// void print(int num[] , int size){
//     for(int i = 0 ; i<size ; i++){
//         printf("Element %d = %d\n" , i+1 , num[i]);
//     }
// }


void sum(int num[] , int size){
    int sum = 0 ;
    for(int i = 0 ; i<size ; i++){
        sum = sum + num[i];
    }
    printf("Sum = %d\n\n" , sum);
}

void avg(int num[] , int size){
    float sum = 0 ;
    for(int i = 0 ; i<size ; i++){
        sum = sum + num[i];
    }
    float avg = sum/size;
    printf("Average = %.2f\n\n" , avg);
}

void max(int num[] , int size){
    int max = num[0];
    for(int i=0 ; i<size ; i++){
        if(max<num[i]){
            max = num[i];
        }
    }
    printf("Maximum = %d\n\n" , max);
}

void min(int num[] , int size){
    int min = num[0];
    for(int i=0 ; i<size ; i++){
        if(min>num[i]){
            min = num[i];
        }
    }
    printf("Minimum = %d\n\n" , min);
}