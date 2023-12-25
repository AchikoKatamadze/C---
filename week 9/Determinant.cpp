#include <iostream>
#include <cmath>
using namespace std;    

int main() {
    double d = 0;
    int a[3][3] = {{1,2,3},         // 00,01,02
                   {4,5,6},         // 10,11,12
                   {7,8,9}};        // 20,21,22
     // 11,12 | 12, 10  | 10,11
     // 21,22 | 22, 20  | 20,21 
    
    for (int i = 0; i < 3; i++)
    {
        d += a[0][abs(2 - i - (i >= 1))]*(a[1][i]*a[2][i + 1 - 3 * (i == 2)] - a[1][i + 1 - 3 * (i == 2)]*a[2][i]);
    }
    cout << d;
}