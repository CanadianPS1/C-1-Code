#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <array>
using namespace std;
//the stuff for the array
void arraying(){
    array<string,7> daysOfTheWeek = {"Monday","Tuesday","Wendsday","Thursday","Friday","Saterday","Sunday"};
    for(string day : daysOfTheWeek){
        cout<< day << endl;
    }
}
//the stuff for the vector
void vecting(){
    vector<int> numbers = {1,2,3,4,5};
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.pop_back();
    for(int number : numbers){
        cout<< number << endl;
    }
}
//the stuff for the list
void listing(){
    list<string> fruits = {"Bannana","Water_Mellon","Orange"};
    fruits.push_front("Mango");
    fruits.push_back("Apple");
    fruits.remove("Apple");
    for(string fruit : fruits){
        cout<< fruit << endl;
    }
}
//the stuff for the map
void mapping(){
    map<int,string> products = {{0,"Bread"},{1,"Flower"},{2,"Yeast"}};
    products[0] = "Rice_Flower";
    for(auto product : products){
        cout<< "Product ID: " << product.first << endl;
        cout<< "      Name: " << product.second <<endl;
    }
}
//calls all the methods
int main(){
    arraying();
    cout<< endl;
    listing();
    cout<< endl;
    vecting();
    cout<< endl;
    mapping();
    return 0;
}