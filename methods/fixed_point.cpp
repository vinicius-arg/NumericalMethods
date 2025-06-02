/*
* Arquivo:    fixed_point.cpp
* Autor:      vinicius-arg
* Data:       01-06-2025
* Objetivo:   Calcular por meio do método do ponto fixo a raíz da função F com auxílio 
*             de g. A função g é obtida a partir de F(x) = 0 rearranjado para 
*             a forma x = g(x).
*
*             Constantes dadas: f, a, b.
* Compilação: cd NumericalMethods
*             g++ main.cpp ./methods/fixed_point.cpp -o main
* Execução:   ./main
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "FixedPointIteration.h"

FixedPointIteration::FixedPointIteration(double (*f)(double x), double (*g)(double x), int p) {
    this->F = f;
    this->g = g;
    this->precision = p;
    this->column_gap = p+5;
}

void FixedPointIteration::calculate(double z_0, double nimax) {
    double z_n = z_0;

    std::cout << std::left << std::setw(this->index_gap) << "n";
    std::cout << std::left << std::setw(this->column_gap) << "z_n";
    std::cout << std::left << std::setw(this->column_gap) << "g_n";
    std::cout << std::left << std::setw(this->column_gap) << "f_n";
    std::cout << std::endl;
    
    for (int n = 0; n < nimax; n++) {
        double g_n = this->g(z_n);
        double f_n = this->F(z_n);
        
        this->print(n+1, z_n, g_n, f_n);
        z_n = g_n;
    }
}

void FixedPointIteration::print(double n, double z_n, double g_n, double f_n) {
    std::cout << std::left << std::setw(this->index_gap) << std::fixed << std::setprecision(0) << n;
    std::cout << std::fixed << std::setprecision(this->precision);
    std::cout << std::left << std::setw(this->column_gap) << z_n;
    std::cout << std::left << std::setw(this->column_gap) << g_n;
    std::cout << std::left << std::setw(this->column_gap) << f_n;
    std::cout << std::endl;
}