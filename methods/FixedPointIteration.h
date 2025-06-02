#ifndef FP
#define FP

class FixedPointIteration {
private:
    double (*F)(double x);
    double (*g)(double x);
    int precision;
    int column_gap;

    const int index_gap  = 5;

public:
    FixedPointIteration(double (*f)(double x), double (*g)(double x), int precision);
    void calculate(double z_0, double N);
    void print(double n, double z_n, double g_n, double f_n);
    void print(std::string n, std::string z_n, std::string g_n, std::string f_n);
};

#endif