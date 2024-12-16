#include "Mandelbrot.h"

Mandelbrot::Mandelbrot(int width, int height, int maxIterations)
    : width(width), height(height), maxIterations(maxIterations), iterations(width * height) {}

void Mandelbrot::generate() {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            // Map pixel to complex plane
            std::complex<double> c(
                (x - width / 2.0) * 4.0 / width,
                (y - height / 2.0) * 4.0 / height
            );

            // Calculate iterations
            int iter = calculateIterations(c);

            // Store iteration count
            iterations[y * width + x] = iter;
        }
    }
}

int Mandelbrot::calculateIterations(std::complex<double> c) const {
    std::complex<double> z = 0;
    int iter = 0;
    while (std::abs(z) <= 2.0 && iter < maxIterations) {
        z = z * z + c;
        ++iter;
    }
    return iter;
}

const std::vector<int>& Mandelbrot::getIterations() const {
    return iterations;
}
