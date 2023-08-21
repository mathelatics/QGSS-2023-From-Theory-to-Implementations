#ifndef ERROR_MODELS_H
#define ERROR_MODELS_H

#include "quantum_register.h"

// Function to apply a bit-flip error on a quantum register
void applyBitFlipError(QuantumRegister* qreg, double errorProbability);

// Function to apply a phase-flip error on a quantum register
void applyPhaseFlipError(QuantumRegister* qreg, double errorProbability);

// Function to apply a depolarizing error on a quantum register
void applyDepolarizingError(QuantumRegister* qreg, double errorProbability);

#endif /* ERROR_MODELS_H */