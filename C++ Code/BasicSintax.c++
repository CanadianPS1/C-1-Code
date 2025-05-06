//has to go at the start of every program
#include <iostream>
//lets me use strings
using namespace std;
//makes a class
class basicSintax{
    //declars that my method is public
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
//you have to put the semi collen at the end of a class decloration
};
//this is the main method, which calls the class where my code is
int main(){
    basicSintax basic;
    basic.main();
    return 0;
}