#include "SistemaFH.hpp"
#include <iostream>

int main(){
    constexpr double Fin = 10.0;
    constexpr double  A1 = 2.0;
    constexpr double A2 = 4.0;
    constexpr double L1 = 5.0;
    constexpr double L2 = 9.0;

    SistemaFH freno(A1, A2, L1, L2);
    const double Fout = freno.calcularFuerzaSalida(Fin);
    std::cout << "Fuerza de salida: " << Fout;
}