#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro engenheiro1, engenheiro2, engenheiro3;

  engenheiro1.setEngenheiroModel("João Snow", 35, 3);
  engenheiro1.printEngenheiroSalary(9.5);

  engenheiro2.setEngenheiroModel("Daniela Targaryen", 30, 1);
  engenheiro2.printEngenheiroSalary(8);

  engenheiro3.setEngenheiroModel("Bruno Stark", 30, 2);
  engenheiro3.printEngenheiroSalary(8);

  Vendedor vendedor1, vendedor2, vendedor3;

  vendedor1.setVendedorModel("Tonho Lannister", 20, 5000);
  vendedor1.printVendedorSalary(6);
	
  vendedor2.setVendedorModel("Jose Mormont", 25, 3000);
  vendedor2.printVendedorSalary(8);

  vendedor3.setVendedorModel("Sonia Stark", 30, 4000);
  vendedor3.printVendedorSalary(8);
  
  return 0;	
}