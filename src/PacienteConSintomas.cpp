//
// Created by dayan on 17/9/2020.
//

#include "PacienteConSintomas.h"
#include "Paciente.h"

PacienteConSintomas::PacienteConSintomas() {

}


PacienteConSintomas::PacienteConSintomas(int diaDeContagio, int mesDeContagio, int edad,std::string nombre,std::string apellido,std::string hospital,std::string sintomas,Tratamiento *tratamiento) : Paciente(diaDeContagio,mesDeContagio, edad,nombre, apellido,hospital,tratamiento) {
    this->setDiaDeContadio(diaDeContagio);
    this->setMesDeContagio(mesDeContagio);
    setEdad(edad);
    setNombre(nombre);
    setApellido(apellido);
    setHospital(hospital);
    this->sintomas = sintomas;
}

string PacienteConSintomas::getSintomas() { return sintomas; }

void PacienteConSintomas::setSintomas(string sinto) { sintomas = sinto; }

string PacienteConSintomas::ToString() {
    stringstream s;
    s << "Nombre del paciente: " << getNombre() << " " << getApellido() << endl;
    s << "Edad del Paciente: " << getEdad() << endl;
    s << "Fecha de contagio: El " << getDiaDeContagio() << " " << getMesDeContagio() << " 2020" << endl;
    s << "Hospital: " << getHospital() << endl;
    s << "Sintomas: " << getSintomas() << endl;
    s << "Plan de tratamiento: " << endl;
    s << tratamiento->toString() << endl;
    return s.str();
}

PacienteConSintomas::~PacienteConSintomas() {
    delete tratamiento;
}