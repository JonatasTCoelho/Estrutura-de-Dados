#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	struct Departamento
	{
		int id;
		char nome[50];
	};
	
	struct Cargo
	{
		int id;
		char descricao[100];
	};
	
	struct Funcionario
	{
		int id;
		char nome[50];
		float salario;
		Departamento dep;
		Cargo cargo;
	};
	
	int num_dpto, num_cargo, num_func;
	
	cout << "Quantos Departamentos existem? ";
	cin >> num_dpto;
	cout << "Quantos Cargos existem? " ;
	cin >> num_cargo;
	cout << "Quantos funcionarios existem? " ;
	cin >> num_func;
	
	Departamento *dpto;
	Cargo *crg;
	Departamento departamento[num_dpto];
	Cargo cargo[num_cargo];
	Funcionario func[num_func];
	
	dpto = departamento; // ponteiro aponta para o primeiro elemento do vetor departamento
	crg = cargo; // ponteiro aponta para o primeiro elemento do vetor cargo
	
	cout << endl;
	// Cadastra dados de departamento
	for(int i=0; i<num_dpto; i++)
	{
		dpto = &departamento[i]; 
		cout <<  "Nome do Departamento " << i +1 << " : ";
		cin >> dpto->nome;
		//cin >> departamento[i].nome;
		cout <<  "Id do Departamento " << i +1 << " : ";
		cin >> dpto->id; 
		//cin >> departamento[i].id;	
	}
	
	cout << endl;
	// Cadastra dados de cargo
	for(int i=0; i<num_cargo; i++)
	{
		crg = &cargo[i];
		cout <<  "Nome do Cargo " << i +1 << " : ";
		cin >> crg->descricao;
		// cin >> cargo[i].descricao;
		cout <<  "Id do Cargo " << i +1 << " : ";
		cin >> crg->id;
		// cin >> cargo[i].id;
	}
	
	cout << endl;
	//Cadastra funcionario
	for(int i=0; i<num_func; i++)
	{
		cout <<  "Id do Funcionario " << i +1 << " : ";
		cin >> func[i].id;
		cout <<  "Nome do Funcionario " << i +1 << " : ";
		cin >> func[i].nome;
		cout <<  "Salario do Funcionario " << i +1 << " : ";
		cin >> func[i].salario;
		cout <<  "Departamento do Funcionario " << i +1 << " : ";
		cin >> func[i].dep.nome;
		cout <<  "Cargo do Funcionario " << i +1 << " : ";
		cin >> func[i].cargo.descricao;
	}
	
	cout << endl;
	//Exibir dados do departamento
	for(int i=0; i<num_dpto; i++)
	{
		dpto = &departamento[i];
		cout << "Nome do Departamento: " << dpto->nome << endl;
		//cout << "Nome do Departamento: " << departamento[i].nome << endl;
		cout << "Id do Departamento: " << dpto->id << endl << endl;
		//cout << "Id do Departamento: " << departamento[i].id << endl << endl;
	}
	
	cout << endl;
	
	// Exibir dados de cargo
	for(int i=0; i<num_cargo; i++)
	{
		crg = &cargo[i];
		cout <<  "Nome do Cargo: " << crg->descricao << endl;
		cout <<  "Id do Cargo: " << crg->id << endl << endl;
	}
	
	cout << endl;
	// Exibir dados de funcionario
	for(int i=0; i<num_func; i++)
	{
		cout << "Id do funcionario: " << func[i].id << endl;
		cout << "Nome do funcionario: " << func[i].nome << endl;
		cout << "Salario do funcionario: " << func[i].salario << endl;
		cout << "Departamento do funcionario: " << func[i].dep.nome << endl;
		cout << "Cargo do funcionario: " << func[i].cargo.descricao << endl << endl;
	}
}
