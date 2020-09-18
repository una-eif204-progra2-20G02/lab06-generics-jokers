//
// Created by dayan on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_TRATAMIENTO_H
#define MY_PROJECT_NAME_TRATAMIENTO_H
#include<iostream>
#include<sstream>
#include "Medicamento.h"
#include "Coleccion.h"

class Tratamiento {
private:
    int diasDeTratamiento;
    Coleccion<Medicamento> medicamentoLista;
public:
    Tratamiento();

    Tratamiento(int dias);

    void setDiasDeTratamiento(int dias);

    int getTamanno();

    void ingresarAlFinal(Medicamento medicina);

    string toString();
    ~Tratamiento();
};


#endif //MY_PROJECT_NAME_TRATAMIENTO_H
