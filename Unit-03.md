<h1 align='center'>Quantum Hardware and Noise</h1>

<h2 align='center'> Lession-08 Quantum Computing Hardware and Super-conducting Circuits</h2>

The questions that come first in my mind is that -

1. What is a real qubit ? Is is a atom, electrons, photons or even the artificial atoms ?
2. What is the Di-Vincenzo Criteria
3. What classical circuits are ?
4. What quantum circuits are and what is the josephson junction.
5. How to control and measure a transmon ?

**What a quantum computer and what are the building blocks of it and How we can build them ?**

- Well behave quantum system that we can initialize into a known state which relatively long cohrence times and a universal set of quantum gates and have qubit specific measurement capability.

**What is a real qubit ?**

- We studied in quantum mechanics related courses that a qubit is just a energy state of particles like photons, electrons, atoms etc. but in real quantum computing devices it look different.

  1. Super-conducting qubits :

  - it is a LC-circuit oscillator which is a resitance free current oscillator back and fourth aroud a circuit loop. current flow i.e electron's flow acts like a qubit becouse if we inject some energy using mirco-wave signal exites the current into superposition states.

  2. Trapped ions :

  - We know that electrically charged atoms/ions, have quantum energies which depends on the location of the electrons. atoms/ions acts like a qubit and using lasor light we can cool and trap the ions and put then into superposition states.

  3. Silicon Quantum Dots :

  - Silocon quantum dots are the artificial atoms can be made by adding an electron to a small piece of pure silicon and using microwave we can control the electrons quantum state. thus electron will act like a qubit.

  4. Topological qubits :

  - Quasi-particles can be seen in the behaviour of the electrons channeled through semi-conductor structures. their braided paths can encode quantum information.

  5. The Diamond Vacancies :

  - A nitrogen atom and a vacancy add an electron to a diamond lattice. its quantum spin state, along with those of nearby carbon nuclei, can be controlled with light.

**What is the first quantum phenomena is observed in real life by the scientist while doing experiments ?**

- Dispersion of light colors using prism

  - it is an exeriment that every student do in his school life. which tell about that light is made up of many colors what we call as ranbow which has 7 colors i.e Voilet, Indego, Blue, Green, Yellow, Orange, Red. so, when we pass the light ray through the prizm it splits it into the 7 colors i.e the first interaction of the quantum phenomena.
- Spectral Lines

  - The Bohr, Radyberg etc scientist try to study the phenomina of atom stucture, when that are doing experiments with atoms like Hydrogen, Helium , Neon, Sodium and Mercury etc. they found that each atom when bumborded with light, photons , $\alpha, \beta, \gamma $ particles they absorbs the enery and jumped to the excited states after few nano second they come to ground state by emitting thier energies which have certain frequency thus they emmits a unique color at particular frequency.
- Bohr's Model : Atomic Qubit

  - qubit have different quantized energy level after getting that amount of energy they jumped to the excited states. so we use the laser with specific energy to affect our qubits.
- Why we make an artificial atom while we have all the natural quantum phenomena to use ?

  - it can mimic teh electromagnatic spectrum
  - it can create some knobs to control all elements that we care about
  - it can leverage the semiconductors industry's critical technology.

**What is a classical electrical circuit and explain the both Kirchhof's Law of Voltage conservation and equal current flow over circuit ?**

- Regiters :
- Capacitors :
- Inductors :
- Kirchhof's Voltage Law :
- Kirchhof's Current Law :
- Continuouse Variable : Flux $\Phi = BAcos(\theta)$ and Charges $Q = \int_{t_1}^{t_2} I(t)$
- Classical Hamiltonian : $H = \frac{1}{2C} Q^2 + \frac{1}{2L} \Phi^2$ where $f_0 = \frac{\omega_0}{2 \pi} = \frac{1}{2 \pi \sqrt(LC)}$ and similarity with the mass spring oscillation equation.

**What is Quantum Linear Circuits ?**
Quantum Hamiltonian $H$

**What is Superconductivity ?**

**What is the Josephson Junctions ?**

**What is Quantum Non-liear Circuits : Josephson Junction ?**

**What do we really mean by Circuit Quantization ?**

**What is Transmon Qubit ?**

**What are the anatomy of the IBM transmon ?**

**

**Classical Non-Demolition Measurement**

**Quantum Non-Demolition Measurement**

**Quantum Dispersive Measurement**

**Qubit Measurement with no amplifier**

**Qubit Measurement with HEMT only**

**Qubit Measurement with preamp**

**High fidelity single-shot readout**

**Theoretical Idea of Gates**

**Classical vs Quantum Gates**

**How do we interact with the superconducting qubits ?**

**Generating Shaped Microwave Pulses**

**Single Qubit Control**

**Two Qubit Gates**

**Large Processor Developement**

**Development roadmap at IBM and World**

**Putting all elements togather to build a quantum computer**

**Quantum Hardware Challenges**

**Coherent Errors**

**Incoherent Errors**

**Superconducting qubits coherence timeline**

**Source of leakage**

**Summary**

## Supplimentory-Session-06 :

## Lession-09 : Introduction to the Quantum Noise

**What we firstly needed to know to put theory on practice/practical on a real, noisy quantum computer processors ?**

<h4> Chapter-01 : Hello World with a real experiment on quantum computer </h4>

- Quantum Computers as Super-conducting fridge and scientist working on them.
- What is a qubit inside the fridge ?
  - it has two computational basis states as $\ket 1 \; and \; \ket 0$ called quantum states
- How to manipulate these quantum states ?
  - for processing of quantum states/information we needed some operation that can work on these qubits let's called it quantum gates(qubit gate)
  - Not Gate : $$X\ket 0 = \ket 1 \\ X\ket 1 = \ket 0$$. X is a bit flip operator.
- We needed to extract the data after processing out off quantum computer ? for this we uses quantum to classical interface method becouse we needed to tranform the processed data into classical information so that it can be used by peoples etc.
  - For this use apply the measurements called qubit observables.
  - applying measurement on the $$ Z\ket 0 = +\ket 0 \\ Z\ket 1 = - \ket 1$$ , Z is a Phase flip operator.

**Even-Odd Algorithm - Qubit Flipper**
- We want an algorith that can take integers and able to distinguise even or odd numbers ? How can we design such algorithms ?
  - let n be number then we apply the n times flip of qubit on it if 



**Quantum Phenomena don't occures in a Hilbert Space they occures in a laboratory** - Asher Peres


**How to overcome the quantum noise ?** 
- State Preparation and measurement noise(SPAM)
- Curve like Energy decay or phase decoherent/incoherent i.e emphirical observation of incoherent noise
- coherent noise
- Projection

1. Coherent Noise
2. Quantum Measurement - Projection noise
3. SPAM : inperfect State operators, measurements
4. Incoherent Noise
5. Bonus Contents

How do we overcome these noises after knowing it ? i.e first understand and then try to overcome with it.

<h2> Lession-10 : Quantum Noise </h2>
<h4> Ideal Single Qubit Measurement with M shots </h4>

## Supplimentory-lession-07 :
