// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
    double temp = 1;
    while (n != 0) {
        n--;
        temp = temp * value;
    }
    return temp;
}

uint64_t fact(uint16_t n) {
    if (n == 1 || n == 0) {
    if (n == 1 || n == 0) {
        return 1;
    }

    return n * fact(n - 1);
}
double calcItem(double x, uint16_t n) {
     return pown(x, n) / fact(n);
}
double expn(double x, uint16_t count) {
    double temp = 0;
    while (count != 0) {
       temp += calcItem(x, count--);
    }
    return temp + 1.0;
}
double sinn(double x, uint16_t count) {
    double temp = 0;
    while (count != 0) {
        temp += pown(-1, count-1)*calcItem(x, 2 * count - 1);
        count--;
    }
    return temp;
}
double cosn(double x, uint16_t count) {
    double temp = 0;
    while (count != 0) {
        temp += pown(-1, count - 1) * calcItem(x, 2 * count - 2);
        count--;
    }
    return temp;
}
