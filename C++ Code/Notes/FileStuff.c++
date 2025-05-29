#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string text;
    cout<< "Enter Text: ";
    cin>> text;
    ofstream output("data.txt");
    output << text;
    output.close();
    ifstream input("data.txt");
    input >> text;
    input.close();
    return 0;
}