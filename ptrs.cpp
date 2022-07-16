#include <iostream>
using namespace std;
int main(){
    int a;
    int *dost;

    dost = & a;
    *dost = 54;
    cout<< a << endl;
    // cout<< *dost << endl;

    // cout<< &dost << endl;
    // cout<< &a << endl;

    int b = 232;
    dost = & b;
    *dost = 77;
    cout<< b << endl;

    return 0;
}