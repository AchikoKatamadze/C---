#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream myfile("file.txt");
  string x = "hello, world!";
  myfile << x;
  myfile.close();
}