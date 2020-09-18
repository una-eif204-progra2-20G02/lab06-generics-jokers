//
// Created by dayan on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_PACIENTECONSINTOMAS_H
#define MY_PROJECT_NAME_PACIENTECONSINTOMAS_H


class PacienteConSintomas : public Paciente{
private:
    std::string sintomas;
public:
    PacienteConSintomas();

    PacienteConSintomas(int diaDeContagio, int mesDeContagio, int edad,std::string nombre,std::string apellido,std::string hospital,std::string sintomas,Tratamiento *tratamiento);

    std::string getSintomas();

    void setSintomas(std::string sinto);

    std::string ToString() override;

    ~PacienteConSintomas();

};


#endif //MY_PROJECT_NAME_PACIENTECONSINTOMAS_H
