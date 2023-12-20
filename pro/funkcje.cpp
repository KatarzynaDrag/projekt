#include <cmath>
#include "funkcje.h"

using namespace std;

double logarytmNaturalny(double x) {
    return log(x);
}

double odchylenieStandardowe(double array[], int size) {

    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    double mean = sum / size;
    double variance = 0.0;

    for (int i = 0; i < size; ++i) {
        variance += pow(array[i] - mean, 2);
    }

    return sqrt(variance / (size - 1));
}

double wartoscExponentu(double x) {
    return exp(x);
}

double logarytmDziesietny(double x) {
    return log(x) / log(10.0);
}