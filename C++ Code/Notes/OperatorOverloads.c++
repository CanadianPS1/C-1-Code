#include <iostream>
using namespace std;
class function{
    public:
    void print(bool x){
        cout<< x <<" is a bool" << endl;
    }
    void print(int x){
        cout<< x <<" is a int" << endl;
    }
    void print(float x){
        cout<< x <<" is a float" << endl;
    }
    void print(double x){
        cout<< x <<" is a double" << endl;
    }
    void print(int x, int y){
        cout<< x << " and " << y << " are a two numbers" << endl;
    }
    void overloading(){
        cout<< endl << "      ~Overloading Operators~" << endl;
        print(true);
        print(20);
        print(20.5f);
        print(34.9);
        print(9,10);
    }
};
class operators{
    public:
    float x;
    float y;
    public:
    operators() : x(0), y(0) {};
    operators(float a, float b) : x(a),y(b) {};
    void write(){
        cout << x << " : " << y << endl;
    }
    void add(operators& oper){
        x += oper.x;
        y += oper.y;
    }
    void operator + (operators& p1){
        x += p1.x;
        y += p1.y;
    }
    void operator << (ostream& ostream){
        ostream << x << " : " << y << endl;
    }
};
int main(){
    function* fnc = new function;
    fnc->overloading();
    cout<< endl << "      ~Overloading Functions~" << endl;
    operators op1(10,14);
    operators op2(5,8);
    op2 + op1;
    op1 << cout;
    op2 << cout;
    delete fnc;
    return 0;
}