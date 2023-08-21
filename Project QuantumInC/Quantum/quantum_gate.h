#ifndef QUANTUM_GATE_H
#define QUANTUM_GATE_H

#include "quantum_register.h"

typedef struct {
    size_t target;             // Target qubit index for the gate
    size_t control;            // Control qubit index for the gate (optional)
    void (*apply)(QuantumRegister* qreg, size_t target, size_t control);  // Function pointer for applying the gate
} QuantumGate;

QuantumGate* createQuantumGate(size_t target, size_t control, void (*apply)(QuantumRegister* qreg, size_t target, size_t control));
void destroyQuantumGate(QuantumGate* gate);
void applyGate(QuantumRegister* qreg, const QuantumGate* gate);


#endif /* QUANTUM_GATE_H */