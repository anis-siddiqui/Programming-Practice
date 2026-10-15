// #include <stdio.h>
// #define MAXSIZE 10
// int queue[MAXSIZE] , rear = -1 , front = 0;
// void insert();
// void delete1();
// void display();

// int main(){
//     int choice;
//     do{
//         printf("\n---------------QUEUE MENU---------------\n");
//         printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
//         printf("----------------------------------------\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1: insert(); break;
//             case 2: delete1(); break;
//             case 3: display(); break;
//             case 4: break;
//             default: printf("Invalid choice!!\n"); break;
//         }
//     }while(choice!=4);
//     printf("Successfully Exit!!\n");
//     return 0;
// }

// void insert(){
//     int n;
//     if(rear==MAXSIZE-1){
//         printf("Queue is overflow!!\n");
//     }else{
//         printf("Enter an element: ");
//         scanf("%d", &n);
//         rear++;
//         queue[rear] = n;
//     }
// }

// void delete1(){
//     int n;
//     if(rear<front){
//         printf("Queue is empty!!\n");
//     }else{
//         n = queue[front];
//         printf("Elment %d is deleted!!\n", n);
//         front++;
//     }
// }

// void display(){
//     if(rear<front){
//         printf("Queue is empty!!\n");
//     }else{
//         printf("Elements of queue:");
//         for(int i = rear ; i>=front ; i--){
//             printf("%5d", queue[i]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear = -1 , front = 0;
void insert();
void delete1();
void display();

int main(){
    int choice;

    do{
        printf("---------------QUEUE MENU---------------");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: insert(); break;
            case 2: delete1(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice"); break;
        }
    }while(choice!=4);
    printf("Exit successfully!!\n");
    return 0;
}


void insert(){
    int n;
    if(rear == MAXSIZE-1){
        printf("Queue is overflow!!\n");
    }else{
        printf("Enter an element: ");
        scanf("%d", &n);
        rear++;
        queue[rear] = n;
    }
}
void delete1(){
    int n;
    if(front>rear){
        printf("Queue is empty!!\n");
    }else{
        n = queue[front];
        front++;
        printf("Element %d is deleted!!\n", n);
    }
}
void display(){
    if(front>rear){
        printf("Queue is empty!!\n");
    }else{
        printf("Elements of queue: ");
        for(int i = rear ; i>=front ; i--){
            printf("%5d", queue[i]);
        }
        printf("\n");
    }
}