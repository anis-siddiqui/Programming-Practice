#include <iostream>
#include <string>
using namespace std;

class vehicle{


    public:
    string name;
    string model;
    int noOfTyre;


    private:
    



    protected:




    public:
    vehicle(string name , string model , int noOfTyre){
        this->name = name;
        this->model = model;
        this->noOfTyre = noOfTyre;
        cout << "Class Constructed" << endl;
    }

    ~vehicle(){
        cout << "Class Destructed" << endl;
    }
    void start(){
        cout << "Start" << endl;
    }

    void stop(){
        cout << "Stop" << endl;
    }



    private:
    
    protected:
};


int main(){
    vehicle *v = new vehicle("Mahindra Thar" , "4X4" , 4);
    v->start();
    v->stop();

    delete v;
    return 0;
}
