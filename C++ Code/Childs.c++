#include <iostream>
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
    }
};
int main(){
    MainChildThings run;
    Child child;
    run.printer();
    child.printer();
    return 0;
}
