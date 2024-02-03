#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// void fibonacci(int x, int prev, int min, int max){
//   if(x<=max){
//   if(x>=min)cout << x << endl;
//   fibonacci(x+prev, x, min, max);
//   }
// }

// int main() {
//   int max, min;
//   cout << "sheitanet min: ";
//   cin >> min;
//   cout << "sheitanet max: ";
//   cin >> max;
//   fibonacci(1,0, min, max);
// }
int main() {
  double x, count = 0;
  ifstream myfile;
  myfile.open("file.txt");
  while(myfile >> x){
    if(fmod(x, 1.0) == 0 && x>0) count++;
  }
  cout << "mteli dadebiti ricxvebis raodenoba: " << count;
}