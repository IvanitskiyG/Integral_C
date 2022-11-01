#include <stdlib.h.>
#include <stdio.h>
#include "functions.h"
#include "integral.h"

int main(){
    double x, start, stop, step, res;
    int iinp;
    struct func functions[] = {square, sine, cosine, exponential};
    struct func selected_func;
    int length = sizeof(functions) / sizeof(functions[0]);
    printf("Select a function\n");
    for (int i = 1; i <= length; i++){
        printf("%d: %s; %s\n", i, functions[i - 1].def, functions[i - 1].formula);
    }
    do
        scanf("%d", &iinp);
    while ((iinp < 1) || (iinp > length));
    selected_func = functions[iinp - 1];
    printf("Enter start: ");
    scanf("%lf", &start);
    printf("Enter stop:  ");
    scanf("%lf", &stop);
    printf("Enter step:  ");
    scanf("%lf", &step);
    res = integrate(selected_func.operation, start, stop, step);
    printf("\n%lf\n  |\n", stop);
    printf("  | %s dx = %lf\n  |\n", selected_func.formula, res);
    printf("%lf\n", start);
    printf("dx = %lf", step);
}
