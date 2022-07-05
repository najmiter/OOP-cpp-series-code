#include <iostream>
using namespace std;

class Subscribers{
    int age; 
    mutable char gender;
    string name;
    public:
        Subscribers(){}
        Subscribers(string n) : name(n){}
        
        void eligibility(string s)const{
            int t;
            t = age;

        }    
};


int main(){

    Subscribers obj;
    return 0;
}