#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <time.h>
#include"qubit.h"

int main() {
    // Seed the random number generator
    srand(time(0));

    // Create a qubit and initialize it
    Qubit q;
    initQubit(&q, 1.0 + 0.0 * I, 0.0 + 0.0 * I);

    // Apply the Pauli-X gate
    applyPauliX(&q);

    // Apply the Pauli-Y gate
    applyPauliY(&q);

    // Apply the Pauli-Z gate
    applyPauliZ(&q);

    // Measure the qubit and print the outcome
    int outcome = measureQubit(&q);
    printf("Measurement outcome: %d\n", outcome);

    return 0;
}
