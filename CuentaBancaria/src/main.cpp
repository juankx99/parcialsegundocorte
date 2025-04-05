#include "CuentaBancaria.h"
#include <vector>
#include <fstream>

int main() {
    std::vector<CuentaBancaria> cuentas;

    // Agregar 3 cuentas al vector
    cuentas.emplace_back("123456789", 1000.0);
    cuentas.emplace_back("987654321", 500.0);
    cuentas.emplace_back("456789123", 750.0);

    // Simular operaciones
    cuentas[0].depositar(200);
    cuentas[1].retirar(100);
    cuentas[2].bloquearRetiros();
    cuentas[2].retirar(50);  // No debería permitir el retiro

    // Generar reporte en archivo .txt
    std::ofstream reporte("reporte.txt");
    if (reporte.is_open()) {
        reporte << "Reporte de Cuentas Bancarias:\n";
        for (const auto& cuenta : cuentas) {
            reporte << "Cuenta: " << cuenta.obtenerNumeroCuenta() 
                    << " | Saldo: " << cuenta.obtenerSaldo() << "\n";
        }
        reporte.close();
        std::cout << "Reporte generado en 'reporte.txt'" << std::endl;
    } else {
        std::cout << "Error al abrir el archivo de reporte." << std::endl;
    }

    return 0;
}
