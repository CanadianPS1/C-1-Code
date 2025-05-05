#include <iostream>
using namespace std;
class HelloWorld{
public:
    void printMessage(string message){
        cout<<message;
    }
};
int main(){
    string message;
    HelloWorld hw;
    cout<<"Enter A Word to Print: ";
    cin >> message;
    hw.printMessage(message);
    return 0;
}