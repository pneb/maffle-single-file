/*
Create a library that is similar to math but more faster and shorter
*/

#ifndef Maffle_Math
#define Maffle_Math

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Math Functions
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int power(int a, int b);
int square(int a);
int cube(int a);
int square_root(int a);
int cube_root(int a);
int factorial(int a);
int absolute(int a);
int log(int a);
int log10(int a);
int log2(int a);
int logn(int a, int b);
int sin(int a);
int cos(int a);
int tan(int a);
int cot(int a);
int sec(int a);
int csc(int a);
int sinh(int a);
int cosh(int a);
int tanh(int a);
int coth(int a);
int sech(int a);
int csch(int a);
int asin(int a);
int acos(int a);
int atan(int a);
int acot(int a);
int asec(int a);
int acsc(int a);
int asinh(int a);
int acosh(int a);
int atanh(int a);
int acoth(int a);
int asech(int a);
int acsch(int a);

// Math Functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int power(int a, int b) {
    return pow(a, b);
}

int square(int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

int square_root(int a) {
    return sqrt(a);
}

int cube_root(int a) {
    return cbrt(a);
}

int factorial(int a) {
    int i;
    int result = 1;
    for (i = 1; i <= a; i++) {
        result = result * i;
    }
    return result;
}

int absolute(int a) {
    return abs(a);
}

int log(int a) {
    return log(a);
}

int log10(int a) {
    return log10(a);
}

int log2(int a) {
    return log2(a);
}

int logn(int a, int b) {
    return log(a) / log(b);
}

int sin(int a) {
    return sin(a);
}

int cos(int a) {
    return cos(a);
}

int tan(int a) {
    return tan(a);
}

int cot(int a) {
    return 1 / tan(a);
}

int sec(int a) {
    return 1 / cos(a);
}

int csc(int a) {
    return 1 / sin(a);
}

int sinh(int a) {
    return sinh(a);
}

int cosh(int a) {
    return cosh(a);
}

int tanh(int a) {
    return tanh(a);
}

int coth(int a) {
    return 1 / tanh(a);
}

int sech(int a) {
    return 1 / cosh(a);
}

int csch(int a) {
    return 1 / sinh(a);
}

int asin(int a) {
    return asin(a);
}

int acos(int a) {
    return acos(a);
}

int atan(int a) {
    return atan(a);
}

int acot(int a) {
    return 1 / atan(a);
}

int asec(int a) {
    return 1 / acos(a);
}

int acsc(int a) {
    return 1 / asin(a);
}

int asinh(int a) {
    return asinh(a);
}

int acosh(int a) {
    return acosh(a);
}

int atanh(int a) {
    return atanh(a);
}

int acoth(int a) {
    return 1 / atanh(a);
}

int asech(int a) {
    return 1 / acosh(a);
}

int acsch(int a) {
    return 1 / asinh(a);
}

#endif
