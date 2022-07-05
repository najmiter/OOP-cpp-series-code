#include <iostream>
using namespace std;

class OP{
    private:
        int mySubscribers;
        int myLikers;
    public:
        OP() : mySubscribers(0), myLikers(0) {}
        
        void operator++(){
            myLikers++;;
            mySubscribers++;
        }

        void operator++(int){
            myLikers++;
            mySubscribers++;
        }

        void operator--(int){
            myLikers--;
            mySubscribers--;
        }

        void operator--(){
            myLikers--;
            mySubscribers--;
        }


        OP(int sub, int like) : mySubscribers(sub), myLikers(like) {
            cout<< "Parameterized constructor called!" << endl;
        }

        OP operator+(OP obj){
            int s, l;
            l = myLikers + obj.myLikers;
            s = mySubscribers + obj.mySubscribers;
            return OP(s, l);
        }
        OP operator-(OP obj){
            int s, l;
            l = myLikers - obj.myLikers;
            s = mySubscribers - obj.mySubscribers;
            return OP(s, l);
        }
        OP operator*(OP obj){
            int s, l;
            l = myLikers * obj.myLikers;
            s = mySubscribers * obj.mySubscribers;
            return OP(s, l);
        }
        OP operator/(OP obj){
            int s, l;
            l = myLikers / obj.myLikers;
            s = mySubscribers / obj.mySubscribers;
            return OP(s, l);
        }
        
        void hitLike(){
            myLikers++;
        }

       

        void display(){
            cout<< "The number of likers is "<< myLikers << endl;
            cout<< "The number of subscribers is "<< mySubscribers << endl;
        }
};

int main(){
    // OP loyalViewers;
    // likes.hitLike();
    // loyalViewers++;
    // loyalViewers++;
    // loyalViewers++;
    // loyalViewers--;
    // loyalViewers.display();

    OP likes(2, 4); 
    OP subs(12, 98);
    OP total;

    likes++; // 3, 5
    subs++; // 13, 99

    // total = temporary_object;

    // total = likes + subs;
    total =  subs - likes; // 3 - 13 = -10 || 4- 98 = -94
    total.display();

    return 0;
}