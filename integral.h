#include <stdlib.h>
#include <math.h>
#include <stdio.h>
double integrate(double (*f)(double), double start, double stop, double step){
    double res, x, tmp;
    int z = 1;
    if (start == stop){
        return 0;
    }
    if (start > stop){
        z = -1;
        tmp = start; start = stop; stop = tmp;
    }
    x = start;
    res = -f(start);
    while ((x + step) <= stop){
        x += step;
        res += f(x) * 2;
    }
    res -= f(x);
    res = (res * step);
    res = res / 2;
    return res * z;
}
