//
// Created by dayan on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_PACIENTEASINTOMATICO_H
#define MY_PROJECT_NAME_PACIENTEASINTOMATICO_H
#include <iostream>
#include <sstream>
#include "Paciente.h"


using namespace std;

class PacienteAsintomatico : public Paciente{
        private:
        string estadoPulmonar;


        public:
        PacienteAsintomatico();

        PacienteAsintomatico(int diaDeContagio, int mesDeContagio, int edad, string nombre, string apellido,string hospital,string estadoPulmonar,Tratamiento *tratamiento);

        string ToString() override;

        ~PacienteAsintomatico();

        string getEstadoPulmonar();

        void setEstadoPulmonar(string estado);
};


#endif //MY_PROJECT_NAME_PACIENTEASINTOMATICO_H
