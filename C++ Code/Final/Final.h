#include <iostream>
#include <thread>
#include <windows.h>
#include <mmsystem.h>
#include <map>
#include <random>
using namespace std;
class Menu {
public:
    void mainMenu();
    void exitMenu();
    void userMenu();
};
class finalDitto : public Menu {
public:
    void sleep(unsigned int ms);
    void startAnimation();
    void barLinePrint(int amountOfLinesAbove, int amountOfLinesBelow);
    void main();
    void fightMenu(string* health, string* eHealth);
    void updateGraphics(string* health, string* eHealth);
    virtual void gooPunch(string* eHealth);
    virtual void gooShot(string* health, string* eHealth);
    virtual void gooGet(string* health, string* eHealth);
    virtual void gooForm(string* health);
    virtual void aiMove1(string* eHealth);
    virtual void aiMove2();
    virtual void aiMove3(string* health);
    virtual void aiMove4(string* eHealth);
};
class Attacking : public finalDitto{
    public:
    string operator - (string* health, int times);
    void gooPunch(string* eHealth) override;
    void gooShot(string* health, string* eHealth) override;
    void gooGet(string* health, string* eHealth) override;
    void gooForm(string* health) override;
    void aiMove1(string* eHealth) override;
    void aiMove2() override;
    void aiMove3(string* health) override;
    void aiMove4(string* eHealth) override;
    string decreseHealth(string* health);
    string increseHealth(string* health);
};