// Copyright 2022 NNTU-CS
#include <alg.h>
#include <cstdint>

double pown(double value, uint16_t n) {
    double tm = 1;
    while (n != 0) {
        n--;
        tm = tm * value;
    }
    return tm;
}

uint64_t fact(uint16_t n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double tm = 0;
    while (count != 0) {
        tm += calcItem(x, count--);
    }
    return tm + 1.0;
}

double sinn(double x, uint16_t count) {
    double tm = 0;
    while (count != 0) {
        tm += pown(-1, count - 1) * calcItem(x, 2 * count - 1);
        count--;
    }
    return tm;
}

double cosn(double x, uint16_t count) {
    double tm = 0;
    while (count != 0) {
        tm += pown(-1, count - 1) * calcItem(x, 2 * count - 2);
        count--;
    }
    return tm;
}
