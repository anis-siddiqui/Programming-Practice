#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter a string : ");
    if(scanf("%[^\n]s" , str) != 1){
        printf("Invalid input !! \n");
        return 1;
    }
    printf("Your String is \"%s\" and its length is %zu\n" , str , strlen(str)); 
// %zu because strlen() returns a value of type size_t.
// 'z' is the length modifier for size_t and 'u' means unsigned integer.
// Length can never be negative, so size_t is an unsigned type.
    return 0;
}