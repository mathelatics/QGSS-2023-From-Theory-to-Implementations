#ifndef QUANTUM_CIRCUIT_H
#define QUANTUM_CIRCUIT_H

#include "quantum_gate.h"
#include <stddef.h>
#include <stdlib.h>

typedef struct {
    QuantumGate* gates;    // Array of quantum gates in the circuit
    size_t numGates;       // Number of gates in the circuit
    size_t numQubits;      // Number of qubits in the circuit
} QuantumCircuit;

QuantumCircuit* createQuantumCircuit(size_t numQubits, size_t numGates);
void destroyQuantumCircuit(QuantumCircuit* circuit);
void addGateToCircuit(QuantumCircuit* circuit, const QuantumGate* gate, size_t index);


#endif /* QUANTUM_CIRCUIT_H */