#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("Enter a string : ");
    if(fgets(str , sizeof(str) , stdin) == NULL){
        printf("Invalid input!!\n");
        return 1;
    }
    str[strcspn(str , "\n")] = '\0';
    printf("Original String = \"%s\"\n" , str);

    int len = strlen(str);
    for(int i = 0 ; i<len ; i++){
        if(str[i] >= 'A' && str[i] <='Z'){
            str[i] += 32;
        }else if(str[i] >= 'a' && str[i] <='z'){
            str[i] -= 32;
        }
    }
    printf("After toggle each character, String = \"%s\"\n" , str);

    return 0;
}