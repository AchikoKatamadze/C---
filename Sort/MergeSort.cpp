#include <iostream>
#include <vector>
using namespace std;

vector<int> MergeSort(vector<int>& arr) {
    if(arr.size() == 1) return arr;
    else{
        vector<int> arr1;
        vector<int> arr2;
    for (int i = 0; i < arr.size(); i++)
    {
        if(i < arr.size()/2) arr1.push_back(arr[i]);
        else arr2.push_back(arr[i]);
    }
    MergeSort(arr1);
    MergeSort(arr2);
    int i=0, x=0, y=0;
    while (i < arr.size()) {
        if (x < arr1.size() && (y >= arr2.size() || arr1[x] <= arr2[y])) {
            arr[i] = arr1[x];
            x++;
        } else{
            arr[i] = arr2[y];
            y++;
        }
        i++;
    }
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
    MergeSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.size()-1 == i) cout << arr[i] << " ";
        else cout << arr[i] << ", ";
    }
    
    return 0;
}
