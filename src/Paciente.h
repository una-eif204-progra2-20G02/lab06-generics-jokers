//
// Created by dayan on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_PACIENTE_H
#define MY_PROJECT_NAME_PACIENTE_H
#include<iostream>
#include "Tratamiento.h"
class Paciente {
protected:
    int diaDeContagio;
    int mesDeContagio;
    int edad;
    std::string nombre;
    std::string apellido;
    std:: string hospital;
    Tratamiento *tratamiento;
public:
    Paciente();

    Paciente(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido, string hospital,Tratamiento *tratamiento);

    string getHospital();

    void setHospital(string hospi);

    int getDiaDeContagio();

    void setDiaDeContadio(int dia);

    int getMesDeContagio();

    void setMesDeContagio(int mes);

    int getEdad();

    void setEdad(int edad);

    string getNombre();

    void setNombre(string nombre);

    string getApellido();

    void setApellido(string Apellido);

    string getMedicamentosLista();

    virtual string ToString() = 0;

    // void agregarTratamiento(Tratamiento tratamiento);

    ~Paciente();
};


#endif //MY_PROJECT_NAME_PACIENTE_H
