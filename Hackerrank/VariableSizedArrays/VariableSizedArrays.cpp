#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y;
    cin >> x;
    cin >> y;
      int arr[x][y];
      for (int i = 0; i < y; i++) {
          for (int j = 0; j < x; j++){
            cin >> arr[j][i];
        }
      }
    return 0;
}