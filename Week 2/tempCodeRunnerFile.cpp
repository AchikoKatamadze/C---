#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int i = 3; i < 1000; i++2)
    {
        cout << 2;
        for (int j = 2; j <= i/2; j++){
            if(i % j == 0) break;
            else if (j == i/2 )
            {
                cout << i;
            }
        }   
    }   
    return 0;
}
