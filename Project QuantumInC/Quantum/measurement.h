#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include "quantum_register.h"

// Perform a measurement on a quantum register and return the measurement outcome
size_t measure(QuantumRegister* qreg);

void applyBitFlipError(QuantumRegister* qreg, double errorProbability);
void applyPhaseFlipError(QuantumRegister* qreg, double errorProbability);
void applyDepolarizingError(QuantumRegister* qreg, double errorProbability);

#endif /* MEASUREMENT_H */