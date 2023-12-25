#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void print(vector<vector<int> >& arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i][j] == 0)cout <<".";
            else cout << "♕";
        }
        cout << endl;
    }
    cout << endl;
}

bool checker(vector<vector<int> >& arr, int x, int y){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] == 1 && (i == x || j == y || abs(x - i) == abs(y - j))){
                return false;
            }
        }
    }
    return true;
}

void placing(vector<vector<int> >& arr, int col){
    int n = arr.size();
    if (col == n) {
        print(arr);
    }

    for (int i = 0; i < n; i++) {
        if (checker(arr, i, col)) {
            arr[i][col] = 1;
            placing(arr, col + 1);
            arr[i][col] = 0;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of a table: ";
    cin >> n;

    vector<vector<int> > arr(n, vector<int>(n, 0));
    placing(arr, 0);
    return 0;
}
