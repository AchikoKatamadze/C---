#include <iostream>
#include <cstdio>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d", &a);
    scanf("%ld", &b);
    scanf(" %c", &c);
    scanf("%f", &d);
    scanf("%lf", &e);
    
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;
    return 0;
}
