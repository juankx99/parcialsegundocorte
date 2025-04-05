#include "CuentaBancaria.h"

CuentaBancaria::CuentaBancaria(std::string num, float saldoInicial)
    : numeroCuenta(num), saldo(saldoInicial), bloqueada(false) {}

void CuentaBancaria::depositar(float cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
        std::cout << "Depósito exitoso. Nuevo saldo: " << saldo << std::endl;
    } else {
        std::cout << "Error: No se puede depositar una cantidad negativa." << std::endl;
    }
}

void CuentaBancaria::retirar(float cantidad) {
    if (bloqueada) {
        std::cout << "Error: La cuenta está bloqueada y no se pueden realizar retiros." << std::endl;
        return;
    }
    
    if (cantidad > 0 && cantidad <= saldo) {
        saldo -= cantidad;
        std::cout << "Retiro exitoso. Nuevo saldo: " << saldo << std::endl;
    } else {
        std::cout << "Error: Saldo insuficiente o cantidad no válida." << std::endl;
    }
}

void CuentaBancaria::bloquearRetiros() {
    bloqueada = true;
    std::cout << "La cuenta ha sido bloqueada para retiros." << std::endl;
}

float CuentaBancaria::obtenerSaldo() const {
    return saldo;
}

std::string CuentaBancaria::obtenerNumeroCuenta() const {
    return numeroCuenta;
}

