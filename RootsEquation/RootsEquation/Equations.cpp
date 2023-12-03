#include "Equations.h"

void LinealEquation::roots()
{
    if (a != 0) cout << "x = " << -b / a << endl;
    else if (a == 0 && b != 0) cout << "no roofs" << endl;
    else if (a == 0 && b == 0) cout << "x = infinity" << endl;
}

void LinealEquation::print()
{
    cout << a << "x + " << b << " = 0" << endl;
    roots();
}

void QuadraticEquation::roots()
{
    if (a == 0) {
        cout << "no roofs" << endl;
        return;
    }
    double D = b * b - 4 * a * c;
    if (D > 0) {
        cout << "x1 = " << ((-b - sqrt(D)) / 2 * a) << endl;
        cout << "x2 = " << ((-b + sqrt(D)) / 2 * a) << endl;
    }
    else if (D == 0)
        cout << "x = " << (-b/ 2 * a) << endl;
    else if(D < 0)
        cout << "no roofs" <<  endl;
}

void QuadraticEquation::print()
{
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    roots();
}
