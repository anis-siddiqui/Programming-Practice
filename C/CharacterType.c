#include <stdio.h>

int main(){
    char ch ;
    printf("Enter a chaaracter : ");
    scanf("%c" , &ch);

    if(ch>='A' && ch<='Z'){
        printf("Uppercase letter");
    }else if(ch>='a' && ch<='z'){
        printf("Lowercase letter");
    }else if(ch>='0' && ch<='9'){
        printf("Number");
    }else{
        printf("Special symbol");
    }


    return 0;
}