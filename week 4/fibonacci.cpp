#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x = 1, y = 0, temp = 0;
    cout << 0 << endl << 1 << endl;
    for (int i = 1; i < 100; i++)
    {
        y = x;
        x += temp;
        temp = y;
        cout << x << endl;
    }
}