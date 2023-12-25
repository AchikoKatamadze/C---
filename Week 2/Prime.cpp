#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
        cout << 2 <<endl;
        for (int i = 3; i < 1000; i+=2)
        {
            bool prime = true;
            for (int j = 3; j < sqrt(i) + 1; j++)
            {
                if (i % j == 0)
                {
                    prime = false;
                }
            }
            if(prime) cout << i << endl;
        }
    return 0;
}
