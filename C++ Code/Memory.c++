#include <iostream>
using namespace std;
void set(int& i){
    i = 123;
}
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
void swapP(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int i1 = 10;
    int i2 = 20;

    int& r = i1;
    r = 30;

    set(i1);
    int* p = &i2;

    swapP(&i1,&i2);

    cout<< "\nI1: " << i1;
    cout<< "\nI2: " << i2;
    cout<< "\nI2 Address: " << &i2;
    cout<< "\nP Value: " << p;
    cout<< "\nDerefrenced P: " << *p;
    return 0;
}