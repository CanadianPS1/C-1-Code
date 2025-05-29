#include <iostream>
#include "Fractions.h"
#include <algorithm> 
using namespace std;
namespace mathlib{
    const fractinsMain* fractinsMain::operator + (fractinsMain frac){
        fractinsMain* newFrac = new fractinsMain;
        newFrac->numerator = numerator + frac.numerator;
        newFrac->denominator = denominator + frac.denominator;
        cout<< endl << "Fraction: " << numerator << "/" << denominator << endl;
        return newFrac;
    }
    const fractinsMain* fractinsMain::operator - (fractinsMain frac){
        fractinsMain* newFrac = new fractinsMain;
        newFrac->numerator = numerator - frac.numerator;
        newFrac->denominator = denominator - frac.denominator;
        cout<< endl << "Fraction: " << numerator << "/" << denominator << endl;
        return newFrac;
    }
    const fractinsMain* fractinsMain::operator * (fractinsMain frac){
        fractinsMain* newFrac = new fractinsMain;
        newFrac->numerator = numerator * frac.numerator;
        newFrac->denominator = denominator * frac.denominator;
        cout<< endl << "Fraction: " << numerator << "/" << denominator << endl;
        return newFrac;
    }
    const fractinsMain* fractinsMain::operator / (fractinsMain frac){
        fractinsMain* newFrac = new fractinsMain;
        newFrac->numerator = numerator * frac.denominator;
        newFrac->denominator = denominator * frac.numerator;
        cout<< endl << "Fraction: " << numerator << "/" << denominator << endl;
        return newFrac;
    }
    const bool fractinsMain::operator == (fractinsMain frac){
        if((numerator / denominator) == (frac.numerator / denominator)){
            return true;
        }else{
            return false;
        }
        return false;
    }
    const bool fractinsMain::operator != (fractinsMain frac){
        if((numerator / denominator) != (frac.numerator / denominator)){
            return true;
        }else{
            return false;
        }
        return false;
    }
    const bool fractinsMain::operator <= (fractinsMain frac){
        if((numerator / denominator) <= (frac.numerator / denominator)){
            return true;
        }else{
            return false;
        }
        return false;
    }
    const bool fractinsMain::operator >= (fractinsMain frac){
        if((numerator / denominator) >= (frac.numerator / denominator)){
            return true;
        }else{
            return false;
        }
        return false;
    }
    const bool fractinsMain::operator < (fractinsMain frac){
        if((numerator / denominator) < (frac.numerator / denominator)){
            return true;
        }else{
            return false;
        }
        return false;
    }
    const bool fractinsMain::operator > (fractinsMain frac){
        if((numerator / denominator) > (frac.numerator / denominator)){
            return true;
        }else{
            return false;
        }
        return false;
    }
    fractinsMain::fractinsMain(int n, int d){
        numerator = n;
        denominator = d;
    }
    const double fractinsMain::toDouble(){
        return numerator / denominator;
    }
    const fractinsMain fractinsMain::simplefy(){
        int GCF;
        GCF = __gcd(numerator, denominator);
        fractinsMain newFrac;
        newFrac.numerator = numerator / GCF;
    }
    void fractinsMain::Main(){

    }
}
//calls the main class
int main(){
    int* numerator = new int;
    int* denominator = new int;
    cout<< "Enter a Numerator: ";
    cin>> *numerator;
    while(true){
        cout<< endl << "Enter a Denomanator: ";
        cin>> *denominator;
        if(*denominator == 0){
            cout<< endl << "The Denomanator cant NOT be zero" << endl;
        }else{
            break;
        }
    }
    fractinsMain* frac = new fractinsMain(*numerator,*denominator);
    frac->Main();
    delete frac;
    return 0;
}