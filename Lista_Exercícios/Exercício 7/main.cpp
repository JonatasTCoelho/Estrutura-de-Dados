#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	int idade;
	
	cout << "Informe a idade do Nadador" << endl;
	cin >> idade;
	
	if(idade >= 5 && idade <=7){
		cout << "Categoria: Infantil A";
	}else if(idade >=8 && idade <= 10){
		cout << "Categoria: Infantil B";
	}else if(idade >=11 && idade <= 13){
		cout << "Categoria: Juvenil A";
	}else if(idade >=14 && idade <= 17){
		cout << "Categoria: Juvenil B";
	}else if(idade >=18){
		cout << "Categoria: Sênio";
	}else{
		cout << "Informe uma idade válida";
	}
	return 0;
}
