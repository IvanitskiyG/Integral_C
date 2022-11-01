#include <stdlib.h>
#include <math.h>

struct func{
    char * def;
    char * formula;
    double (*operation)(double);
};

struct func makefunc(char * def, char * formula, double (*operation)(double)){
    struct func res;
    res.def = def;
    res.formula = formula;
    res.operation = operation;
    return res;
};

double sqr(double x){
    return x * x;
};

double sin_f(double x){
    return sin(x);
};

double cos_f(double x){
    return cos(x);
};

double exp_f(double x){
    return exp(x);
};


struct func square = {"Calculates square of x", "x ^ 2", *sqr};
struct func sine = {"Calculates sine of x", "sin(x)", *sin_f};
struct func cosine = {"Calculates cosine of x", "cos(x)", *cos_f};
struct func exponential = {"Calculates e^x", "e ^ x", *exp_f};
