#include <iostream>
using namespace std;
void input(int a,int b,int c){
    while(true){
    cout << "sul 6 tamashi, sheiyvanet mogeba: ";
    cin>> a;
    cout << "sheiyvanet fre: ";
    cin>> b;
    cout << "sheiyvanet wageba: ";
    cin>> c;
    if(a+b+c == 6) break;
    }
    a*= 3;
    c = 0;
}
int sum(int a ,int b,int c){
    return a+b+c;
}
int main() {
    int aW,aD,aL,bW,bD,bL,cW,cD,cL,a,b,c;
    input(aW,aD,aL);
    input(bW,bD,bL);
    input(cW,cD,cL);
    a = sum(aW,aD,aL);
    b = sum(bW,bD,bL);
    c = sum(cW,cD,cL);
    for (int i = 0; i < 5; i++)
    {
        
    }
     
    return 0;
}
