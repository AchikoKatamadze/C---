#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int count2 = 0;
    for (int i = 1; i < 1000000; i++)
    {
        int z = i, w = i, y = 0, count = 0;
      while(z != 0) {
        z /= 10;
        count++;
      }
      while(w != 0)
      {      
      y += pow(w%10, count);
      w /= 10;
      }
      if(i == y)
      {
        cout << i << endl;
        count2++;
      }
    }
      cout <<"raodenoba : " << count2;
}