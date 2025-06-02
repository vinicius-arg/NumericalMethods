#include <iostream>
#include <cmath>

#include "./methods/FixedPointIteration.h"

double const f = 1e-2;
double const a = 1;
double const b = 1e-3;

double F(double x) {
    return f*(1-x/a)*(1-x/b);
}

double g_a(double x) {
    return sqrt((a+b)*x-a*b);
}

double g_b(double x) {
    return (a+b-(a*b)/x);
}

int main(int argc, char* argv[]) {
    int const nimax = 10;
    double const z_0 = 3.0;
    int const significant_digits = 10;

    FixedPointIteration iterator_a(F, g_a, significant_digits);
    FixedPointIteration iterator_b(F, g_b, significant_digits);
    
    iterator_b.calculate(z_0, nimax);
    /*
    iterator_a.calculate(z_0, nimax);
    */
}