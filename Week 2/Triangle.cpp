#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c: ";
    cin >> c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    if (pow(a) + pow(b) == pow(c)) {
        cout << "It's a rectangular triangle." << endl;
    }
    else if (pow(a) + pow(b) < pow(c)) {
        cout << "It's an obtuse triangle." << endl;
    }
    else {
        cout << "It's an acute triangle." << endl;
    }

    return 0;
}
