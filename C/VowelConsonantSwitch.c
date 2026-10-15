#include <stdio.h>

int main(){
    char ch ;
    printf("Enter a English character : ");
    scanf("%c" , &ch);

    switch(ch){
        case 'a':
            printf("Vowel!\n");
            break;
        case 'e':
            printf("Vowel!\n");
            break;
        case 'i':
            printf("Vowel!\n");
            break;
        case 'o':
            printf("Vowel!\n");
            break;
        case 'u':
            printf("Vowel!\n");
            break;
        default:
            printf("Consonant!\n");
            break;
    }

    //2nd method 
    // switch(ch){
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //         printf("Vowel!\n");
    //         break;
    //     default:
    //         printf("Consonant!\n");
    //         break;
    // }
    return 0;
}