#include <iostream>
#include "Fractions.h"
#include <algorithm> 
#include <numeric>
using namespace std;
namespace mathlib {
    template<typename T>
    const fractinsMain<T>* fractinsMain<T>::operator+(fractinsMain<T> frac){
        fractinsMain<T>* newFrac = new fractinsMain<T>;
        newFrac->numerator = numerator * frac.denominator + denominator * frac.numerator;
        newFrac->denominator = denominator * frac.denominator;
        cout << endl << "Fraction: " << newFrac->numerator << "/" << newFrac->denominator << endl;
        return newFrac;
    }
    template<typename T>
    const fractinsMain<T>* fractinsMain<T>::operator-(fractinsMain<T> frac){
        fractinsMain<T>* newFrac = new fractinsMain<T>;
        newFrac->numerator = numerator * frac.denominator - denominator * frac.numerator;
        newFrac->denominator = denominator * frac.denominator;
        cout << endl << "Fraction: " << newFrac->numerator << "/" << newFrac->denominator << endl;
        return newFrac;
    }
    template<typename T>
    const fractinsMain<T>* fractinsMain<T>::operator*(fractinsMain<T> frac){
        fractinsMain<T>* newFrac = new fractinsMain<T>;
        newFrac->numerator = numerator * frac.numerator;
        newFrac->denominator = denominator * frac.denominator;
        cout<< endl << "Fraction: " << numerator << "/" << denominator << endl;
        return newFrac;
    }
    template<typename T>
    const fractinsMain<T>* fractinsMain<T>::operator/(fractinsMain<T> frac){
        fractinsMain<T>* newFrac = new fractinsMain<T>;
        newFrac->numerator = numerator * frac.denominator;
        newFrac->denominator = denominator * frac.numerator;
        cout<< endl << "Fraction: " << numerator << "/" << denominator << endl;
        return newFrac;
    }
    template<typename T>
    const bool fractinsMain<T>::operator==(fractinsMain<T> frac){
        return numerator * frac.denominator == frac.numerator * denominator;
    }
    template<typename T>
    const bool fractinsMain<T>::operator!=(fractinsMain<T> frac){
        return !(*this == frac);
    }
    template<typename T>
    const bool fractinsMain<T>::operator<=(fractinsMain<T> frac){
        return numerator * frac.denominator <= frac.numerator * denominator;
    }
    template<typename T>
    const bool fractinsMain<T>::operator>=(fractinsMain<T> frac){
        return numerator * frac.denominator >= frac.numerator * denominator;
    }
    template<typename T>
    const bool fractinsMain<T>::operator<(fractinsMain<T> frac){
        return numerator * frac.denominator < frac.numerator * denominator;
    }
    template<typename T>
    const bool fractinsMain<T>::operator>(fractinsMain<T> frac){
        return numerator * frac.denominator > frac.numerator * denominator;
    }
    template<typename T>
    fractinsMain<T>::fractinsMain(T n, T d){
        numerator = n;
        denominator = d;
    }
    template<typename T>
    fractinsMain<T>::fractinsMain(){ }
    template<typename T>
    const double fractinsMain<T>::toDouble(){
        return static_cast<double>(numerator) / denominator;
    }
    template<typename T>
    const fractinsMain<T> fractinsMain<T>::simplefy(){
        T GCF = std::gcd(numerator, denominator);
        fractinsMain<T> newFrac;
        newFrac.numerator = numerator / GCF;
        newFrac.denominator = denominator / GCF;
        return newFrac;
    }
    template<typename T>
    void fractinsMain<T>::Main(fractinsMain<T> frac){
        //cout<< frac - 2 << endl;
    }
}
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
    mathlib::fractinsMain<int>* frac = new mathlib::fractinsMain<int>(*numerator,*denominator);
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
    mathlib::fractinsMain<int>* frac2 = new mathlib::fractinsMain<int>(*numerator,*denominator);
    *frac + *frac2;
    *frac / *frac2;
    *frac * *frac2;
    *frac - *frac2;
    *frac < *frac2;
    *frac > *frac2;
    *frac <= *frac2;
    *frac >=*frac2;
    *frac == *frac2;
    *frac != *frac2;
    delete frac;
    delete frac2;
    delete numerator;
    delete denominator;
    return 0;
}
