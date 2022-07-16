#include <iostream>
using namespace std;
/* 
void change(const int a[]){
    for(int i = 0; i < 10; i++)
        a[i] += 3;
} */

/* void print(const int a[]){
    for(int i = 0; i < 10; i++)
        cout<< a[i] << endl;
} */

void print(const int a[][5]){
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++)
            cout<< a[i][j] << " ";
        cout<< "\n";
    }
}

int main(){
    /* int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = i;
     */
    // change(a);
    // print(a);

    int b[2][5];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 5; j++)
                b[i][j] = i+j+3*3;
    
    print(b);

    return 0;
}