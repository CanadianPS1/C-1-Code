#include <iostream>
using namespace std;

namespace mathlib {
    template<typename T>
    class fractinsMain {
    public:
        T numerator, denominator;
        fractinsMain();
        fractinsMain(T n, T d);
        void Main(fractinsMain<T> frac);
        const fractinsMain<T>* operator+(fractinsMain<T> frac2);
        const fractinsMain<T>* operator-(fractinsMain<T> frac2);
        const fractinsMain<T>* operator*(fractinsMain<T> frac2);
        const fractinsMain<T>* operator/(fractinsMain<T> frac2);
        const bool operator==(fractinsMain<T> frac2);
        const bool operator<=(fractinsMain<T> frac2);
        const bool operator>=(fractinsMain<T> frac2);
        const bool operator!=(fractinsMain<T> frac2);
        const bool operator>(fractinsMain<T> frac2);
        const bool operator<(fractinsMain<T> frac2);
        const double toDouble();
        const fractinsMain<T> simplefy();
    };
}
