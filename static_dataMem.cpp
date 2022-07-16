#include <iostream>
using namespace std;

/* int scratches = 0;

void change(){
    scratches = 12;
} */

class Family{
    unsigned int pocketMoney;
    static int scratches;
    static int r;
    public:
        Family(){
            pocketMoney = 15000;
            scratches = 1;
        }
        void tellPocketMoney(){
            cout<< "\vMy pocket money was " << pocketMoney << endl;
            pocketMoney -= 5000;
            cout<< "I spent 5,000 of it and now I have " << pocketMoney << " pocket money left." << endl;
            cout<< "------------------" << endl;
        }

        void howManyScratches(){
            cout<< "There were " << scratches << " scratches before I added more." << endl;
            scratches+=41;
        }

        void random(int n){
            r = n;
        }

        void dis(){
            cout<< "The value of r is " << r << endl;

        }
};

int Family :: scratches;
int Family :: r;

int main(){
    // change();
    Family sib1, sib2, sib3, sib4;
    // sib1.tellPocketMoney();
    // sib2.tellPocketMoney();
    // sib3.tellPocketMoney();
    // sib4.tellPocketMoney();

    // sib1.howManyScratches();
    // sib2.howManyScratches();
    // sib3.howManyScratches();
    // sib4.howManyScratches();

    sib1.random(14);
    sib1.dis(); // 
    sib3.random(54);
    sib1.dis(); // 
    
    return 0;
}