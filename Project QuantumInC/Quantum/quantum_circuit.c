#include "quantum_circuit.h"

// Function to create a quantum circuit
QuantumCircuit* createQuantumCircuit(size_t numQubits, size_t numGates) {
    QuantumCircuit* circuit = (QuantumCircuit*)malloc(sizeof(QuantumCircuit));
    if (circuit != NULL) {
        circuit->numQubits = numQubits;
        circuit->numGates = numGates;
        circuit->gates = (QuantumGate*)malloc(numGates * sizeof(QuantumGate));
        if (circuit->gates == NULL) {
            // Error handling for memory allocation failure
            free(circuit);
            return NULL;
        }
    }
    return circuit;
}

// Function to destroy a quantum circuit and free the allocated memory
void destroyQuantumCircuit(QuantumCircuit* circuit) {
    if (circuit != NULL) {
        if (circuit->gates != NULL) {
            free(circuit->gates);
        }
        free(circuit);
    }
}

// Function to add a quantum gate to a quantum circuit
void addGateToCircuit(QuantumCircuit* circuit, const QuantumGate* gate, size_t index) {
    // Check if the index is within the valid range
    if (index >= circuit->numGates) {
        // Error handling for invalid gate index
        return;
    }
    // Add the gate to the circuit at the specified index
    circuit->gates[index] = *gate;
}