#include <iostream>
using namespace std;

class test{
    public:
        int a, b;
        int arr[10];
};

void display(test& t2){ // test& t2 = t3;
    t2.a = 43;
    t2.b = 13;
    /* cout<< "The value of a is " << t2.a << endl;
    cout<< "The value of b is " << t2.b << endl; */
}

int main(){
    int a =10;
    int& b = a;
    

    /* test t1; // declare
    t1.a[0] = 10;
    t1.b = 20;
    cout<< "The value of a is " << t1.a[0] << endl;
    cout<< "The value of b is " << t1.b << endl; */

    test t3;
    display(t3);

    cout<< "\n\nBACK TO MAIN" << endl;
    cout<< "The value of a is " << t3.a << endl;
    cout<< "The value of b is " << t3.b << endl;



    return 0;
}