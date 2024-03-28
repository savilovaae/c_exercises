#include "tasks.h"

void hello_world() {
    printf("Hello world");
    printf("\n");
    printf("and bye... \t \t bye...");
    printf("\n");
}

void upgraded_fahr_calculate() {
    printf("Calculate celsius\n");
    printf("fahr->celsius\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.0f %6.2f \n", fahr, celsius);
        fahr = fahr + step;
    }
}

void celsius_calculate() {
    printf("Calculate fahr\n");
    printf("celsius->fahr\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 * celsius) / 5.0 + 32.0;
        printf("%6.0f %3.2f \n", celsius, fahr);
        celsius = celsius + step;
    }
}