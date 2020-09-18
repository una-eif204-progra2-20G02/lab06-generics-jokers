//
// Created by dayan on 17/9/2020.
//

#include "PacienteAsintomatico.h"
#include "Paciente.h"

PacienteAsintomatico::PacienteAsintomatico() {

}


PacienteAsintomatico::PacienteAsintomatico(int diaDeContagio, int mesDeContagio, int edad, string nombre,string apellido, string hospital,string estadoPulmonar,Tratamiento *tratamiento) : Paciente(diaDeContagio, mesDeContagio,edad, nombre, apellido,hospital,tratamiento) {
    this->setDiaDeContadio(diaDeContagio);
    this->setMesDeContagio(mesDeContagio);
    setEdad(edad);
    setNombre(nombre);
    setApellido(apellido);
    setHospital(hospital);
    this->estadoPulmonar = estadoPulmonar;



}

string PacienteAsintomatico::getEstadoPulmonar() { return estadoPulmonar; }

void PacienteAsintomatico::setEstadoPulmonar(string estado) { estadoPulmonar = estado; }

string PacienteAsintomatico::ToString() {
    stringstream s;
    s << "Nombre del paciente: " << getNombre() << " " << getApellido() << endl;
    s << "Edad del Pacienta: " << getEdad() << endl;
    s << "Fecha de contagio: El " << getDiaDeContagio() << " " << getMesDeContagio() << " 2020" << endl;
    s << "Hospital: " << getHospital() << endl;
    s << "Estado Pulmonar: " << getEstadoPulmonar() << endl;
    s << "Plan de tratamiento: " << endl;
    s << tratamiento->toString() << endl;
    return s.str();
}

PacienteAsintomatico::~PacienteAsintomatico() {
    delete tratamiento;
}