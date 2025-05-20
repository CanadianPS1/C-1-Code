#include <iostream>
#include <thread>
using namespace std;
void sleep_millis(unsigned int ms){
  this_thread::sleep_for(std::chrono::milliseconds(ms));
}
void frame1(){
    system("cls");
    cout<< "\nO";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
}
void frame2(){
    system("cls");
    cout<< "\n";
    cout<< "\n   O";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
}
void frame3(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n       O";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
}
void frame4(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n            O";
    cout<< "\n";
}
void frame5(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n                      O";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
}
void frame6(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n                            O";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
}
void frame7(){
    system("cls");
    cout<< "\n";
    cout<< "\n                                    O";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
}
void frame8(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n                                          O";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
}
void frame9(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n                                                O  ";
    cout<< "\n";
    cout<< "\n";
}
void frame1O(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n                                                       O";
}
void frame11(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n                                                                O";
    cout<< "\n";
}
void frame12(){
    system("cls");
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n";
    cout<< "\n                                                                                      O";
}
int main(){
    for(int i = 0; i < 5; i++){
        frame1();
        sleep_millis(200);
        frame2();
        sleep_millis(200);
        frame3();
        sleep_millis(200);
        frame4();
        sleep_millis(200);
        frame5();
        sleep_millis(200);
        frame7();
        sleep_millis(200);
        frame6();
        sleep_millis(200);
        frame7();
        sleep_millis(200);
        frame8();
        sleep_millis(200);
        frame9();
        sleep_millis(200);
        frame1O();
        sleep_millis(200);
        frame11();
        sleep_millis(200);
        frame12();
        sleep_millis(200);
        
    }
    return 0;
}