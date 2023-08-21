#include "quantum_gate.h"

// Function to create a quantum gate
QuantumGate* createQuantumGate(size_t target, size_t control, void (*apply)(QuantumRegister* qreg, size_t target, size_t control)) {
    QuantumGate* gate = (QuantumGate*)malloc(sizeof(QuantumGate));
    if (gate != NULL) {
        gate->target = target;
        gate->control = control;
        gate->apply = apply;
    }
    return gate;
}

// Function to destroy a quantum gate and free the allocated memory
void destroyQuantumGate(QuantumGate* gate) {
    if (gate != NULL) {
        free(gate);
    }
}

// Function to apply a quantum gate on a quantum register

void applyGate(QuantumRegister* qreg, const QuantumGate* gate) {
    if (gate->control == INVALID_CONTROL_INDEX) {
        applyGateOnQubit(qreg, gate, gate->target);
    } else {
        applyGateOnQubits(qreg, gate, gate->target, gate->control);
    }
}