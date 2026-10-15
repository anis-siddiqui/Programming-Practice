#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *add;
}Node;
Node *start = NULL , *temp, *newNode, *prev, *next;

void create();
void insOnFirst();
void insOnMiddle();
void insOnLast();
void delOnFirst();
void delOnMiddle();
void delOnLast();
void display();
void count();
void search();



int main(){
    int choice;
    do{
        printf("\n---------------LinkedList Menu---------------\n");
        printf("1.Create\n2.Insert on first\n3.Insert on middle\n4.Insert on last\n5.Delete on first\n6.Delete on middle\n7.Delete on last\n8.Display\n9.Length of list\n10.Search an element\n11.Exit\n");
        printf("---------------------------------------------\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: create(); break;
            case 2: insOnFirst(); break;
            case 3: insOnMiddle(); break;
            case 4: insOnLast(); break;
            case 5: delOnFirst(); break;
            case 6: delOnMiddle(); break;
            case 7: delOnLast(); break;
            case 8: display(); break;
            case 9: count(); break;
            case 10: search(); break;
            case 11: break;
            default: printf("Invalid option!!\n"); break;
        }
    }while(choice!=11);
    printf("Exit Successfully!!\n");
    return 0;
}



void create(){
    int n ;
    char cont;
    if(start != NULL){
        printf("List already exists!!\n");
        return;
    }  
    printf("Enter a number: ");
    scanf("%d", &n);
    start = (Node*)malloc(sizeof(Node));
    start -> data = n;
    start -> add = NULL;
    temp = start;
    printf("Want to continue?((Yes->Y or y) (No->N or n) ): ");
    scanf(" %c", &cont);
    while(cont!='N' && cont!='n'){
        printf("Enter new number: ");
        scanf("%d", &n);
        newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = n;
        newNode -> add = NULL;
        temp -> add = newNode;
        temp = newNode;
        printf("Want to continue?((Yes->Y or y) (No->N or n) ): ");
        scanf(" %c", &cont);
    }
}



void insOnFirst(){
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        int n;
        printf("Enter new number for insert: ");
        scanf("%d", &n);
        newNode = malloc(sizeof(Node));
        newNode -> data = n;
        newNode -> add = start;
        start = newNode;
    }
}



void insOnMiddle(){
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        int n, pos, i=1;
        printf("Enter new number for insert: ");
        scanf("%d", &n);
        newNode = malloc(sizeof(Node));
        newNode -> data = n;
        newNode -> add = NULL;
        printf("Enter number of position: ");
        scanf("%d", &pos);
        next = start;
        while(i<pos){
            prev = next;
            next = next->add;
            i++;
        }
        prev -> add = newNode;
        newNode -> add = next;
        
    }
}



void insOnLast(){
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        int n;
        printf("Enter new number for insert: ");
        scanf("%d", &n);
        newNode = malloc(sizeof(Node));
        newNode -> data = n;
        newNode -> add = NULL;
        temp = start;
        while(temp -> add != NULL){
            temp = temp -> add;
        }
        temp -> add = newNode;
    }
}



void delOnFirst(){
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        temp = start;
        start = start -> add;
        printf("Deleted node is %d", temp->data);
        free(temp);
    }
}



void delOnMiddle(){
    int pos , i = 1;
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        printf("Enter number of position to delete node: ");
        scanf("%d", &pos);
        next = start;
        while(i!=pos){
            prev = next;
            next = next -> add;
            i++;
        }
        temp = next;
        prev -> add = next ->add;
        printf("Deleted node is %d", temp -> data);
        free(temp);
   }
}



void delOnLast(){
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        temp = start;
        while(temp -> add != NULL){
            prev = temp;
            temp = temp->add;
        }
        printf("Deleted node is %d", temp->data);
        prev -> add = NULL;
        free(temp);
    }
}



void display(){
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        temp = start;
        printf("Elements of LinkedList: ");
        while(temp != NULL){
            printf("%5d" , temp -> data);
            temp = temp -> add;
        }
    }
}



void count(){
    int count = 0;
    temp = start;
    while(temp != NULL){
        count++;
         temp = temp -> add;
    }
    printf("Length of list is %d", count);
}


void search(){
    int s , f = 0;
    if(start == NULL){
        printf("List not found!!\n");
    }else{
        printf("Enter element to search: ");
        scanf("%d", &s);
        temp = start;
        while(temp != NULL){
            if(s==temp->data){
                f=1;
                break;
            }
            temp = temp->add;
        }

        if(f==1){
            printf("Element %d found in list\n", s);
        }else{
            printf("Element %d not found\n", s);
        }
    }
}