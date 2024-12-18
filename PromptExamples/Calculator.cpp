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

/**
 * @brief Computes the square of a given number.
 * 
 * This function takes a double precision floating point number as input
 * and returns its square. If an exception occurs during the computation,
 * it catches the exception, logs an error message, and rethrows the exception.
 * 
 * @param a The number to be squared.
 * @return double The square of the input number.
 * @throws std::exception If an error occurs during the computation.
 */
double Calculator::square(double a) {
    try {
        return a * a;
    } catch (const exception& e) {
        cerr << "This is incorrect: " << e.what() << endl;
        throw;
    }
}
