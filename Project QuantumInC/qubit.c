#include <stdio.h>
#include <math.h>

const float R2 = 0.7071067812; /*1/sqrt(2)*/


struct qubit
{
    /* data */
    float zero;
    float one;
};

typedef struct  qubit qubit;

// Print a Qubit

void printQubit(qubit x)
{
    printf("(%f, %f) \n", x.zero, x.one);
}

// Inversion Operations
// X(qubit q)
qubit X(qubit q)
{
    qubit n;
    n.zero = 0*q.zero + 1*q.one;
    n.one = 1*q.zero + 0*q.one;

    return n;

}
qubit X_1(qubit *q)
{
    qubit temp;
    temp.zero = 0*q -> zero + 1*q -> one;
    temp.one = 1*q -> zero + 0* q->one;
    q -> zero = temp.zero;
    q -> one = temp.one;
}


// Hadamard Operation H*|0> = |+> and H*|1> = |->
/*
H = {[1/ sqrt(2), 1 / sqrt(2)],
     [1/ sqrt(2), -1/ sqrt(2)]}

*/

void H(qubit *q)
{
    qubit temp;
    temp.zero = R2*q -> zero + R2*q -> one;
    temp.one = R2*q -> zero - R2*q -> one;
    q->zero = temp.zero;
    q->one = temp.one;

}

int main()
{
    qubit q = {1, 0};
    printQubit(q);
    qubit b = {0, 1};
    printQubit(b);
    qubit c = {0.5, 0.499};
    printQubit(c);

    // Invert
    printQubit(X(q));
    printQubit(X(X(q)));

    // try to modify the qubit and assign to a new qubit
    // 
    X_1(&q);
    printQubit(q);
    
    X_1(&q);
    printQubit(q);
    // Hadamard Gate 
    H(&q);
    printQubit(q);

    H(&q);
    printQubit(q);

    X(q);
    printQubit(q);

    H(&q);

    X_1(&q);
    X_1(&q);
    H(&q);
    printQubit(q);

    printQubit(b);
    H(&b);
    printQubit(b);
    X_1(&b);
    printQubit(b);
    X_1(&b);
    printQubit(b);
    H(&b);
    printQubit(b);

    return 0;
}

/*
Outputs : 
(1.000000, 0.000000) 
(0.000000, 1.000000) 
(0.500000, 0.499000)
(0.000000, 1.000000)
(1.000000, 0.000000)
(0.000000, 1.000000)
(1.000000, 0.000000)
(0.707107, 0.707107)
(1.000000, 0.000000)
(1.000000, 0.000000)
(1.000000, 0.000000)
(0.000000, 1.000000)
(0.707107, -0.707107)
(-0.707107, 0.707107)
(0.707107, -0.707107)
(0.000000, 1.000000)
*/