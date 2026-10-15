#include <iostream>

using namespace std;

int main(){
    int month;
    cout << "Enter Month number:";
    cin >> month;
    switch(month){
        case 1:
            cout << "Month = January \nDays = 31";
            break;
        case 2:
            cout << "Month = February \nDays = 28";
            break;
        case 3:
            cout << "Month = March \nDays = 31";
            break;
        case 4:
            cout << "Month = April \nDays = 30"; 
            break;
        case 5:
            cout << "Month = May \nDays = 31";
            break;
        case 6:
            cout << "Month = June \nDays = 30"; 
            break;
        case 7:
            cout << "Month = July \nDays = 31";
            break;
        case 8:
            cout << "Month = August \nDays = 31";
            break;
        case 9:
            cout << "Month = September \nDays = 30";
            break;
        case 10:
            cout << "Month = October \nDays = 31";
            break;
        case 11:
            cout << "Month = November \nDays = 30";
            break;
        case 12:
            cout << "Month = December \nDays = 31";
            break;
        default: 
            cout << "Invalid Month!!";
            break;
    }
    return 0;
}
