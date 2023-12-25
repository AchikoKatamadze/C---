#include <iostream>
using namespace std;

int main() {
    int mimdinare, shualeduri, finaluri;
    
    cout << "sheiyvanet mimdinare shefaseba: ";
    cin >> mimdinare;
    
    cout << "sheiyvanet shualeduris shefaseba: ";
    cin >> shualeduri;
    
    cout << "sheiyvanet finaluris shefaseba: ";
    cin >> finaluri;

    int sul = mimdinare + shualeduri + finaluri;

    if (mimdinare <= 40 && shualeduri <= 20 && finaluri <= 40 && 
        mimdinare >= 0 && shualeduri >= 0 && finaluri >= 0) {
        if (sul < 21 || mimdinare + shualeduri < 21) {
            cout << "F";
        } else {
            if (finaluri < 20) {
                if (sul > 40) {
                    cout << "Fx";
                } else {
                    cout << "F";
                }
            } else {
                    if (sul >= 80) {
                        cout << "A";
                    } else if (sul >= 70) {
                        cout << "B";
                    } else if (sul >= 60) {
                        cout << "C";
                    } else if (sul >= 50) {
                        cout << "D";
                    } else {
                        cout << "E";
                    }
            }
        }
    } else {
        cout << "mcdari argumentebi";
    }

    return 0;
}
