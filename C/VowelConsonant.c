#include <stdio.h>

int main(){
    char ch;
    printf("Enter a English character : ");
    scanf("%c" , &ch) 
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Your character is Vowel.");
    }else{
        printf("Your character is Consonant.");
    }
    return 0;
}