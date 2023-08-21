
#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>

#define PI 3.14159265358979323846

// Function to apply the Quantum Fourier Transform (QFT) on a given quantum state
void quantumFourierTransform(double complex* state, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            double complex rotation_factor = cexp(2 * PI * I * i * j / size);
            state[j] *= rotation_factor;
        }
    }
  
    double complex normalization_factor = 1.0 / sqrt(size);
    for (int i = 0; i < size; ++i) {
        state[i] *= normalization_factor;
    }
}

// Function to display the state amplitudes after the QFT
void printStateAmplitudes(double complex* state, int size) {
    printf("QFT State Amplitudes:\n");
    for (int i = 0; i < size; ++i) {
        printf("|%d⟩: %.6f + %.6fi\n", i, creal(state[i]), cimag(state[i]));
    }
}

int main() {
    int size;
  
    printf("Enter the size of the quantum state: ");
    scanf("%d", &size);
  
    double complex* state = (double complex*) malloc(size * sizeof(double complex));
  
    printf("Enter the amplitudes of the quantum state:\n");
    for (int i = 0; i < size; ++i) {
        double real, imag;
        printf("|%d⟩ (real): ", i);
        scanf("%lf", &real);
        printf("|%d⟩ (imaginary): ", i);
        scanf("%lf", &imag);
    
        state[i] = real + imag * I;
    }
  
    // Apply the Quantum Fourier Transform (QFT)
    quantumFourierTransform(state, size);
  
    // Display the state amplitudes after the QFT
    printStateAmplitudes(state, size);
  
    // Free memory
    free(state);

    return 0;
}