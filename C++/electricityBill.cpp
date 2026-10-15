#include<iostream>

using namespace std;

int main(){
    int unit, bill;
    cout << "Enter Unit: ";
    cin >> unit;
    if(unit<0){
        cout << "Invalid Unit!!";
    }else if(unit<=100){
        bill = 5*unit;
        cout << "Your Total bill is " << bill;
    }else if(unit<=200){
        bill = 7*unit;
        cout << "Your Total bill is " << bill;
    }else{
        bill = 10*unit;
        cout << "Your Total bill is " << bill;
    }
    return 0;
}