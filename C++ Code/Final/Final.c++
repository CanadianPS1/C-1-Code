#include <iostream>
#include <thread>
#include <windows.h>
#include <mmsystem.h>
#include <map>
#include <random>
#include "Final.h"
using namespace std;
//declares the methods for the menu class
map<string,int> players;
string currentUser = "_guest_";
//decares the methods for the final class
void finalDitto::updateGraphics(string* health, string* eHealth){
    system("cls");
    cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
    cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |----------------------------------------------------||---------------------------------------------------------------------------------------------------------------------------| |";
    cout<< "\n | |                                                    ||                                                                                                                           | |";
    cout<< "\n | |                        HP                          ||                                                                                      " <<*eHealth<< "              | |";
    cout<< "\n | |              " <<*health<< "               ||                                                                                                                           | |";
    cout<< "\n | |                                                    ||                                                                                   _________                               | |";
    cout<< "\n | |        (1) Goo Punch    (2) Goo Shot               ||                                                                               ___/         )__                            | |";
    cout<< "\n | |                                                    ||                                                                              /                )                           | |";
    cout<< "\n | |        (3) Goo Get      (4) Goo Form               ||                                                                             |                  |                          | |";
    cout<< "\n | |                                                    ||                                                                             |   (O)       (O)   |                         | |";
    cout<< "\n | |                                                    ||                                                                             |                   |                         | |";
    cout<< "\n | |                                                    ||                                                                             |                   |                         | |";
    cout<< "\n | |                                                    ||                                                                             |                   |                         | |";
    cout<< "\n | |                                                    ||                                                                             |                   |                         | |";
    cout<< "\n | |                                                    ||                                                                             | @ 3333#//333      |                         | |";
    cout<< "\n | |                                                    ||                         ______                                              |@@@33##$$$##3@@3@@@|                         | |";
    cout<< "\n | |                                                    ||                  ______/       )___                                     @@@@@@@@#@@@@#######$$@@83@@                      | |";
    cout<< "\n | |                                                    ||               __/                  )_                                  @@333333$$$$$#################                     | |";
    cout<< "\n | |                                                    ||              /                 (*)    )                                 @ @@@@ 3333333$$$$$$$$$#####                      | |";
    cout<< "\n | |                                                    ||            _/                        |                                        @@@@################                        | |";
    cout<< "\n | |                                                    ||           /                         /                                                                                     | |";
    cout<< "\n | |                                                    ||          |                          |                                                                                     | |";
    cout<< "\n | |                                                    ||         (                 _________/                                                                                      | |";
    cout<< "\n | |                                                    ||          <______________/                                                                                                 | |";
    cout<< "\n | |                                                    ||                                                                                                                           | |";
    cout<< "\n | |----------------------------------------------------||---------------------------------------------------------------------------------------------------------------------------| |";
    cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n |_|////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;  
    
}
void Attacking::aiMove1(string* eHealth){
    //40% chance
    *eHealth = decreseHealth(eHealth);
}
void Attacking::aiMove2(){
    //10% chance
    cout<< "Gorbo MISSED!!!";
}
void Attacking::aiMove3(string* health){
    //25% chance
    *health = increseHealth(health);
    *health = increseHealth(health);
}
void Attacking::aiMove4(string* eHealth){
    //25% chance
    *eHealth = decreseHealth(eHealth);
    *eHealth = decreseHealth(eHealth);
}
void finalDitto::aiMove1(string* eHealth){
    cout<< "Gorbo MISSED!!!";
}
void finalDitto::aiMove2(){
    cout<< "Gorbo MISSED!!!";
}
void finalDitto::aiMove3(string* health){
    cout<< "Gorbo MISSED!!!";
}
void finalDitto::aiMove4(string* eHealth){
    cout<< "Gorbo MISSED!!!";
}
void finalDitto::gooPunch(string* eHealth){
    cout<< "\nMove Missed" << endl;
}
void finalDitto::gooShot(string* health, string* eHealth){
    cout<< "\nMove Missed" << endl;
}
void finalDitto::gooGet(string* health, string* eHealth){
    cout<< "\nMove Missed" << endl;
}
void finalDitto::gooForm(string* health){
    cout<< "\nMove Missed" << endl;
}
void Attacking::gooPunch(string* eHealth){
    *eHealth = decreseHealth(eHealth);
}
void Attacking::gooShot(string* health, string* eHealth){
    *eHealth = decreseHealth(eHealth);
    *eHealth = decreseHealth(eHealth);
    *health = decreseHealth(health);
}
void Attacking::gooGet(string* health, string* eHealth){
    *eHealth = decreseHealth(eHealth);
    *health = increseHealth(health);
}
void Attacking::gooForm(string* health){
    *health = increseHealth(health);
}
//decreses the hp by 1
string Attacking::decreseHealth(string* health){
    if(health->compare("<3  <3  <3  <3  <3  <3 ") == 0){
        *health = "<3  <3  <3  <3  <3  </3";
        return *health;
    }else if(health->compare("<3  <3  <3  <3  <3  </3") == 0){
        *health = "<3  <3  <3  <3  </3 </3";
        return *health;
    }else if(health->compare("<3  <3  <3  <3  </3 </3") == 0){
        *health = "<3  <3  <3  </3 </3 </3";
        return *health;
    }else if(health->compare("<3  <3  <3  </3 </3 </3") == 0){
        *health = "<3  <3  </3 </3 </3 </3";
        return *health;
    }else if(health->compare("<3  <3  </3 </3 </3 </3") == 0){
        *health = "<3  </3 </3 </3 </3 </3";
        return *health;
    }else if(health->compare("<3  </3 </3 </3 </3 </3") == 0){
        *health = "</3 </3 </3 </3 </3 </3";
        return *health;
    }
}
//increses the hp by 1
string Attacking::increseHealth(string* health){
    if(health->compare("<3  <3  <3  <3  <3  <3 ") == 0){
        *health = "<3  <3  <3  <3  <3  <3 ";
        return *health;
    }else if(health->compare("<3  <3  <3  <3  <3  </3") == 0){
        *health = "<3  <3  <3  <3  <3  <3 ";
        return *health;
    }else if(health->compare("<3  <3  <3  <3  </3 </3") == 0){
        *health = "<3  <3  <3  <3  <3  </3";
        return *health;
    }else if(health->compare("<3  <3  <3  </3 </3 </3") == 0){
        *health = "<3  <3  <3  <3  </3 </3";
        return *health;
    }else if(health->compare("<3  <3  </3 </3 </3 </3") == 0){
        *health = "<3  <3  <3  </3 </3 </3";
        return *health;
    }else if(health->compare("<3  </3 </3 </3 </3 </3") == 0){
        *health = "<3  <3  </3 </3 </3 </3";
        return *health;
    }
    delete health;
}
//prints out the main menu and implements its functionality
void Menu::mainMenu(){
    //clears the screen
    system("cls");
    //prints out the menu
    cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
    for(int i = 0; i< 6; i++){
        cout<< "\n | |                                                                                                                                                                                 | |";
    }
    cout<< "\n | |                                                                                   ~PLAY~                                                                                        | |";
    cout<< "\n | |                                                                                                                                                                                 | |";
    cout<< "\n | |                                                                                   ~USER~                                                                                        | |";
    cout<< "\n | |                                                                                                                                                                                 | |";
    cout<< "\n | |                                                                                   ~EXIT~                                                                                        | |";
    for(int i = 0; i< 12; i++){
        cout<< "\n | |                                                                                                                                                                                 | |";
    }
    cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n |_|/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;  
    //grabs user input and makes sure its one of the options
    string* userInput = new string;
    while(true){
        cin>> *userInput;
        //puts the user input into lowercase
        for(int i = 0; userInput->length() > i; i++){
            (*userInput)[i] = tolower((*userInput)[i]);
        }
        if(userInput->compare("play") == 0){
            delete userInput;
            //starts the game
            finalDitto mode;
            mode.main();
            break;
        }else if(userInput->compare("user") == 0){
            delete userInput;
            //calls the user menu method
            userMenu();
            break;
        }else if(userInput->compare("exit") == 0){
            delete userInput;
            //quite the program
            exitMenu();
            break;
        }
    }
}
//the code for the exit menu
void Menu::exitMenu(){
    //clears the screen
    system("cls");
    //desplays the good bye screen
    cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
    for(int i = 0; i< 11; i++){
        cout<< "\n | |                                                                                                                                                                                 | |";
    }
    cout<< "\n | |                                                                           ~Thank You for Playing~                                                                               | |";
    for(int i = 0; i< 11; i++){
        cout<< "\n | |                                                                                                                                                                                 | |";
    }
    cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n |_|/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;  
    //turns off the progran
    exit(0);
}
//desplays the users menu
void Menu::userMenu(){
    while(true){
        //clears the screen
        system("cls");
        //desplays the menu
        cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
        cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
        cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
        cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
        for(int i = 0; i< 6; i++){
            cout<< "\n | |                                                                                                                                                                                 | |";
        }
        cout<< "\n | |                                                                                ~LIST USERS~                                                                                     | |";
        cout<< "\n | |                                                                                                                                                                                 | |";
        cout<< "\n | |                                                                                 ~ADD USER~                                                                                      | |";
        cout<< "\n | |                                                                                                                                                                                 | |";
        cout<< "\n | |                                                                               ~SELECT USER~                                                                                     | |";
        cout<< "\n | |                                                                                                                                                                                 | |";
        cout<< "\n | |                                                                                   ~BACK~                                                                                        | |";
        
        for(int i = 0; i< 10; i++){
            cout<< "\n | |                                                                                                                                                                                 | |";
        }
        cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
        cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
        cout<< "\n |_|/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;
        //grabs user input until its one of the options
        string* userInput = new string;
        cin>> *userInput;
        //puts the user input into lower case
        for(int i = 0; userInput->length() > i; i++){
            (*userInput)[i] = tolower((*userInput)[i]);
        }
        if(userInput->compare("list") == 0){
            system("cls");
            cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                          ~PLAYERS~                                                                                              | |";
            for(auto person : players){
                if(person.second < 10){
                    cout<< "\n | |                                                       Player Name: " << person.first;
                    *userInput = " ";
                    for(int i = 0; i < (108 - person.first.length()); i++){
                        *userInput = *userInput + " ";
                    }
                    *userInput += "| |";
                    cout<< *userInput;
                    cout<< "\n | |                                                              Wins: " << person.second << "                                                                                                            | |";
                    cout<< "\n | |                                                                                                                                                                                 | |";
                }else{
                    cout<< "\n | |                                                       Player Name: " << person.first;
                    cout<< "\n | |                                                              Wins: " << person.second << "                                                                                                           | |";
                    cout<< "\n | |                                                                                                                                                                                 | |";
                
                }
            }
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                  Enter a Key to go Back to                                                                                      | |";
            cout<< "\n | |                                                                            Menu                                                                                                 | |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n |_|/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;
            cin>> *userInput;
            delete userInput;
        }else if(userInput->compare("add") == 0){
            cout<< "\nEnter Who you would like to Add " <<endl;
            cin>> *userInput;
            players.insert({*userInput, 0});
            cout<< *userInput << " has been added" << endl;
            delete userInput;
        }else if(userInput->compare("select") == 0){
            cout<< "What user would you like to use?" << endl;
            cin>> *userInput;
            for(auto person : players){
                if(person.first.compare(*userInput) == 0){
                    currentUser = *userInput;
                    delete userInput;
                    cout<< "\nCurrent User: " << currentUser << endl;
                }
            }
        }else if(userInput->compare("back") == 0){
            delete userInput;
            //brings you back to the main menu
            mainMenu();
            break;
        }
    }
}
//the method just makes it so i dont have to type all this out every time
void finalDitto::sleep(unsigned int ms){
    this_thread::sleep_for(chrono::milliseconds(ms));
}
//prints out the intro fight animation
void finalDitto::startAnimation(){
    //prints the middle bars
    barLinePrint(0,22);
    barLinePrint(2,20);
    barLinePrint(4,18);
    barLinePrint(6,16);
    barLinePrint(8,14);
    barLinePrint(10,12);
    barLinePrint(12,10);
    barLinePrint(14,8);
    barLinePrint(16,6);
    barLinePrint(18,4);
    barLinePrint(20,2);
    barLinePrint(22,0);
}
//prints the bars with an varuble amount of bars on top of them
void finalDitto::barLinePrint(int amountOfLinesAbove, int amountOfLinesBelow){
    cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
    cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
    for(int i = 0; i < amountOfLinesAbove; i++){
        cout<< "\n | |                                                                                                                                                                                 | |";
    }
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |                                                                                                                                                                                 | |";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    for(int i = 0; i < amountOfLinesBelow; i++){
        cout<< "\n | |                                                                                                                                                                                 | |";
    }
    cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
    cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
    cout<< "\n |_|////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;  
    //makes the screen clear makes it wait a little bit
    sleep(10);
    system("cls");
}
void finalDitto::main(){
    string* eHealth = new string;
    string* health = new string;
    *eHealth = "<3  <3  <3  <3  <3  <3 ";
    *health = "<3  <3  <3  <3  <3  <3 ";
    //PlaySound(TEXT("finalBattleStartSound.wav"), NULL, SND_FILENAME | SND_ASYNC);
    //plays the start animation
    startAnimation();
    startAnimation();
    startAnimation();
    fightMenu(health,eHealth);
    delete health;
    delete eHealth;
}
void finalDitto::fightMenu(string* health, string* eHealth){
    updateGraphics(health, eHealth);
    while(true){
        if(eHealth->compare("</3 </3 </3 </3 </3 </3") == 0){
            system("cls");
            cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
            for(int i = 0; i< 6; i++){
                cout<< "\n | |                                                                                                                                                                                 | |";
            }
            cout<< "\n | |                                                                                 ~YOU WIN~                                                                                       | |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                                ~PLAY AGAIN~                                                                                     | |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                                ~MAIN MENU~                                                                                      | |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                                  ~QUIT~                                                                                         | |";
            for(int i = 0; i< 10; i++){
                cout<< "\n | |                                                                                                                                                                                 | |";
            }
            cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n |_|/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;
            if(currentUser.compare("_guest_") != 0){
                players[currentUser] = players[currentUser] + 1;
            }
            string* userInput = new string;
            while(true){
                cin>> *userInput;
                for(int i = 0; userInput->length() > i; i++){
                    (*userInput)[i] = tolower((*userInput)[i]);
                }
                if(userInput->compare("play") == 0){
                    delete userInput;
                    delete health;
                    main();
                    break;
                }else if(userInput->compare("main") == 0){
                    delete userInput;
                    delete health;
                    mainMenu();
                    break;
                }else if(userInput->compare("quit") == 0){
                    delete userInput;
                    delete health;
                    exitMenu();
                    break;
                }
            }
        }else if(health->compare("</3 </3 </3 </3 </3 </3") == 1){
            string* userInput = new string;
            cin>> *userInput;
            for(int i = 0; userInput->length() > i; i++){
                (*userInput)[i] = tolower((*userInput)[i]);
            }
            Attacking attack;
            if(userInput->compare("1") == 0){
                attack.gooPunch(eHealth);
                updateGraphics(health, eHealth);
                cout<< "\nGATRICK USED!!! GOOO PUNCH!!!";
            }else if(userInput->compare("2") == 0){
                attack.gooShot(health,eHealth);
                updateGraphics(health, eHealth);
                cout<< "\nGATRICK USED!!! GOOO SHOT!!!";
            }else if(userInput->compare("3") == 0){
                attack.gooGet(health,eHealth);
                updateGraphics(health, eHealth);
                cout<< "\nGATRICK USED!!! GOOO GET!!!";
            }else if(userInput->compare("4") == 0){
                attack.gooForm(health);
                updateGraphics(health, eHealth);
                cout<< "\nGATRICK USED!!! GOOO FORM!!!";
            }else if(userInput->compare("exit") == 0){
                mainMenu();
            }else{
                cout<< "\nYou Entered Wrong INPUT!!!! try a number" << endl;
            }
            sleep(1000);
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> distrib(1,100);
            short randomNum = distrib(gen);
            if(randomNum <= 40){
                attack.aiMove1(health);
                updateGraphics(health, eHealth);
                cout<< "\nGORBO USED!!! SLAP!!!" << endl;
            }else if(randomNum >= 41 && randomNum <= 65){
                attack.aiMove3(eHealth);
                updateGraphics(health, eHealth);
                cout<< "\nGORBO USED!!! MUD PIT!!!" << endl;
            }else if(randomNum >= 66 && randomNum <= 90){
                attack.aiMove4(health);
                updateGraphics(health, eHealth);
                cout<< "\nGORBO USED!!! SLERP!!!" << endl;
            }else{
                attack.aiMove2();
                updateGraphics(health, eHealth);
                cout<< "\nGORBO USED!!! KILL!!!" << endl;
            }
            delete userInput;
        }else{
            system("cls");
            cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
            for(int i = 0; i< 6; i++){
                cout<< "\n | |                                                                                                                                                                                 | |";
            }
            cout<< "\n | |                                                                                ~GAME OVER~                                                                                      | |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                                ~PLAY AGAIN~                                                                                     | |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                                ~MAIN MENU~                                                                                      | |";
            cout<< "\n | |                                                                                                                                                                                 | |";
            cout<< "\n | |                                                                                  ~QUIT~                                                                                         | |";
            for(int i = 0; i< 10; i++){
                cout<< "\n | |                                                                                                                                                                                 | |";
            }
            cout<< "\n | |---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------| |";
            cout<< "\n | |/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n |_|/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;
            string* userInput = new string;
            while(true){
                cin>> *userInput;
                for(int i = 0; userInput->length() > i; i++){
                    (*userInput)[i] = tolower((*userInput)[i]);
                }
                if(userInput->compare("play") == 0){
                    delete userInput;
                    delete health;
                    main();
                    break;
                }else if(userInput->compare("main") == 0){
                    delete userInput;
                    delete health;
                    mainMenu();
                    break;
                }else if(userInput->compare("quit") == 0){
                    delete userInput;
                    delete health;
                    exitMenu();
                    break;
                }
            }
        }
    }
}
int main(){
    Menu player;
    player.mainMenu();
    return 0;
}