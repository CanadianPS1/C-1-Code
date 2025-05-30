#include <iostream>
#include <vector>
using namespace std;
enum class SquidGame{
    RED_SUIT_MEN,
    CONTESTENTS
};
class Database{
    public:
    string name;
    public:
    virtual ~Database(); // Destructor
    vector<Database*> Create(SquidGame type,vector<Database*> people);
    void DisplayAll(vector<Database*> people);
    void Display(vector<Database*> people, string name);
    void Display(vector<Database*>, SquidGame job);
    virtual void Read(ostream& ostream, istream& istream);
    virtual void Write(ostream& ostream); 
    string getName();
    virtual SquidGame getType() = 0;
};
class Contestents : public Database{
    public:
    int number;
    public:
    int getNumber();
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;
    SquidGame getType() override {return SquidGame::CONTESTENTS;}
};
class Grunts : public Database{
    public:
    int kills;
    int getKills();
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;
    SquidGame getType() override {return SquidGame::RED_SUIT_MEN;}
};