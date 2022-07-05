#include <iostream>
using namespace std;

class constructors{
    int a, b;
    int getA(){return a;}
    int getB(){return b;}
    public:
        constructors(){
            a = 10;
            b = 20;
            cout<< "The value of a is " << getA() << endl;
            cout<< "The value of b is " << getB() << endl;

        }

};

int main(){
    constructors obj;

    
    return 0;
}