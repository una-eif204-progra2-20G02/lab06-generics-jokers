//
// Created by dayan on 17/9/2020.
//

#include "Medicamento.h"
edicamento::Medicamento(string nombreMedicamento, double dosis, int precio, double nivelEfectividad,int annioVencimiento)
{
this->nombreMedicamento=nombreMedicamento;
this->dosis=dosis;
this->precio=precio;
this->nivelEfectividad=nivelEfectividad;
this->annioVencimiento=annioVencimiento;
}

Medicamento::~Medicamento(){}

string Medicamento::getNombreMedicamento() {
    return nombreMedicamento;
}

double Medicamento::getDosis() {
    return dosis;
}

int Medicamento::getPrecio() {
    return precio;
}

double Medicamento::getNivelEfectividad() {
    return nivelEfectividad;
}

int Medicamento::getAnnioVencimiento() {
    return annioVencimiento;
}

void Medicamento::setNombreMedicamento(string nombreMedicamento) {
Medicamento::nombreMedicamento = nombreMedicamento;
}

void Medicamento::setDosis(double dosis) {
    Medicamento::dosis = dosis;
}

void Medicamento::setPrecio(int precio) {
    Medicamento::precio = precio;
}

void Medicamento::setNivelEfectividad(double nivelEfectividad) {
    Medicamento::nivelEfectividad = nivelEfectividad;
}

void Medicamento::setAnnioVencimiento(int annioVencimiento) {
    Medicamento::annioVencimiento = annioVencimiento;
}

string Medicamento::toString() {
    stringstream s;
    s<<"Nombre del medicamento: "<<getNombreMedicamento()<<endl;
    s<<"La dosis que debe de ser ingerida es: "<<getDosis()<<endl;
    s<<"Precio del Medicamento: "<<getPrecio()<<endl;
    s<<"Tiene un nivel de efectividad de: "<<getNivelEfectividad()<<endl;
    s<<"Año de vencimiento: "<<getAnnioVencimiento()<<endl;
    return s.str();
}