#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    double triangulo = (a * c) / 2;
    double circulo = pow(c, 2) * 3.14159;
    double trapezio = ((a + b) * c) / 2;
    double quadrado = b * b;
    double retangulo = (a * b);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    return 0;
}