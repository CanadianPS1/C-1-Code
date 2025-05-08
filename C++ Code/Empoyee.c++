#include "Employee.h"
using namespace std;
const float Employee::TAX = 0.1f;
//grabs all the info from the user
void Employee::Read(){
    cout<< "\nEnter First Name: ";
    cin>> name;       
    cout<< "\nEnter your Age: ";
    cin>> age;
    cout<< "\nWhats your ZipCode?: ";
    cin>> zipcode;
    cout<< "\nWhat is your Wage?: ";
    cin>> wage;
    cout<< "\nEnter Total Hours Worked this Week: ";
    cin>> hoursWorked;
}
//prints all the info to the user
void Employee::Write(){
    float weeklyGross = wage * hoursWorked;
    float weeklyTax = weeklyGross * TAX;
    float weeklyNet = weeklyGross - weeklyTax;
    float yearlyGross = weeklyGross * 52;
    float yearlyNet = yearlyGross - (yearlyGross * TAX);
    cout<< "\n~~Employee Information~~";
    cout<< "\n-------------------------\n";
    cout<< "  \nName: " << name;
    cout<< "  \nAge: " << age;
    cout<< "  \nZipCode: " << zipcode;
    cout<< "  \nHourly Wage: $" << wage << " Per Hour";
    cout<< "  \nTotal Hours Worked: " << hoursWorked;
    cout<< "  \nWeekly Net: " << weeklyNet;
    cout<< "  \nYearly Gross: " << yearlyGross;
    cout<< "  \nYearly Net: " << yearlyNet << "\n";
}
//the main function that runs everything
int main(){
    int numEmployees;
    cout << "\nHow Many Employees do you have? (max 5): ";
    cin >> numEmployees;
    if(numEmployees > 5){
         numEmployees = 5;
    }
    Employee employees[5];
    for(int i = 0; i < numEmployees; i++){
        cout<< "\nEnter Details for Employee " << (i + 1) << ":\n";
        employees[i].Read();
    }
    cout<< "\n--- Payroll Summary ---\n";
    for(int i = 0; i < numEmployees; i++){
        employees[i].Write();
    }
    return 0;
}