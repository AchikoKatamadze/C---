#include <iostream>

using namespace std;

int main()
{
        int x;
        cin >> x;
        if(x == 0) cout << "one"<<endl;
        if(x == 1) cout << "one"<<endl;
        else if(x == 2) cout << "two"<<endl;
        else if(x == 3) cout << "three"<<endl;
        else if(x == 4) cout << "four"<<endl;
        else if(x == 5) cout << "five"<<endl;
        else if(x == 6) cout << "six"<<endl;
        else if(x == 7) cout << "seven"<<endl;
        else if(x == 8) cout << "eight"<<endl;
        else if(x == 9) cout << "nine"<<endl;
        else if (x > 9) cout << "Greater than 9";

    return 0;
}