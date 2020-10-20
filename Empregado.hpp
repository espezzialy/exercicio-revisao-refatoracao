#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado {
	
  public:
    double salarioHora;
    double quotaMensalVendas;
    static constexpr int MESES_NO_ANO = 12;
    static constexpr int MAXIMO_HORAS = 8;
    string nome;    

    double pagamentoMes(double horasTrabalhadas) {
 
     double t = horasTrabalhadas;
        if (horasTrabalhadas > MAXIMO_HORAS) {
            double aux = horasTrabalhadas - MAXIMO_HORAS;
            t += aux / 2;
        }
        return t * salarioHora;
    }
	
};
#endif