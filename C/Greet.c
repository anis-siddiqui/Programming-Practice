#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name , "\n")] = '\0';
    printf("Hello %s!!" , name);
    return 0;
}

// scanf("%[^\n]" , name); //By scanset replace line 7 and 8