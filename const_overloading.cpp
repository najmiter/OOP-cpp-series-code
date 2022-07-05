#include <iostream>
using namespace std;

class constructors
{
int a ,b;
public:
    constructors(){cout<< "default" << endl;}
    constructors(int x, int y){
        a = x;
        b = y;
        cout<< "\n\nPARAMETERIZED CONSTRUCTOR CALLED!" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main(){
    constructors obj1(2, 4);
    cout<< "-------------------" << endl;
    constructors obj2(1, 9);
    cout<< "-------------------" << endl;
    constructors obj3(9, 67);
    return 0;
}