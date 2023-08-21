#ifndef QUANTUM_REGISTER_H
#define QUANTUM_REGISTER_H

#include "qubit.h"
#include <stddef.h>


typedef struct {
    Qubit* qubits;  // Array of qubits
    size_t size;    // Number of qubits in the register
} QuantumRegister;

QuantumRegister* createQuantumRegister(size_t numQubits);
void destroyQuantumRegister(QuantumRegister* qreg);
void applyGateOnQubit(QuantumRegister* qreg, const QuantumGate* gate, size_t target);
void applyGateOnQubit(QuantumRegister* qreg, const QuantumGate* gate, size_t target);
void applyGateOnQubits(QuantumRegister* qreg, const QuantumGate* gate, size_t target, size_t control);

#endif /* QUANTUM_REGISTER_H */