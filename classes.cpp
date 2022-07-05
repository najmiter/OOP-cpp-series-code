#include <iostream>
using namespace std;

class Student{
    public:
        int rollNo, marks; 
        string name;
        void getData(){

        }
        void displayData(){
            cout<< "The name of the student is:: " << name << endl;
            cout<< "The roll no of the student is:: " << rollNo << endl;
            
        }
};

int main(){
    Student s1;
    s1.name = "Ali";
    s1.rollNo = 10;

    Student s2;
    s2.name = "Noor";
    s2.rollNo = 20;

    s1.displayData();
    cout<< "---------------------" << endl;
    s2.displayData();
    
    return 0;
}