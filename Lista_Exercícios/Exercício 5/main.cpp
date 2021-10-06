#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	float salario;
	
	cout << "Informe seu salário" << endl;
	cin >> salario;
	
	if(salario <= 600){
		cout << "Isento";
	}else if(salario > 600 && salario <= 1200){
		cout << "20% de Desconto INSS";
	}else if(salario > 1200 && salario <= 2000){
		cout << "25% de Desconto INSS";
	}else if(salario > 2000){
		cout << "30% de Desconto INSS";
	}
	
	return 0;
}
