// PromptExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include "Calculator.h"
#include "termcolor.hpp" // Include the termcolor header
#include "Mandelbrot.h" // Include the Mandelbrot header


int main()
{

    // Instantiate the Calculator object
    Calculator calc;

    // Call the add method
    double resultAdd = calc.sum(10.0, 5.0);
    //std::cout << "Addition: " << resultAdd << std::endl;
    std::cout << termcolor::green << "Addition: " << resultAdd << termcolor::reset << std::endl;

    // Call the subtract method
    double resultSubtract = calc.subtract(10.0, 5.0);
    std::cout << "Subtraction: " << resultSubtract << std::endl;

    // Call the multiply method
    double resultMultiply = calc.multiply(10.0, 5.0);
    std::cout << "Multiplication: " << resultMultiply << std::endl;

    // Call the sqrt method
    try {
        double resultSqrt = calc.sqrt(25.0);
        std::cout << "Square root: " << resultSqrt << std::endl;

    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    // Call the square method and implement try catch block
    try {
        double resultSquare = calc.square(5.0);
        //std::cout << "Square: " << resultSquare << std::endl;
        std::cout << termcolor::cyan << "Square: " << resultSquare << termcolor::reset << std::endl;

    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    // Call the divide method
    try {
        double resultDivide = calc.divide(10.0, 5.0);
        std::cout << "Division: " << resultDivide << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

	//Instantiate the Mandelbrot object with width, height, and maxIterations and call the generate method

	Mandelbrot mandelbrot(80, 40, 100);
	mandelbrot.generate();

	//Get the iterations and print them
	const std::vector<int>& iterations = mandelbrot.getIterations();
	for (int y = 0; y < 40; ++y) {
		for (int x = 0; x < 80; ++x) {
			int iter = iterations[y * 80 + x];
			char c = (iter == 100) ? '#' : '.';
			std::cout << c;
		}
		std::cout << std::endl;
	}
    return 0;


}

