#include <iostream>
using namespace std;

int main() {
    float length, width;
    
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;


    float area = length * width;
    float perimeter = 2 * (length + width);


    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
