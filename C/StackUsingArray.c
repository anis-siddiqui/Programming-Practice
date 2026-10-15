// #include <stdio.h>
// #define MAXSIZE 10
// int stack[MAXSIZE] ,top = -1;
// void push();
// void pop();
// void display();

// int main(){
//     int choice;
//     do{
//         printf("---------------STACK MENU---------------\n");
//         printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
//         printf("----------------------------------------\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1: push(); break;
//             case 2: pop(); break;
//             case 3: display(); break;
//             case 4: break;
//             default: printf("Invalid choice!!\n"); break;
//         }
//     }while(choice!=4);
//     printf("Exit successfully!!\n");
//     return 0;
// }

// void push(){
//     int n;
//     if(top == MAXSIZE-1){
//         printf("\nStack is overflow!!\n");
//     }else{
//         printf("\nEnter an element: ");
//         scanf("%d", &n);
//         top++;
//         stack[top] = n;
//     }
// }

// void pop(){
//     int n;
//     if(top == -1){
//         printf("\nStack is empty!!\n");
//     }else{
//         n = stack[top];
//         printf("\nElement %d is popped!!\n", n);
//         top--;
//     }
// }

// void display(){
//     if(top == -1){
//         printf("\nStack is empty!!\n");
//     }else{
//         printf("\nElements of stack\n");
//         for(int i = top ; i>=0 ; i--){
//             printf("%d\n" , stack[i]);
//         }
//     }
// }







#include <stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE];
int top = -1;
void push();
void pop();
void display();

int main(){
    int choice;
    do{
        printf("---------------STACK MENU---------------\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice!!\n"); break;
        }
    }while(choice!=4);
    printf("Exit successfully!!\n");
    return 0;
}

void push(){
    int n;
    if(top == MAXSIZE-1){
        printf("Stack is overflow!!\n");
    }else{
        printf("Enter an element: ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}
void pop(){
    int n;
    if(top == -1){
        printf("Stack is empty!!\n");
    }else{
        n = stack[top];
        printf("Element %d is popped!!\n", n);
        top--;
    }
}
void display(){
    if(top == -1){
        printf("Stack is empty!!\n");
    }else{
        printf("Elements of stack: ");
        for(int i = top ; i>=0 ; i--){
            printf("%5d", stack[i]);
        }
    }
}