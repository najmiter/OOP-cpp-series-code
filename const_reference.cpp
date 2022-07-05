#include <iostream>
using namespace std;

class Student{
    private:
        int marks;
        string name;
        char grade;
    public:
        void getData(/* 2 arguments */){
            // code here
        }
        void displayResult()const;
        // void setN(const int& a)const{
        //     // marks = a;
            
        // }
        // void display(){
        //     cout<< "The value of marks is " << marks << endl;
        // }
        
};

void Result(const Student& obj){
    /* code here */
}

// void set(const Student& obj){
//     int t = 78;
//     obj.setN(t);
// }


int main(){
    // int a = 12;
    Student obj;
    // obj.setN(a);
    // obj.display();

    // set(obj);
    // obj.display();

    // cout<< a << endl;
    return 0;
}