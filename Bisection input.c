#include <stdio.h>
#include <math.h>

// Function definition
double f(double x) {
    // Example function: f(x) = x^3 - x - 2
    return x * x * x - x - 2;
}

// Bisection Method implementation
void bisection(double a, double b, double tol) {
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval. The function must have opposite signs at a and b.\n");
        return;
    }

    double c;  // Midpoint
    while ((b - a) >= tol) {
        c = (a + b) / 2;  // Midpoint

        // If f(c) is zero or sufficiently close, root is found
        if (fabs(f(c)) <= tol) {
            printf("Root found at: %lf\n", c);
            return;
        }

        // Narrow down the interval based on the sign of f(c)
        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    // Output the approximation
    printf("The root is approximately: %lf\n", c);
}

int main() {
    double a, b, tolerance;

    // Input interval and tolerance
    printf("Enter the interval [a, b]:\n");
    scanf("%lf %lf", &a, &b);

    printf("Enter the tolerance: ");
    scanf("%lf", &tolerance);

    // Call Bisection Method
    bisection(a, b, tolerance);

    return 0;
}
