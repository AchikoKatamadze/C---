#include <iostream>
#include <string>
using namespace std;
int compare(int a, int b){
    if(a>b){
        return a;
    }
    else return b;
}
int main() {
    string sityva;
    cout << "sheiyvanet sityva: ";
    cin >> sityva;
    char arr[sityva.size()];
    for (int i = 0; i < sityva.size(); i++)
    {
        arr[i] = sityva.at(i);
    }
    for (int j = 0; j < sityva.size(); j++)
    {
        for (int i = 0; i < sityva.size(); i++){
            if(int(arr[i]) == compare(int(arr[i]),int(arr[i+1]))){
                swap(arr[i], arr[i+1]);
            }
        }
    }
    for (int i = 0; i < sityva.size()+1; i++)
    {
        cout << arr[i];
    }
    return 0;
}
