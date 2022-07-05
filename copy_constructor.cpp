#include <iostream>
using namespace std;

class Test{
    private:
        int marks;
        char g;
    public:
        Test(){}
        Test(int ans) : marks(ans), g('A'){}

        Test(const Test& His){
            // unsigned int shpaeyshal = 5;
            marks = His.marks/* +shpaeyshal */;
            g = His.g;
            cout<< "hello there!" << endl;
        }

        void dis(){
            cout << "Obtained marks are: " << marks << endl;
            cout << "The grade is: " << g << endl;
        }
};

int main(){
    Test Ali(34);
    Test Huzaifa = Ali;
    Huzaifa.dis();



    return 0;
}