#include <iostream>
#include <array>
#include <list>
using namespace std;

int main(){
    int numbers[5] = {1,2,3,4,5};
    cout<< numbers[3] << endl;
    numbers[1] = 25;
    for(int number : numbers){
        cout<< number << endl;
    }
    array<string,4> animals = {"mouse","tiger","snake","penguin"};
    cout<< animals[2] << endl;
    for(int i = 0; i < animals.size(); i++){
        cout<< animals[i] << endl;
    }
    list<float> height = {5.6f,6.2f,4.2f};
    height.push_front(2.3f);
    height.push_back(7.3f);
    height.sort();
    for(float hite : height){
        cout<< hite << endl;
    }
    return 0;
}