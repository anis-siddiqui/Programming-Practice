#include <iostream>

using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks>=90 && marks<=100){
        cout << "Your grade is 'A' ";
    }else if(marks>=75 && marks<90){
        cout << "Your grade is 'B' ";
    }else if(marks>=60 && marks<75){
        cout << "Your grade is 'C' ";
    }else if(marks>=45 && marks<60){
        cout << "Your grade is 'D' ";
    }else if(marks>=33 && marks<45){
        cout << "Your grade is 'E' ";
    }else if(marks>=0 && marks<33){
        cout << "Your grade is 'F' and you are fail ";
    }else{
        cout << "Invalid marks!!";
    }
    return 0;
}