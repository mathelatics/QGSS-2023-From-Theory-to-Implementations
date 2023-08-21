#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Quantum state constants
#define ALPHA 0.6
#define BETA 0.8

// Entangled Bell pair constants
#define PHI_PLUS_A 0
#define PHI_PLUS_B 0
#define PHI_PLUS_C 1
#define PHI_PLUS_D 1

// Quantum gates constants
#define HADAMARD 1
#define CNOT_AB 2
#define CNOT_BC 3

// Function to perform Hadamard gate on qubit a
void hadamardGate(double* qubit_a) {
    // Apply the Hadamard gate on qubit a
    double temp = *qubit_a;
    *qubit_a = (1 / sqrt(2)) * (temp + *(qubit_a + 1));
    *(qubit_a + 1) = (1 / sqrt(2)) * (temp - *(qubit_a + 1));
}

// Function to perform CNOT gate between control qubit a and target qubit b
void cnotGate(double* qubit_a, double* qubit_b) {
    // Apply the CNOT gate between qubit a (control) and qubit b (target)
    double temp = *qubit_a;
    *qubit_a = *(qubit_a + 1);
    *(qubit_a + 1) = temp;

    if (*qubit_a == 1) {
        *qubit_b = !(*qubit_b);
    }
}

// Function to simulate the quantum teleportation protocol
void quantumTeleportation() {
    // Create the initial quantum state
    double* qubit_psi = (double*)malloc(2 * sizeof(double));
    *qubit_psi = ALPHA;
    *(qubit_psi + 1) = BETA;

    // Create the entangled Bell pair
    double* qubit_phi_plus_a = (double*)malloc(2 * sizeof(double));
    *qubit_phi_plus_a = PHI_PLUS_A;
    *(qubit_phi_plus_a + 1) = PHI_PLUS_B;

    double* qubit_phi_plus_b = (double*)malloc(2 * sizeof(double));
    *qubit_phi_plus_b = PHI_PLUS_C;
    *(qubit_phi_plus_b + 1) = PHI_PLUS_D;

    // Apply the quantum gates
    hadamardGate(qubit_phi_plus_a);
    cnotGate(qubit_phi_plus_a, qubit_phi_plus_b);
    cnotGate(qubit_psi, qubit_phi_plus_a);
    hadamardGate(qubit_psi);

    // Measure the quantum states
    int measurement_a = (int)(*qubit_psi);
    int measurement_b = (int)(*(qubit_phi_plus_a));
  
    // Send classical bits
    int sent_a = measurement_a;
    int sent_b = measurement_b;

    // Bob's operations based on classical bits
    if (sent_a == 1) {
        *qubit_phi_plus_b = !(*qubit_phi_plus_b);
    }
    if (sent_b == 1) {
        *(qubit_phi_plus_b + 1) = !(*(qubit_phi_plus_b + 1));
    }

    // Print the results
    printf("Initial Quantum State: %.2f|0> + %.2f|1>\n", ALPHA, BETA);
    printf("Alice's Measurement Results: %d %d\n", measurement_a, measurement_b);
    printf("Classical Bits Sent: %d %d\n", sent_a, sent_b);
    printf("Bob's Qubit State: %.2f|0> + %.2f|1>\n", *qubit_phi_plus_b, *(qubit_phi_plus_b + 1));

    // Free memory
    free(qubit_psi);
    free(qubit_phi_plus_a);
    free(qubit_phi_plus_b);
}

int main() {
    // Simulate the quantum teleportation protocol
    quantumTeleportation();

    return 0;
}