#include <iostream>
using namespace std;
int main(){
     // int a[10];
     /* for (int i = 0; i < 10; i++)
     {
        a[i] = i; // a[9] = 9;
     }
     for (int i = 0; i < 10; i++)
     {
        cout<< a[i] << endl;
     } */
     
     int a[2][5];

     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 5; j++)
        {
                a[i][j] = i+j*2; // a[1][4] = 5
        }
     }

     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 5; j++)
        {
                cout<< a[i][j] << " ";
        }
        cout<< "\n";
     }
     
     


    
    return 0;
}

/* 
        a[5][10]
                 0 1 2 3 4 5 6 7 8 9  
    ]       0    - - - - - - - - - - 
            1    - - - - - - - - - - 
    ]       2    - - - - - - - - - - 
            3    - - - - - b - - - - 
            4    - - - - - - - - - - 


 */