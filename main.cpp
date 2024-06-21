//  Created by Claudio Jose Gonzalez Arriaga on 20/06/24.

#include <iostream>
#include <cmath>
#include <vector>

// Function to calculate the roots of a quadratic polynomial
std::vector<double> findRoots(double a, double b, double c) {
    std::vector<double> roots;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        double r1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double r2 = (-b - std::sqrt(discriminant)) / (2 * a);
        roots.push_back(r1);
        roots.push_back(r2);
    } else if (discriminant == 0) {
        // One real double root
        double r = -b / (2 * a);
        roots.push_back(r);
    }
    // If the discriminant is less than 0, nothing to add (complex roots)
    return roots;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        // Check if the correct number of arguments is provided
        std::cerr << "Usage: " << argv[0] << " a b c" << std::endl;
        return 1;
    }
    // Parse coefficients from command line arguments
    double a = std::stod(argv[1]);
    double b = std::stod(argv[2]);
    double c = std::stod(argv[3]);

    // Check if 'a' is zero, if a is zero it is not a quadratic polynomial
    if (a == 0) {
        std::cerr << "The coefficient 'a' cannot be zero." << std::endl;
        return 1;
    }
    
    // Calculate roots
    std::vector<double> roots = findRoots(a, b, c);

    // Output the roots
    if (roots.empty()) {
        std::cout << "{}" << std::endl;
    } else {
        std::cout << "{" << roots[0];
        if (roots.size() == 2) {
            std::cout << ", " << roots[1];
        }
        std::cout << "}" << std::endl;
    }
    return 0;
}
