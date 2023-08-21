#include "quantum_register.h"
#include <stdlib.h>  // for memory allocation

// Function to create a quantum register with a given number of qubits
QuantumRegister* createQuantumRegister(size_t numQubits) {
    QuantumRegister* qreg = (QuantumRegister*)malloc(sizeof(QuantumRegister));
    if (qreg != NULL) {
        qreg->numQubits = numQubits;
        qreg->qubits = (Qubit*)malloc(numQubits * sizeof(Qubit));
        if (qreg->qubits == NULL) {
            // Error handling for memory allocation failure
            free(qreg);
            return NULL;
        }
        // Initialize each qubit in the register
        for (size_t i = 0; i < numQubits; i++) {
            initQubit(&qreg->qubits[i], 1.0 + 0.0 * I, 0.0 + 0.0 * I);
        }
    }
    return qreg;
}

// Function to destroy a quantum register and free the allocated memory
void destroyQuantumRegister(QuantumRegister* qreg) {
    if (qreg != NULL) {
        if (qreg->qubits != NULL) {
            free(qreg->qubits);
        }
        free(qreg);
    }
}


// Function to apply a quantum gate on a specific qubit in the register
void applyGateOnQubit(QuantumRegister* qreg, const QuantumGate* gate, size_t target) {
    // Check if the target qubit index is within the valid range
    if (target >= qreg->numQubits) {
        // Error handling for invalid qubit index
        return;
    }
    // Apply the gate operation on the target qubit
    gate->apply(qreg, target, gate->control);
}

// Function to apply a quantum gate on multiple qubits in the register
void applyGateOnQubits(QuantumRegister* qreg, const QuantumGate* gate, size_t target, size_t control) {
    // Check if the target and control qubit indices are within the valid range
    if (target >= qreg->numQubits || control >= qreg->numQubits) {
        // Error handling for invalid qubit indices
        return;
    }
    // Apply the gate operation on the target and control qubits
    gate->apply(qreg, target, control);
}