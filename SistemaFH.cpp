#include "SistemaFH.hpp"
#include <cassert>

SistemaFH::SistemaFH (double A1, double A2, double L1, double L2){
    assert(L2 > 0.0 && "L2 debe ser mayor que 0.0");
    assert(L1 > 0.0 && "L1 debe ser mayor que 0.0");
    assert(A1 > 0.0 && "A1 debe ser mayor que 0.0");
    assert(A2 > 0.0 && "A2 debe ser mayor que 0.0");

    GT = (A2/A1) * (L1/L2);
}

double SistemaFH::calcularFuerzaSalida(double Fin) const{
    double Fout = Fin * GT;
    return Fout;
}
