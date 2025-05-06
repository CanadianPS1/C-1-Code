#include <iostream>
using namespace std;
class basicSintax{
    public:
    void main(){
        //basic var creation
        string message;
        //basic print statment
        cout<< "Hello World \n";
        cout<< "What Word do you want to Print?:  ";
        //basic input sintax
        cin>> message;
        cout<< message;
    }
};
int main(){
    basicSintax basic;
    basic.main();
    return 0;
}