#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <complex.h>
#include <math.h>

#define PI 3.14159265358979323846

// Function to apply the Pauli-X gate on a single qubit
void pauliXGate(double complex* state, int target, int size) {
    for (int i = 0; i < size; ++i) {
        if ((i >> target) & 1) {
            state[i] = -state[i];
        }
    }
}

// Function to apply the Pauli-Y gate on a single qubit
void pauliYGate(double complex* state, int target, int size) {
    for (int i = 0; i < size; ++i) {
        if ((i >> target) & 1) {
            state[i] = -state[i] * I;
        }
    }
}

// Function to apply the Pauli-Z gate on a single qubit
void pauliZGate(double complex* state, int target, int size) {
    for (int i = 0; i < size; ++i) {
        if ((i >> target) & 1) {
            state[i] = state[i] * -1.0;
        }
    }
}

// Function to apply the Hadamard gate on a single qubit
void hadamardGate(double complex* state, int target, int size) {
    double complex factor = 1.0 / sqrt(2.0);
    for (int i = 0; i < size; ++i) {
        if ((i >> target) & 1) {
            state[i] = state[i] * factor;
        } else {
            state[i] = state[i] * factor;
        }
    }
}

// Function to apply the controlled NOT (CNOT) gate on two qubits
void controlledNotGate(double complex* state, int control, int target, int size) {
    for (int i = 0; i < size; ++i) {
        if (((i >> control) & 1) && ((i >> target) & 1)) {
            state[i] = -state[i];
        }
    }
}

// Function to simulate a quantum circuit
void simulateQuantumCircuit() {
    int numQubits = 3;
    int size = 1 << numQubits;
  
    // Create the initial quantum state |psi> = |000>
    double complex* state = (double complex*)malloc(size * sizeof(double complex));
    for (int i = 0; i < size; ++i) {
        state[i] = 0.0;
    }
    state[0] = 1.0;
  
    // Apply the quantum gates in the circuit
    hadamardGate(state, 0, size);
    controlledNotGate(state, 0, 1, size);
    pauliXGate(state, 2, size);
  
    // Measure the state and print the results
    for (int i = 0; i < size; ++i) {
        double probability = creal(state[i] * conj(state[i]));
        if (probability > 0.0001) {
            printf("|");
            for (int j = numQubits - 1; j >= 0; --j) {
                printf("%d", (i >> j) & 1);
            }
            printf("> : %.6f\n", probability);
        }
    }
  
    // Free the allocated memory
    free(state);
}

int main() {
    // Simulate the quantum circuit
    simulateQuantumCircuit();
  
    return 0;
}