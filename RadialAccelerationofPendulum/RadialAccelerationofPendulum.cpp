#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


int main() {
    double m, g, theta;
    double T_horizontal, T_vertical, a_r;
    char choice;

    do {
        // Input values
        std::cout << "Enter the mass (m) in kg: ";
        std::cin >> m;

        std::cout << "Enter the gravitational acceleration (g) in m/s^2: ";
        std::cin >> g;

        std::cout << "Enter the angle (theta) in degrees: ";
        std::cin >> theta;

        // Convert theta to radians
        theta = theta * M_PI / 180.0;

        // Calculations
        T_vertical = m * g;
        T_horizontal = m * g * tan(theta);
        a_r = T_horizontal / m;

        // Display results
        std::cout << "\nResults:\n";
        std::cout << "Horizontal component of the force: " << T_horizontal << " N i-hat\n";
        std::cout << "Vertical component of the force: " << T_vertical << " N j-hat\n";
        std::cout << "Radial acceleration of the bob: " << a_r << " m/s^2\n";

        // Ask user if they want to continue
        std::cout << "\nDo you want to enter more variables for another problem? (y/n): ";
        std::cin >> choice;
        std::cout << "\n";

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
