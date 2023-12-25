#include <iostream>
using namespace std;

int main() {
    float x, y;
    
    cout << "Enter the distance in km: ";
    cin >> x;
    
    cout << "Enter the time in minutes: ";
    cin >> y;

    // Calculate speed (distance / time)
    cout << "Speed: " << x / (y /= 60) << " km/h" << endl;
    return 0;
}
