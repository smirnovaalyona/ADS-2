// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
    double t = 1;
    while (n != 0) {
 n--;
 t = t * value;
    }
    return t;
}

uint64_t fact(uint16_t n) {
    if (n == 1 || n==0) {
    if (n == 1 || n == 0) {
        return 1;
    }

    return n * fact(n - 1);
}
double calcItem(double x, uint16_t n) {
     return pown(x, n) / fact(n);
}
double expn(double x, uint16_t count) {
    double t = 0;
    while (count != 0) {
       t += calcItem(x, count--);
    }
    return t + 1.0;
}
double sinn(double x, uint16_t count) {
    double t = 0;
    while (count != 0) {
 t += pown(-1, count-1)*calcItem(x, 2 * count - 1);
 count--;
    }
    return t;
}
double cosn(double x, uint16_t count) {
    double t = 0;
    while (count != 0) {
 t += pown(-1, count - 1) * calcItem(x, 2 * count - 2);
 count--;
    }
    return t;
}

