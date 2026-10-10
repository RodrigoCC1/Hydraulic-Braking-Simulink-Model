#ifndef SISTEMAFH_HPP
#define SISTEMAFH_HPP

class SistemaFH{
    public:
    SistemaFH(double A1, double A2, double L1, double L2);

    double calcularFuerzaSalida(double Fin) const;

    private:
    const double GT;
};

#endif