#include <iostream>
using namespace std;
void prime();
 
int main(){
    prime();
    return 0;
}

void prime(){
    int i=2 ,j;
    while(i!=101){
        for(j = 2 ; j<i ; j++){
           if(i%j == 0){
               break;
            }
        }
        if(j==i){
            cout << i << " ";
        }
        i++;
    }
}