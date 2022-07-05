#include <iostream>
using namespace std;



class House{
    private:
        string wifi_pass;
        string giveMePass(){return wifi_pass;}
    public:
        void setPassword(){
            wifi_pass = "enwlnfew";
        }
        void bigBro(){
            cout<< "The password is:: "<< giveMePass() << endl;
            // return wifi_pass;
        }
};

int main(){
    House request;
    request.setPassword();
    request.bigBro();




    return 0;
}