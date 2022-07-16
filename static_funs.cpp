#include <iostream>
using namespace std;

class Family{
    int members;
    public:
        Family() : members(3) {}
        Family(int m) : members(m){}
        static void Friends(Family& F1, int f){
            F1.members += f;
        }
        
        void Entry(){
            cout<< "This family has " << members << " members" << endl;
        }
};

int main(){
    Family Shareef, fam(4);
    fam.Entry();
    Shareef.Friends(fam, 2);
    fam.Entry();
    
    return 0;
}