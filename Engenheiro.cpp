#include <string>
#include "Empregado.hpp"
using namespace std;

class Engenheiro : public Empregado {

  public:
	int projetos;

  void printEngenheiroSalary(double horasTrabalhadas){
  cout << "Nome: " << nome << endl;
  cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << endl;
  cout << "Projetos: " << projetos << endl;
  cout << endl;
  }

  void setEngenheiroModel(string setNome, double setSalarioHora, double setProjetos) {
    setNome = nome;
    setSalarioHora = salarioHora;
    setProjetos = projetos;
  }
	
};

