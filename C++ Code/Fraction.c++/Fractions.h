#include <iostream>
using namespace std;
class fractinsMain{
    public:
    int numerator, denominator;
    public:
    fractinsMain();
    fractinsMain(int n, int d);
    void Main();
    const fractinsMain* operator + (fractinsMain frac2);
    const fractinsMain* operator - (fractinsMain frac2);
    const fractinsMain* operator * (fractinsMain frac2);
    const fractinsMain* operator / (fractinsMain frac2);
    const bool operator == (fractinsMain frac2);
    const bool operator <= (fractinsMain frac2);
    const bool operator >= (fractinsMain frac2);
    const bool operator != (fractinsMain frac2);
    const bool operator > (fractinsMain frac2);
    const bool operator < (fractinsMain frac2);
    const double toDouble();
    const fractinsMain simplefy();
};