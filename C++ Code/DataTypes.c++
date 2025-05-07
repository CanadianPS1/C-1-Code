#include <iostream>
using namespace std;
class primitiveStuff{
    public:
    void main(){
        //declares all my vars
        string name;
        char initial;
        short age;
        short daysWorked = 8;
        bool isAdult;
        unsigned int zipcode;
        int amountOfHoursWorked;
        float grossIncome;
        float taxAmount;
        float netIncome;
        float wage;
        float hoursWorkedPerDay[7];
        const float tax = 0.1f;
        //grabs the rest of the info
        cout<< "\nEnter First Name: ";
        cin>> name;
        cout<< "\nEnter Last Name Initial: ";
        cin>> initial;
        initial = toupper(initial);        
        cout<< "\nEnter your Age: ";
        cin>> age;
        isAdult = (age >= 18);
        cout<< "\nWhats your ZipCode?: ";
        cin>> zipcode;
        cout<< "\nWhat is your Wage?: ";
        cin>> wage;
        //makes sure they dont enter more then 7 days
        while(daysWorked > 7){
            cout<< "\nHow Many days did you work last week? (max 7): ";
            cin>> daysWorked;
        }
        //grabs the hours worked for each day and adds it to the amount of hours worked var
        amountOfHoursWorked = 0;
        for(int i = 0; i < daysWorked; i++){
            cout<< "\nHow many hours did you work on day " << i + 1 << ": ";
            cin>> hoursWorkedPerDay[i];
            amountOfHoursWorked =  amountOfHoursWorked + hoursWorkedPerDay[i];
        }
        //calculates net money earned
        grossIncome = amountOfHoursWorked * wage;
        taxAmount = grossIncome * tax;
        netIncome = grossIncome - taxAmount;
        //prints all the info to the user
        cout<< "\n~~Employee Information~~";
        cout<< "\n-------------------------";
        cout<< "  \nName: " << name << ". " << initial;
        cout<< "  \nAge: " << age << " (Adult: " << (isAdult ? "Yes" : "No") <<")";
        cout<< "  \nZipCode: " << zipcode;
        cout<< "  \nHourly Wage: $" << wage << " Per Hour";
        cout<< "  \nTotal Hours Worked: " <<amountOfHoursWorked;
        cout<< "  \nGross Income: " << grossIncome;
        cout<< "  \nTaxed Income: " << taxAmount;
        cout<< "  \nNet Income: " << netIncome;
    }
};
//runs the main method
int main(){
    primitiveStuff ps;
    ps.main();
    return 0;
}
