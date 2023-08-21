#ifndef SIMULATION_H
#define SIMULATION_H

#include "quantum_register.h"
#include "quantum_gate.h"

// Function to apply a quantum gate on a quantum register
void applyGate(QuantumRegister* qreg, const QuantumGate* gate);

// Function to simulate quantum state evolution
void simulateStateEvolution(QuantumRegister* qreg, const QuantumCircuit* circuit);

#endif /* SIMULATION_H */