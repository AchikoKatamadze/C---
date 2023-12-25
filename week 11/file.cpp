#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

void checkAge(string line){
    string age;
    int count = 0, avg = 0;
    for(char i : line){
        if(i == '\"' && line.substr(count+1,3) == "age") avg= (avg+(int)line.substr(count+1,3))/2;
        count++;
    }
}
int main() { // avg age, most populated city, most common hobby.
    ifstream myfile;
    myfile.open("input.json");
    string line;

    while(getline(myfile, line)){
        checkAge(line);
    }
}