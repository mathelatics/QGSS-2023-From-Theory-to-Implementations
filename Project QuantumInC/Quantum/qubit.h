#ifndef QUBIT_H
#define QUBIT_H

#include <complex.h>

typedef struct {
    double complex alpha; // Complex coefficient for the |0⟩ state
    double complex beta; // Complex coefficient for the |1⟩ state
} Qubit;

void initQubit(Qubit* qubit, double complex alpha, double complex beta);
void applyPauliX(Qubit* qubit);
void applyPauliY(Qubit* qubit);
void applyPauliZ(Qubit* qubit);
int measureQubit(const Qubit* qubit);

#endif
