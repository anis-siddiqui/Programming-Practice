#include <iostream>

float si(int amount , int rate , int time);

int main(){
    int amount, rate, time;
    float sInt;
    std::cout << "Enter amount: ";
    std::cin >> amount;
    std::cout << "Enter rate: ";
    std::cin >> rate;
    std::cout << "Enter time: ";
    std::cin >> time;
    sInt = si(amount, rate, time);
    std::cout <<"Your simple interest = " << sInt << std::endl;
    std::cout << "Your total amount = " << amount + sInt;
    return 0;
}

float si(int amount , int rate , int time){
    return (amount*rate*time)/100.0;
}
