//
// Created by dayan on 17/9/2020.
//

#include "Tratamiento.h"
#include "Medicamento.h"
#include "Tratamiento.h"

Tratamiento::Tratamiento() {
}

Tratamiento::Tratamiento(int dias) {
    setDiasDeTratamiento(dias);
}

void Tratamiento::setDiasDeTratamiento(int dias) {
    diasDeTratamiento = dias;
}

void Tratamiento::ingresarAlFinal(Medicamento medicina) {
    medicamentoLista.agregar(medicina);
}

int Tratamiento::getTamanno() {
    return medicamentoLista._n();
}

string Tratamiento::toString() {
    stringstream s;
    int i;
    for (auto i = 0; i < getTamanno(); i++) {
        s << medicamentoLista.toString() << endl;
    }
    return s.str();
}

Tratamiento::~Tratamiento() {

}