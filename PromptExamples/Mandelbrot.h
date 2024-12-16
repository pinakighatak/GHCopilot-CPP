#ifndef MANDELBROT_H
#define MANDELBROT_H

#include <complex>
#include <vector>

class Mandelbrot {
public:
    Mandelbrot(int width, int height, int maxIterations);
    void generate();
    const std::vector<int>& getIterations() const;

private:
    int width;
    int height;
    int maxIterations;
    std::vector<int> iterations;

    int calculateIterations(std::complex<double> c) const;
};

#endif // MANDELBROT_H
