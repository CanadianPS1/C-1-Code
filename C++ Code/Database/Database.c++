#include <iostream>
#include <vector>
#include "Database.h"
using namespace std;
int Contestents::getNumber(){
    return number;
}
void Contestents::Read(std::ostream& ostream, std::istream& istream){
    Database::Read(ostream, istream);
    ostream << "Enter Number: "; 
    istream >> number;
}
void Contestents::Write(std::ostream& ostream){
    Database::Write(ostream);
    ostream << "Number: " << number << std::endl; 
}
int Grunts::getKills(){
    return kills;
}
void Grunts::Read(std::ostream& ostream, std::istream& istream){
    Database::Read(ostream, istream);
    ostream << "Enter kill count: "; 
    istream >> kills;
}
void Grunts::Write(std::ostream& ostream){
    Database::Write(ostream);
    ostream << "Kills: " << kills << std::endl;
}
string Database::getName(){
    return name;
}
vector<Database*> Create(SquidGame job,vector<Database*> people){
    Database* obj = nullptr; 
    switch(job){ 
        case SquidGame::RED_SUIT_MEN: 
            obj = new Grunts; 
            break; 
        case SquidGame::CONTESTENTS: 
            obj = new Contestents; 
            break; 
    } 
    obj->Read(std::cout, std::cin); 
    people.push_back(obj);
    return people;
}
void Display(vector<Database*> people, string name){
    for(Database* obj : people){ 
        if(obj->getName() == name){ 
            obj->Write(cout); 
        } 
    }
}
void Display(vector<Database*> people, SquidGame job){
    for(Database* person : people){ 
        if(person->getType() == job){ 
            person->Write(cout); 
        } 
    }
}
void DisplayAll(vector<Database*> people){
    for(Database* person : people){
        person->Write(cout);
    }
}
void Database::Read(ostream& ostream, istream& istream){
    ostream << "Enter Name: ";
    istream >> name;
}
void Database::Write(ostream& ostream){
    ostream << "Name: " << name << std::endl;
}
Database::~Database(){}
int main(){
    vector<Database*> people;
    bool quit = false; 
    while(!quit){ 
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n"; 
        int choice; 
        cin >> choice; 
        switch (choice){ 
            case 1:{
                cout << "Enter type (0 for Contestent, 1 for Grunt): "; 
                int type; 
                std::cin >> type;
                people = Create(static_cast<SquidGame>(type),people);
                break;
            }
            case 2:{
                DisplayAll(people);
                break;
            }
            case 3:{ 
                cout << "Enter Name: "; 
                string name; 
                std::cin >> name;
                Display(people,name); 
                break; 
            }  
            case 4:{ 
                cout << "Enter type (0 for Contestent, 1 for Grunt): "; 
                int type; 
                std::cin >> type;
                Display(people,static_cast<SquidGame>(type)); 
                break; 
            } 
            case 5:{
                quit = true; 
                break;
            }
        } 
    }
    return 0;
}
