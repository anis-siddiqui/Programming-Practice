#include<iostream>

using namespace std;

int main(){
    int n1,n2;
    char ope;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter operator('+' , '-' , '*' , '/'): ";
    cin >> ope;
    switch(ope){
        case '+':
            cout << "Sum = " << n1+n2 << endl;
            break;
        case '-': 
            cout << "substraction = " << n1-n2 << endl;
            break;
        case '*': 
            cout << "Multiplication = " << n1*n2 << endl;
            break;
        case '/': 
            if(n2==0){
                cout << "Division by zero is not allowed";
            }else{
                cout << "Division = " << (double)n1/n2 << endl;
            }
            break;
        default:
            cout << "Invalid input!!" << endl;
    }
    return 0;
}
