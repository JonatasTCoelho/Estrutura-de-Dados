#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

	
	typedef struct {
	int id[5];
	char descricao;
} cargo;
	
	cargo carg;
	cargo *ptrcar = &carg;

	typedef struct {
	int id[5];
	char nome;
} departamento;

	departamento dep;
	departamento *ptrdep = &dep;
	
	typedef struct {
	int id[5];
	char nome;
	float salario;
	cargo cargo;
	departamento dep;
} funcionario;

	funcionario func;
	funcionario *ptrfunci = &func;



int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");

	float qtd_func, qtd_dep, qtd_carg;
	int i;
	cout << "Quantos Funcionarios existem na empresa? " << endl;
	cin >> qtd_func;
	
		for(i=0; i<=qtd_func; i++){
		cout << "Digite o nome do funcionário" << endl;
		cin >> (*ptrfunci).nome ;
	}
	
	cout << "Quantos departamentos existem na empresa? " << endl;
	cin >> qtd_dep;
			for(int i=0; i <= qtd_dep; i++){
				
		cout << "Digite o nome do departamento " << endl;
		cin >> (*ptrdep).nome;
	}
	
	cout << "Quantos cargos a empresa possui? " << endl;
	cin >> qtd_carg;
			for(int i=0; i < qtd_carg; i++){
		cout << "Digite o nome do cargo" << endl;
		cin >> carg.descricao;
	}
	
	cout << "Funcionarios: " << func.nome << endl;

	

	

	
	return 0;
}
