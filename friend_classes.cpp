#include <iostream>
using namespace std;

class Ali{
    int AliAge;
    public:
        Ali(){
            cout<< "Enter Ali's age: " << endl;
            cin>> AliAge;
        }
        friend class Huzaifa;
};

class Huzaifa{
    int HuzaifaAge;
    public:
        Huzaifa(){
            cout<< "Enter Huzaifa's age: " << endl;
            cin>> HuzaifaAge;
        }
        void compare(Ali& obj1){
            if(HuzaifaAge>obj1.AliAge) cout<< "Huzaifa is "<< HuzaifaAge-obj1.AliAge << " year(s) older than Ali" << endl;
            else cout<< "Ali is " << obj1.AliAge-HuzaifaAge << " years older than Huzaifa" << endl;
        }
        /* void second(Ali& obj2){
            obj2.AliAge = 99;
        } */
        
};

int main(){
    Ali a;
    Huzaifa h;
    h.compare(a);
    
    return 0;
}