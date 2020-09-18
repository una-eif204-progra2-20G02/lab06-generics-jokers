//
// Created by dayan on 17/9/2020.
//

#include "Paciente.h"
Paciente::Paciente() {

}

Paciente::Paciente(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido,string hospital,Tratamiento *tratamiento){
    this->diaDeContagio = diaDeContagio;
    this->mesDeContagio = mesDeContagio;
    this->edad = edad;
    this->nombre = nombre;
    this->apellido = apellido;
    this->hospital = hospital;
    this->tratamiento = tratamiento;


}

int Paciente::getDiaDeContagio() { return diaDeContagio; }

void Paciente::setDiaDeContadio(int dia) { diaDeContagio = dia; }

int Paciente::getEdad() { return edad; }

void Paciente::setEdad(int edad) { this->edad = edad; }

int Paciente::getMesDeContagio() { return mesDeContagio; }

void Paciente::setMesDeContagio(int mes) {
    mesDeContagio = mes; }

string Paciente::getNombre() {
    return nombre; }

void Paciente::setNombre(string nombre) {
    this->nombre = nombre; }

string Paciente::getApellido() { return apellido; }

void Paciente::setApellido(string Apellido) {
    this-> apellido = Apellido; }

string Paciente::getHospital() {
    return hospital;
}

void Paciente::setHospital(string hospi) {
    this->hospital = hospi;
}

Paciente::~Paciente() {}
