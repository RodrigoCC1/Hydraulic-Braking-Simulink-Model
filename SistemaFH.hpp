#ifndef SISTEMAFH_HPP
#define SISTEMAFH_HPP

class SistemaFH{
    public:
    SistemaFH(double A1, double A2, double L1, double L2, double tau, double dt);

    double actualizarEstado(double Fin);

    double getFuerzaSalida() const;

    private:
    const double GT;
    const double tau;
    const double dt;
    double Fout_actual;
};

#endif