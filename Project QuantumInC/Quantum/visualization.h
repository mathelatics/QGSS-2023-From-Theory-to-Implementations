#ifndef VISUALIZATION_H
#define VISUALIZATION_H

#include "quantum_circuit.h"
#include "quantum_register.h"

// Function to visualize a quantum circuit
void visualizeCircuit(const QuantumCircuit* circuit);

// Function to visualize a quantum register state
void visualizeQuantumState(const QuantumRegister* qreg);

#endif /* VISUALIZATION_H */