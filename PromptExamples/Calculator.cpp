#include "Calculator.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

double Calculator::sum(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Error: Division by zero");
    }
    return a / b;
}

double Calculator::sqrt(double a) {
    if (a < 0) {
        throw invalid_argument("Error: Square root of negative number");
    }
    return std::sqrt(a);
}

double Calculator::square(double a) {
    return a * a;
}
