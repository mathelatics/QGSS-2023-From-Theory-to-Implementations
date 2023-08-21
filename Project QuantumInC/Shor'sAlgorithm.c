
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to compute the greatest common divisor (GCD) using Euclidean algorithm
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    unsigned long long temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to perform modular exponentiation (a^b mod n)
unsigned long long modExp(unsigned long long a, unsigned long long b, unsigned long long n) {
    unsigned long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % n;
        }
        a = (a * a) % n;
        b /= 2;
    }
    return result;
}

// Function to find a random coprime less than n
unsigned long long findCoprime(unsigned long long n) {
    unsigned long long a;
    do {
        a = rand() % (n - 2) + 2;
    } while (gcd(a, n) != 1);
    return a;
}

// Function to simulate the Quantum Fourier Transform (QFT)
void quantumFourierTransform(double complex* state, int size) {
    // Create a temporary array for storing the transformed state
    double complex* temp_state = (double complex*)malloc(size * sizeof(double complex));
  
    // Compute the normalization factor
    double complex normalization_factor = 1.0 / sqrt(size);
  
    // Perform the QFT by iterating over each target qubit
    for (int target = 0; target < size; ++target) {
        temp_state[target] = 0.0;
    
        // Apply the phase shift for each control qubit
        for (int control = 0; control < size; ++control) {
            double complex rotation_factor = cexp(2 * PI * I * control * target / size);
            temp_state[target] += state[control] * rotation_factor;
        }
    
        // Apply the normalization factor
        temp_state[target] *= normalization_factor;
    }
  
    // Copy the transformed state back to the original state array
    for (int i = 0; i < size; ++i) {
        state[i] = temp_state[i];
    }
  
    // Free the temporary array
    free(temp_state);
}


// Function to perform Shor's Algorithm on a given number n
unsigned long long shorsAlgorithm(unsigned long long n) {
    // Step 1: Choose a random coprime 'a' less than n
    unsigned long long a = findCoprime(n);
  
    // Step 2: Determine the period r of the function f(x) = a^x mod n using Quantum Period Finding
    unsigned long long period;
  
    // Perform the Quantum Fourier Transform on a state of size 'n'
    int size = n;
    double complex* state = (double complex*)malloc(size * sizeof(double complex));
    for (int i = 0; i < size; ++i) {
        state[i] = 1.0 / sqrt(size);
    }
  
    quantumFourierTransform(state, size);
  
    // Measure the state to obtain a value close to the period 'r'
    int measured_value = measureState(state, size);
    period = findPeriod(measured_value, n);
  
    // Step 3: Perform classical post-processing to find the factors of n using the measured period 'r'
    unsigned long long factor = gcd(modExp(a, period / 2, n) - 1, n);
  
    // Free the allocated memory
    free(state);
  
    // Return the factors of n (if found)
    return factor;
}

int main() {
    unsigned long long n;

    printf("Enter the number to be factored: ");
    scanf("%llu", &n);

    // Simulate Shor's Algorithm
    unsigned long long factor = shorsAlgorithm(n);

    printf("Factor of %llu: %llu\n", n, factor);

    return 0;
}