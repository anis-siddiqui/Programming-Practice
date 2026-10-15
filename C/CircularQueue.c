// #include <stdio.h>
// #define MAXSIZE 10
// int cq[MAXSIZE];
// int rear = -1 , front = -1;
// void insert();
// void delete1();
// void display();

// int main(){
//     int choice;
//     do{
//         printf("---------------CIRCULAR QUEUE MENU---------------\n");
//         printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
//         printf("---------------------------------------------\n");
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
//     return 0;
// }


// void insert(){
//     int n;
//     if((rear+1)%MAXSIZE == front){
//         printf("Queue is overflow!!\n");
//     }else{
//         printf("Enter an element: ");
//         scanf("%d", &n);
//         if(rear==-1 && front==-1){
//             rear = front = 0;
//         }else{
//             rear = (rear+1)%MAXSIZE;
//         }
//         cq[rear] = n;
//     }
// }

// void delete1(){
//     int n;
//    if(rear == -1 && front == -1){
//         printf("Queue is empty!!\n");
//    }else{
//         n = cq[front];
//         printf("Element %d is deleted!!\n", n);
//         if(rear==front){
//             front = rear = -1;
//         }else{
//             front = (front+1)%MAXSIZE;
//         }
//     }
// }
// void display(){
//     int i;
//     if(rear == -1 && front == -1){
//         printf("Queue is empty!!\n");
//     }else{
//         int i;
//         printf("Elements of queue: ");
//         for(i = front ; i!=rear ; i=(i+1)%MAXSIZE){
//             printf("%5d", cq[i]);
//         }
//         printf("%5d\n", cq[i]);
//     }
// }



#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear = -1 , front = -1;
void insert();
void delete1();
void display();

int main(){
    int choice;

    do{
        printf("---------------CIRCULAR QUEUE MENU---------------");
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
    if((rear+1)%MAXSIZE == front){
        printf("Queue is overflow!!\n");
    }else{
        if(rear == -1 , front == -1){
            rear = 0;
            front = 0; 
        }else{
            rear = (rear+1)%MAXSIZE;
        } 
        printf("Enter an element: ");
        scanf("%d", &n);
        queue[rear] = n;
    }
}

void delete1(){
    int n;
    if(rear == -1 && front == -1){
        printf("Queue is empty!!\n");
    }else{
        n = queue[front];
        printf("Element %d is deleted!!\n", n);
        if(rear == front){
            rear = -1;
            front = -1;
        }else{
            front = (front+1)%MAXSIZE;
        }
    }
}
void display(){
    if(rear == -1 && front == -1){
        printf("Queue is empty!!\n");
    }else{
        int i;
        printf("Elements of queue: ");
        for(i=rear ; i!=front ; i = (i+1)%MAXSIZE){
            printf("%d", queue[i]);
        }
        printf("%d", queue[i]);

    }
}