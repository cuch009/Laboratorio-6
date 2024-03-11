#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria {
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    
    CuentaBancaria(string nombre, string numero, double saldoInicial) : nombreTitular(nombre), numeroCuenta(numero), saldo(saldoInicial) {}

    void depositar(double cantidad) {
        saldo += cantidad;
        cout << "Deposito realizado. Nuevo saldo: " << saldo << endl;
    }

    void retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            cout << "Retiro realizado. Nuevo saldo: " << saldo << endl;
        } else {
            cout << "Error: Fondos insuficientes." << endl;
        }
    }

    double consultarSaldo() const {
        return saldo;
    }
};

int main() {
    
    CuentaBancaria cuenta("Carlos Aguilar", "123456789", 1000.0);

    cout << "Saldo inicial: " << cuenta.consultarSaldo() << endl;

    cuenta.depositar(500.0);
    cuenta.retirar(200.0);

    cout << "Saldo final: " << cuenta.consultarSaldo() << endl;

    return 0;
}

