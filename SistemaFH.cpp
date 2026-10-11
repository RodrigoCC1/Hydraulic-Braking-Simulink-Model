#include "SistemaFH.hpp"
#include <cassert>

SistemaFH::SistemaFH (double A1, double A2, double L1, double L2, double tau, double dt) :
GT((A2/A1) * (L1/L2)), tau(tau), dt(dt), Fout_actual(0.0)
{
    assert(L2 > 0.0 && "L2 debe ser mayor que 0.0");
    assert(L1 > 0.0 && "L1 debe ser mayor que 0.0");
    assert(A1 > 0.0 && "A1 debe ser mayor que 0.0");
    assert(A2 > 0.0 && "A2 debe ser mayor que 0.0");
    assert(tau > 0.0 && "el amortiguamiento debe ser mayor a 0.0");
    assert(dt > 0.0 && "dt debe ser mayor que 0.0");
}

double SistemaFH::actualizarEstado(double Fin){
    double F_objetivo = Fin * GT;
    Fout_actual += (F_objetivo - Fout_actual) * (dt/tau);
    return Fout_actual;
}

double SistemaFH::getFuerzaSalida() const{
    return Fout_actual;
}
