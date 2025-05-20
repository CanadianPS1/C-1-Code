#include <iostream>
//#include <windows.h>
using namespace std;
class MainChildThings{
    public:
    virtual void printer(){
        cout<< "i am NOT the one who prints" << endl;
    };
};
class Child : public MainChildThings{
    public:
    void printer() override{
        cout<< "I am the one who prints" << endl;
        //plays a sound
        //PlaySound(TEXT("test.wav"), NULL, SND_FILENAME);
    }
};
int main(){
    MainChildThings run;
    Child child;
    run.printer();
    child.printer();
    return 0;
}