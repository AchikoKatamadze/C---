#include <iostream>
#include <fstream>
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
// int main() {
//   int array[10];
//   for (int i = 0; i < 10; i++)
//   {
//     array[i] = rand()%10000;
//     cout << array[i] << " ";
//   }
// }
int main() {
  int x, s = 1;
  fstream myfile;
  myfile.open("text.txt", ios::out | ios::trunc);
  myfile << "1 2 3";
  myfile.close();
  myfile.open("text.txt", ios::in);
  while(myfile >> x){
    s *= x;
  }
  myfile.close();
  cout << s;
}