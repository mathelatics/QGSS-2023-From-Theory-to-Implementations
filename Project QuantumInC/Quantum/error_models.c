#include "error_models.h"
#include <stdlib.h>  // for random number generation

// Function to apply a bit-flip error on a quantum register
void applyBitFlipError(QuantumRegister* qreg, double errorProbability) {
    size_t numQubits = qreg->size;
    for (size_t i = 0; i < numQubits; i++) {
        double randomNum = (double)rand() / RAND_MAX;
        if (randomNum < errorProbability) {
            qreg->amplitudes[i].real = -qreg->amplitudes[i].real;
        }
    }
}

// Function to apply a phase-flip error on a quantum register
void applyPhaseFlipError(QuantumRegister* qreg, double errorProbability) {
    size_t numQubits = qreg->size;
    for (size_t i = 0; i < numQubits; i++) {
        double randomNum = (double)rand() / RAND_MAX;
        if (randomNum < errorProbability) {
            qreg->amplitudes[i].imag = -qreg->amplitudes[i].imag;
        }
    }
}

// Function to apply a depolarizing error on a quantum register
void applyDepolarizingError(QuantumRegister* qreg, double errorProbability) {
    size_t numQubits = qreg->size;
    for (size_t i = 0; i < numQubits; i++) {
        double randomNum = (double)rand() / RAND_MAX;
        if (randomNum < errorProbability / 3.0) {
            qreg->amplitudes[i].real = 1.0;
            qreg->amplitudes[i].imag = 0.0;
        } else if (randomNum < 2.0 * errorProbability / 3.0) {
            qreg->amplitudes[i].real = -1.0;
            qreg->amplitudes[i].imag = 0.0;
        } else if (randomNum < errorProbability) {
            qreg->amplitudes[i].real = 0.0;
            qreg->amplitudes[i].imag = 1.0;
        }
    }
}