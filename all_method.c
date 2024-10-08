#include <stdio.h>
#include <math.h>

// Define the function and its derivative
float f(float x) {
    return x* x * x - 4* x - 9;
}

float df(float x) {
    return 3 * x * x - 4;  // Derivative: 3x^2 - 1
}

// Automatically find a suitable integer interval [a, b] where f(a) * f(b) < 0
int find_integer_interval(int *a, int *b) {
    *a = 0;          // Start at 0
    *b = *a + 1;     // Initialize b as the next integer

    // Search for an interval where f(a) and f(b) have opposite signs
    while (f(*a) * f(*b) >= 0) {  // Keep expanding until signs of f(a) and f(b) differ
        *a = *b;
        *b = *b + 1;
        if (*b > 100) {  // Prevent infinite loops by capping the upper bound
            printf("Unable to find a suitable interval with integer values.\n");
            return 0;
        }
    }
    printf("Integer interval found: [a = %d, b = %d] where f(a) = %.6f and f(b) = %.6f\n", *a, *b, f(*a), f(*b));
    return 1;  // Return success
}

// Find an integer initial guess for the Newton-Raphson method
int find_initial_guess(int *x0) {
    *x0 = 0;  // Start at 0
    while (f(*x0) * f(*x0 + 1) >= 0) {  // Search for a sign change
        (*x0)++;
        if (*x0 > 100) {  // Prevent infinite loops
            printf("Unable to find a suitable initial guess.\n");
            return 0;
        }
    }
    printf("Initial guess found: x0 = %d where f(x0) = %.6f\n", *x0, f(*x0));
    return 1;  // Return success
}

// Bisection Method using floats after finding integer interval
void bisection(float a, float b, float tol, int max_iter) {
    int itr = 0;
    float c;

    if (f(a) * f(b) >= 0) {
        printf("Incorrect initial guesses.\n");
        return;
    }

    printf("\nBisection Method:\n");
    printf("Iter \t a \t\t b \t\t Midpoint \t f(Midpoint)\n");

    while (fabs(b - a) >= tol && itr < max_iter) {
        c = (a + b) / 2.0;  // Midpoint
        printf("%d \t %.6f \t %.6f \t %.6f \t %.6f\n", itr + 1, a, b, c, f(c));

        if (fabs(f(c)) < tol) {
            break;
        }

        // Update the interval
        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }

        itr++;
    }
    printf("Root: %f\n", c);
}

// Regula Falsi Method (False Position)
void regula_falsi(float a, float b, float tol, int max_iter) {
    int itr = 0;
    float c;

    if (f(a) * f(b) >= 0) {
        printf("Incorrect initial guesses.\n");
        return;
    }

    printf("\nRegula Falsi Method:\n");
    printf("Iter \t a \t\t b \t\t x \t\t f(x)\n");

    while (itr < max_iter) {
        c = a - (f(a) * (b - a)) / (f(b) - f(a));  // Calculate the new estimate using false position method
        printf("%d \t %.6f \t %.6f \t %.6f \t %.6f\n", itr + 1, a, b, c, f(c));

        if (fabs(f(c)) < tol) {
            break;
        }

        // Update the interval
        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }

        itr++;
    }
    printf("Root: %f\n", c);
}

// Newton-Raphson Method
void newton_raphson(float x0, float tol, int max_iter) {
    int itr;
    float h, x1;
    printf("\nNewton-Raphson Method:\n");
    for (itr = 1; itr <= max_iter; itr++) {
        h = f(x0) / df(x0);  // Calculate step size
        x1 = x0 - h;  // Calculate next guess
        printf("Iteration %d: x = %f, f(x) = %f\n", itr, x1, f(x1));

        if (fabs(h) < tol) {  // Check if the step is small enough (converged)
            printf("Root: %f\n", x1);
            return;
        }
        x0 = x1;  // Update x0 for the next iteration
    }
    printf("The solution does not converge or iterations are insufficient\n");
}

int main() {
    int method, max_iter;
    int a, b;  // For integer values of interval
    float x0, tol;

    // User chooses the method
    printf("Choose the method:\n1. Bisection\n2. Regula Falsi\n3. Newton-Raphson\n");
    scanf("%d", &method);

    // Get error tolerance and maximum iterations
    printf("Enter the allowed error and maximum iterations:\n");
    scanf("%f %d", &tol, &max_iter);

    // Execute the selected method
    switch (method) {
        case 1:
            if (find_integer_interval(&a, &b)) {  // Find suitable integer a and b
                printf("Proceeding with Bisection Method on interval [%d, %d]\n", a, b);
                bisection((float)a, (float)b, tol, max_iter);
            }
            break;
        case 2:
            if (find_integer_interval(&a, &b)) {  // Find suitable integer a and b
                printf("Proceeding with Regula Falsi Method on interval [%d, %d]\n", a, b);
                regula_falsi((float)a, (float)b, tol, max_iter);
            }
            break;
        case 3:
            // Newton-Raphson: find an integer initial guess
            if (find_initial_guess(&a)) {
                x0 = (float)a;  // Use the found initial guess
                newton_raphson(x0, tol, max_iter);
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
