#include <iostream>
using namespace std;

class BestFriend{
    private:
        mutable string secretStuff;
    public:
        BestFriend(){}
        BestFriend(string s) : secretStuff(s){}
        void update(string s)const{
            secretStuff += "\n" + s;
        }
        friend void bsf(const BestFriend&);
};

void bsf(const BestFriend& obj) {
    obj.update("more secrets");
    cout<< "I know my bsf's " << obj.secretStuff << endl;
}

int main(){
    BestFriend Ali("password, etc");
    bsf(Ali);

    return 0;
}