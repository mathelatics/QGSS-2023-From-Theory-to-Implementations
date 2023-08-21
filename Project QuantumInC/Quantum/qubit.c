#include "qubit.h"
#include <stdlib.h>

// Function to initialize a qubit with given complex coefficients
void initQubit(Qubit* qubit, double complex alpha, double complex beta) {
    qubit->alpha = alpha;
    qubit->beta = beta;
}

// Function to apply a Pauli-X gate on a qubit
void applyPauliX(Qubit* qubit) {
    double complex temp = qubit->alpha;
    qubit->alpha = qubit->beta;
    qubit->beta = temp;
}

// Function to apply a Pauli-Y gate on a qubit
void applyPauliY(Qubit* qubit) {
    double complex temp = qubit->alpha;
    qubit->alpha = -I * qubit->beta;
    qubit->beta = I * temp;
}

// Function to apply a Pauli-Z gate on a qubit
void applyPauliZ(Qubit* qubit) {
    qubit->beta = -qubit->beta;
}

// Function to measure a qubit and return the measurement outcome
int measureQubit(const Qubit* qubit) {
    // Assuming measurement is in computational basis (|0⟩ or |1⟩)
    double prob_0 = cabs(qubit->alpha) * cabs(qubit->alpha);
    double random_num = (double)rand() / RAND_MAX;

    if (random_num < prob_0) {
        return 0; // Measurement outcome is 0
    } else {
        return 1; // Measurement outcome is 1
    }
}