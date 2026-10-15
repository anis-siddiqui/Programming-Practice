#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(5,20);
    cout << *(v.begin()) << endl;
    // int it = v.begin();
    // while(it != v.end()){
    //     cout << *it << endl;
    // }


    return 0;
}