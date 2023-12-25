#include <iostream>
using namespace std;
int main() {
    // The letter is A
     char arr[5][5] = {
        { '.','.', '#','.', '.', },
        { '#','.', '.','.', '#', },
        { '#','.', '#','.', '#', },
        { '#','.', '.','.', '#', },
        { '#','.', '.','.', '#', },
        };
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for(int j=0;j< sizeof(arr[0]); j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;

    }
    return 0;
}
