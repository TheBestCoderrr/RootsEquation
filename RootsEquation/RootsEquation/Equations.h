#pragma once
#include <iostream>
using namespace std;

__interface Iequation {
    void roots();
    void print();
};

class Equation :public Iequation {
public:
    Equation() :Equation(0, 0) {}
    Equation(double a, double b) : a(a), b(b) {}
protected:
    double a, b;
};

class LinealEquation : Equation {
public:
    LinealEquation() : Equation(0, 0) {}
    LinealEquation(double a, double b) : Equation(a, b) {}
    void roots()  override;
    void print()  override;
};

class QuadraticEquation : Equation {
public:
    QuadraticEquation() : Equation(0, 0), c(0) {}
    QuadraticEquation(double a, double b, double c) : Equation(a, b), c(c) {}
    void roots()  override;
    void print()  override;
private:
    double c;
};

