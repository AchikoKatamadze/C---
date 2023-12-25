#include <iostream>
#include <vector>
using namespace std;
int main() {
    bool x = false;
    vector<float> abscisa(4); 
    vector<float> ordinata(4); 
    for (int i = 0; i < 4; i++)
    {
    cout << "x"<<i+1<<" and y"<<i+1<<": "<< endl; // გვაქვს 4 წერტილი 1,2,3,4
        cin >> abscisa[i];
        cin >> ordinata[i];
    }
    if(abscisa[1] - abscisa[0]==0 || abscisa[2] - abscisa[0]==0 || abscisa[2] - abscisa[1]==0) x = true;
    else{
    if((abscisa[2] - abscisa[0])/(abscisa[1] - abscisa[0]) == // ამოწმებს მე-3ს 1-ელსა და მე-2-სთვის
       (ordinata[2] - ordinata[0])/(ordinata[1] - ordinata[0]) ||

       (abscisa[3] - abscisa[0])/(abscisa[1] - abscisa[0]) == // ამოწმებს მე-4ს 1-ელსა და მე-2-სთვის
       (ordinata[3] - ordinata[0])/(ordinata[1] - ordinata[0]) ||

       (abscisa[3] - abscisa[0])/(abscisa[2] - abscisa[0]) == // ამოწმებს მე-4ს 1-ელსა და მე-3-სთვის
       (ordinata[3] - ordinata[0])/(ordinata[2] - ordinata[0]) ||

       (abscisa[3] - abscisa[1])/(abscisa[2] - abscisa[1]) == // ამოწმებს მე-4ს მე-2-სა და მე-3-სთვის
       (ordinata[3] - ordinata[1])/(ordinata[2] - ordinata[1])) x = true;
    }
    if(x) cout << "vera";
    else cout << "shedgeba";
    return 0;
}