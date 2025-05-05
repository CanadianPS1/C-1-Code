#include <iostream>
#include <cctype>
using namespace std;
class IfStatments{
    public:
    void askName(){
        string name;
        cout<<"Whats Your Name? ";
        cin >> name;
        for(int i = 0; i < name.length(); i++){
            name[i] = tolower(name[i]);
        }
        if(name.compare("lia") == 0){
            cout<<"YOOO ME TO";
        }else{
            cout<<"WOAH THATS SICK";
        }
    }
    
    
};
int main(){
    IfStatments name;
    name.askName();
    return 0;
}
