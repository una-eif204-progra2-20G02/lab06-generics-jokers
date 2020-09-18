//
// Created by dayan on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_MEDICAMENTO_H
#define MY_PROJECT_NAME_MEDICAMENTO_H
#include<iostream>
#include<sstream>

using namespace std;

class Medicamento {
private:
    string nombreMedicamento;
    double dosis;
    int precio;
    double nivelEfectividad;
    int annioVencimiento;

public:

    Medicamento(string nombreMedicamento, double dosis, int precio, double nivelEfectividad, int annioVencimiento);

    ~Medicamento();

    string getNombreMedicamento();

    void setNombreMedicamento(string nombreMedicamento);

    int getPrecio();

    void setPrecio(int precio);

    double getDosis();

    void setDosis(double dosis);

    double getNivelEfectividad();

    void setNivelEfectividad(double nivelEfectividad);

    int getAnnioVencimiento();

    void setAnnioVencimiento(int annioVencimiento);

    string toString();

};


#endif //MY_PROJECT_NAME_MEDICAMENTO_H
