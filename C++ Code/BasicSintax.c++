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
        int number;
        //basic print statment
        cout<< "Hello World";
        cout<< "\nWhat Word do you want to Print?: ";
        //basic input sintax
        cin>> message;
        cout<< message;
        cout<< "\nEnter a Number: ";
        cin>> number;
        //calls a method
        passedNumber(number);
        //basic if statment that compares ints
        if(number == 0){
            cout<< "\nWOW you eather cheated and didnt enter a number OOOOOR";
            cout<< "\nYou Entered 0???? but why did you type 0????";
        }
        //basic if statment that compares strings
        if(message.compare("lol") == 0){
            cout<< "\nhehe... nice, i also used lol in testing\n";
        }
        //for loop that prings 1-10
        for(int i = 0; i < 10; i++){
            cout<< i + 1<<endl;
        }
        //while loop that prings from 10-20
        int i = 10;
        while(i < 20){
            i++;
            cout<< i <<endl;
        }
    }
    //prints a passed int
    void passedNumber(int number){
        //you cant print an int along with a string, you have to cast it
        cout<< "\nYour Number was: " + to_string(number) + "\n";
    }
//you have to put the semi collen at the end of a class decloration
};
//this is the main method, which calls the class where my code is
int main(){
    basicSintax basic;
    basic.main();
    return 0;
}