#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>
#include <iostream>

class CuentaBancaria {
private:
    float saldo;
    std::string numeroCuenta;
    bool bloqueada;  // Para gestionar el bloqueo de retiros

public:
    /**
     * \brief Constructor de la cuenta bancaria.
     * \param num Número de cuenta.
     * \param saldoInicial Saldo inicial de la cuenta.
     */
    CuentaBancaria(std::string num, float saldoInicial);

    /**
     * \brief Deposita una cantidad en la cuenta.
     * \param cantidad Monto a depositar.
     */
    void depositar(float cantidad);

    /**
     * \brief Retira una cantidad si hay fondos suficientes y si la cuenta no está bloqueada.
     * \param cantidad Monto a retirar.
     */
    void retirar(float cantidad);

    /**
     * \brief Bloquea la cuenta para evitar retiros.
     */
    void bloquearRetiros();

    /**
     * \brief Obtiene el saldo actual de la cuenta.
     * \return Saldo disponible.
     */
    float obtenerSaldo() const;

    /**
     * \brief Obtiene el número de cuenta.
     * \return Número de cuenta.
     */
    std::string obtenerNumeroCuenta() const;
};

#endif
