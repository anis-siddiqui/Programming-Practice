#include <stdio.h>
#include <windows.h>
typedef int(*Func)(int,int);

int main(){
    HMODULE dll = LoadLibrary("MyMath.dll");
    Func add = (Func)GetProcAddress(dll , "add");
    Func sub = (Func)GetProcAddress(dll , "sub");
    Func mul = (Func)GetProcAddress(dll , "mul");
    Func divide = (Func)GetProcAddress(dll , "divide");
    
    int a = add(10 , 20);
    int b = sub(100 , 20);
    int c = mul(3 , 2);
    int d = divide(8 , 2);

    printf("%d\n" , a);
    printf("%d\n" , b);
    printf("%d\n" , c);
    printf("%d\n" , d);
}