#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter a string : ");
    if(fgets(str , sizeof(str) , stdin) == NULL){
        printf("Invalid input!!\n");
        return 1;
    }
    str[strcspn(str , "\n")] = '\0';
    int palindrome = 1;
    int len = strlen(str);
    int j = len - 1 ;
    for(int i = 0 ; i<len/2 ; i++){
        if(str[i] != str[j]){
            palindrome = 0;
            break;
        }
        j--;
    }
    if(palindrome){
        printf("Your String is palindrome \n");
    }else{
        printf("Your String is not palindrome \n");
    }

    return 0;
}