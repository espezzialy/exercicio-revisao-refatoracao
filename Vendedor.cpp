#include <string>
#include "Empregado.hpp"
using namespace std;

class Vendedor : public Empregado {

  public:
	
	double quotaTotalAnual() {
	  return quotaMensalVendas * MESES_NO_ANO;
	}

	void setVendedorModel(string setNome, double setSalarioHora, double setQuota) {
    setNome = nome;
    setSalarioHora = salarioHora;
    setQuota = quotaMensalVendas;
  }

	void printVendedorSalary(double horasTrabalhadas){
		cout << "Nome: " << nome << endl;
  		cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << endl;  
  		cout << "Quota vendas: " << quotaTotalAnual() << endl;
  		cout << endl;
	}


	
};

