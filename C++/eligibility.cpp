#include <iostream>

using namespace std;

int main(){
    int age;
    char gender , nation;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender(M->Male , F->Female): ";
    cin >> gender;
    cout << "Enter your nation(I->India , O->Other): ";
    cin >> nation;
    if(age>120 || age<=0){
        cout << "Invalid age!!";
    }else if(age<18){
        cout << "Minor you can't vote!!";
    }else if(gender=='M' && nation=='O'){
        cout <<"Hello Sir!!\nYou can't vote in India!!" << endl;
    }else if(gender=='F' && nation=='O'){
        cout <<"Hello Ma'am!!\nYou can't vote in India!!" << endl;
    }else if(gender=='M' && nation=='I'){
        cout <<"Hello Sir!!\nYou can vote in India!!" << endl;
    }else if(gender=='F' && nation=='I'){
        cout <<"Hello Ma'am!!\nYou can vote in India!!" << endl;
    }else{
        cout << "Invalid Gender or Nation!!";
    }
    return 0;
}