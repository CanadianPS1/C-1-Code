#include <iostream>
#include <thread>
#include <windows.h>
#include <mmsystem.h>
using namespace std;
//class PokiDexDitto;
//declares the methods for the menu class
class Menu {
public:
    void mainMenu();
    void exitMenu();
    void userMenu();
};
//decares the methods for the pokemon class
class PokiDexDitto : public Menu {
public:
    void sleep(unsigned int ms);
    void startAnimation();
    void barLinePrint(int amountOfLinesAbove, int amountOfLinesBelow);
    void main();
    void fightMenu(string* health, string* eHealth);
};
class Attacking : public PokiDexDitto{
    public:
    void gooPunch(string* health, string* eHealth);
    void gooShot(string* health, string* eHealth);
    void gooGet(string* health, string* eHealth);
    void gooForm(string* health);
    string decreseHealth(string* health);
    string increseHealth(string* health);
};
void Attacking::gooPunch(string* health, string* eHealth){
    *eHealth = decreseHealth(eHealth);
}
void Attacking::gooShot(string* health, string* eHealth){
    *eHealth = decreseHealth(eHealth);
    *eHealth = decreseHealth(eHealth);
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
    delete health;
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
            PokiDexDitto mode;
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
    while(true){
        cin>> *userInput;
        //puts the user input into lower case
        for(int i = 0; userInput->length() > i; i++){
            (*userInput)[i] = tolower((*userInput)[i]);
        }
        if(userInput->compare("list") == 0){
            delete userInput;
            cout<< "listing";
            break;
        }else if(userInput->compare("add") == 0){
            delete userInput;
            cout<< "adding";
            break;
        }else if(userInput->compare("select") == 0){
            delete userInput;
            cout<< "selecting";
            break;
        }else if(userInput->compare("back") == 0){
            delete userInput;
            //brings you backto the main menu
            mainMenu();
            break;
        }
    }
}
//the method just makes it so i dont have to type all this out every time
void PokiDexDitto::sleep(unsigned int ms){
    this_thread::sleep_for(chrono::milliseconds(ms));
}
//prints out the intro fight animation
void PokiDexDitto::startAnimation(){
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
void PokiDexDitto::barLinePrint(int amountOfLinesAbove, int amountOfLinesBelow){
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
void PokiDexDitto::main(){
    string* eHealth = new string;
    string* health = new string;
    *eHealth = "<3  <3  <3  <3  <3  <3 ";
    *health = "<3  <3  <3  <3  <3  <3 ";
    //PlaySound(TEXT("PokemonBattleStartSound.wav"), NULL, SND_FILENAME | SND_ASYNC);
    //plays the start animation
    startAnimation();
    startAnimation();
    startAnimation();
    fightMenu(health,eHealth);
    delete health;
    delete eHealth;
}
void PokiDexDitto::fightMenu(string* health, string* eHealth){
    system("cls");
    while(true){
        if(health->compare("</3 </3 </3 </3 </3 </3") == 1){
            string* userInput = new string;
            cout<< "\n _______________________________________________________________________________________________________________________________________________________________________________________";
            cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n | |----------------------------------------------------||---------------------------------------------------------------------------------------------------------------------------| |";
            cout<< "\n | |                                                    ||                                                                                                                           | |";
            cout<< "\n | |                        HP                          ||                                                                                      " <<*eHealth<< "              | |";
            cout<< "\n | |              " <<*health<< "               ||                                                                                                                           | |";
            cout<< "\n | |                                                    ||                                                                                                                           | |";
            cout<< "\n | |        (1) Goo Punch    (2) Goo Shot               ||                                                                                                                           | |";
            cout<< "\n | |                                                    ||                                                                                                                           | |";
            cout<< "\n | |        (3) Goo Get      (4) Goo Form               ||                                                                                                                           | |";
            for(int i = 0; i< 4; i++){
                cout<< "\n | |                                                    ||                                                                                                                           | |";
            }
            for(int i = 0; i< 12; i++){
                cout<< "\n | |                                                    ||                                                                                                                           | |";
            }
            cout<< "\n | |----------------------------------------------------||---------------------------------------------------------------------------------------------------------------------------| |";
            cout<< "\n | |////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////| |";
            cout<< "\n |_|////////////////////////////////////////////////////||///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////|_|" << endl;  
            cin>> *userInput;
            for(int i = 0; userInput->length() > i; i++){
                (*userInput)[i] = tolower((*userInput)[i]);
            }
            if(userInput->compare("1") == 0){
                cout<< "\nGATRICK USED!!! GOOO PUNCH!!!";
                Attacking attack;
                attack.gooPunch(health,eHealth);
            }else if(userInput->compare("2") == 0){
                cout<< "\nGATRICK USED!!! GOOO SHOT!!!";
                Attacking attack;
                attack.gooShot(health,eHealth);
            }else if(userInput->compare("3") == 0){
                cout<< "\nGATRICK USED!!! GOOO GET!!!";
                Attacking attack;
                attack.gooGet(health,eHealth);
            }else if(userInput->compare("4") == 0){
                cout<< "\nGATRICK USED!!! GOOO FORM!!";
                Attacking attack;
                attack.gooForm(health);
            }else if(userInput->compare("exit")){
                mainMenu();
            }else{
                cout<< "\nYou Entered Wrong INPUT!!!! try a number" << endl;
            }
            cout<< "\n~ENTER ANY LETTER~" << endl;
            cin>> *userInput;
            system("cls");
            delete userInput;
        }else{
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