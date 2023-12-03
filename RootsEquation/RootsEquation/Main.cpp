#include "Equations.h"

int main() {
    srand(time(0));
    LinealEquation A(rand() % 100 - 50, rand() % 100 - 50);
    A.print();
    cout << endl;
    QuadraticEquation B(rand() % 100 - 50, rand() % 100 - 50, rand() % 100 - 50);
    B.print();
}