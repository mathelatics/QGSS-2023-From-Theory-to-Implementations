# Basics of Quantum Information

We will starts 
- lession-01 : the discription of the quantum states as vectors with complex entries, measurements of the quantum states(qubits) to extract classical information(bits). We perform certain operations(unitary matrices) on the quantum states. Overall we will consider only single quantum system in isolation rather than multiple quantum system  in entangled states. What is the mathematical description of the quantum information in which quantum states are measured represented by density matrices. The density matrices are used for study of quantum information like to use to model the effects of noise on quantum computations or state of an entangled pair. Thus Density matrices are the basic building blocks of the quantum inforamtion theory and quantum cryptography etc.

- lession-02 :
---
## Lession-01 : Single Qubit Systems

- Classical Information
- Quantum Information 
   - Quantum State vectors
   - Standard Basis Measurements
   - Unitary Operations

##### Discription of the Quantum Information

###### Simplified Description
Quantum States can be represented as vectors and operations as the unitary transformation matrices.
###### General Desciption
Quantum States are represented by density matrices, allows only general class of measurements and operations.

### 1.1 Classical Information
Let's take a physical system with finite number of classical states at each moments i.e system $X$ has classical state set $\Sigma$. When we measures the classical states they may have uncertainity(some probality) associated with them.
- bits system X then $\Sigma = \{0, 1\}$. Probability of classical state $P(X = 0) = \frac{3}{4} \; and \; P( X = 1) = \frac{1}{4} $ these are the probabilistic states of the system. All entries of the vector or matrices are non negative and the sum equal to 1. we can also represent them as vectors/matrices like 
$$\begin
{pmatrix}
  \frac{3}{4}\\[1mm]
  \frac{1}{4}
\end{pmatrix}
$$ 

- Coin toss system X then $\Sigma = \{head, tail\}$.
- Die roll system X then $\Sigma = \{1, 2, 3, 4, 5, 6\}$.
- Electric fan switch system X then $\Sigma = \{high, medium, low, of\}$

probability state
column vector

probability vector

###### Dirac-notation

Column-vector : $\ket \psi$

Row-vector : $ \bra \psi $

Inner Product of Vectors

###### Measuring Probabilistic States

###### Deterministic Operations

matrix-vector states

###### Prababilitic Operations

uncertanity
randomness
stochastic matrices

###### Composition Operations

product of stochastic matrices are closed by itself but matrix multipliction is not commutative in general i.e order of matrix multiplication matters

### 1.2 Quantum Information

What is difference b/w the classical information and quantum information ?
How we define a quantum state ?
How quantum information works ?

Quantum state : column vector
Euclidean Norm
Unit Vectors

#### Dirac-notations

conjugate-transpose

#### Measuring Quantum States

#### Unitary Operations

##### Qubit Unitary Operations

Pauli Operations : $ X = \sigma_x, Y  \sigma_y, Z = \sigma_z$
Phase-flip
Bit-flip

Hadamard Operations $H = $

Phase Operations $P_{\phi}$

##### Composing Unitary Operations

#### Conclusion

## Lession-02 : Multiple Qubit System

### Overview

### Combining Classical Systems

#### Classical States

#### Probabilistic States

#### Tensor Products of the Vectors/Tensors

#### Measurements of Probabilistic States

#### Operations on the Probabilistic States

### Quantum Information

#### Quantum States

### Measurements

### Unitary Operations

### Conclusion

## Supplimentory-03 : Questions and Answers

## Lession-03 : Quantum Circuits

### Classical Information

#### Boolean Circuits

### Quantum Information

#### Quantum Circuits

### Inner Products, Orthonormality and Projections

#### Inner Products

#### Orthogonal and Orthonormal Sets

#### Projections and Projective Measurements

### Limitations on Quantum Information

#### Irrelevance of Global Phase

#### No-cloning Theorem

#### Non-orthogonal states can't be perfectly discriminatedS

## Lession-04 : Quantum Entanglement in Action

### Teleportation

#### Protocols

#### Analysis

### Superdense Coding

#### Protocols

#### Analysis

### The CHSH game

#### Non-local games

#### CHSH games description

#### Limitation of classical strategies

#### CHSH games strategies

### Conclusion

## Summury of the Quantum Information
