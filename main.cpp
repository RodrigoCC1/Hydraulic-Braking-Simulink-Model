#include "SistemaFH.hpp"
#include <iostream>
#include <cmath>

int main(){
    constexpr double Fin = 200.0;
    constexpr double A1 = 3.0;
    constexpr double A2 = 12.0;
    constexpr double L1 = 30.0;
    constexpr double L2 = 7.5;

    constexpr double tau = 0.1;
    constexpr double dt = 0.001;
    constexpr double tiempo_simulacion = 1.0;

    SistemaFH freno(A1, A2, L1, L2, tau, dt);
    
    for(double t = 0.0; t < tiempo_simulacion; t += dt){
        freno.actualizarEstado(Fin);

        if (std::abs(fmod(t, 0.01)) < 1e-5) {
            std::cout << t << "," << freno.getFuerzaSalida() << "\n";
        }
    }

    return 0;
}