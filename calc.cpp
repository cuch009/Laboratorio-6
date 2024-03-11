#include <iostream>

using namespace std;

class Calculadora {
private:
    double numero1;
    double numero2;

public:
    
    Calculadora(double n1, double n2) : numero1(n1), numero2(n2) {}

    double suma() const {
        return numero1 + numero2;
    }

    double resta() const {
        return numero1 - numero2;
    }

    double multiplicacion() const {
        return numero1 * numero2;
    }

    double division() const {
        if (numero2 != 0) {
            return numero1 / numero2;
        } else {
            cout << "Error: Division por cero." << endl;
            return 0.0;
        }
    }
};

int main() {

    Calculadora calculadora1(10.5, 5.2);

    cout << "Suma: " << calculadora1.suma() << endl;
    cout << "Resta: " << calculadora1.resta() << endl;
    cout << "Multiplicacion: " << calculadora1.multiplicacion() << endl;
    
    cout << "Division: " << calculadora1.division() << endl;

    return 0;
}

