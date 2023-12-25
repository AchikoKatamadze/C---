#include <iostream>
#include <vector>
using namespace std;


vector<int> QuickSort(vector<int>& arr) {
    if(arr.size() == 1) return arr;
    vector<int> arr1;
    vector<int> arr2;
    for (int i = 0; i < arr.size(); i++) { 
        if (arr[i] <= arr[arr.size()-1]) {
            arr1.push_back(arr[i]);
        } else {
            arr2.push_back(arr[i]);
        }
    }
    if(!arr1.empty()) QuickSort(arr1);
    if(!arr2.empty()) QuickSort(arr2);
    int x = 0, y = 0, i = 0;   
    while (x+y < arr1.size() + arr2.size()) {
        if (x < arr1.size() && (y >= arr2.size() || arr1[x] <= arr2[y])) {
            arr[i] = arr1[x];
            x++;
        } else{
            arr[i] = arr2[y];
            y++;
        }
        i++;
    }
        return arr; 
}
int main() {
    int y;
    cout << "Enter the number of elements: ";
    cin >> y;

    vector<int> arr(y);

    for (int i = 0; i < arr.size(); i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        arr[i] = x;
    }
    QuickSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.size()-1 == i) cout << arr[i];
        else cout << arr[i] << ", ";
    }
    return 0;
}
