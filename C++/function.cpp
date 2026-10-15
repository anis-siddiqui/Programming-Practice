#include<iostream>

using namespace std;

void print_num();
int main(){
    print_num();
    return 0;
}
void print_num(){
    for(int i = 100;  i>=0; i--){
        cout << i << endl;
    }
}