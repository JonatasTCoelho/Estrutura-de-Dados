#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	float area, base, altura, perimetro;
	
	cout << "Informe a base do retangulo \n";
	cin >> base;
	
	cout << "Informe a altura do retangulo \n";
	cin >> altura;
	
	area = base * altura;
	perimetro = (base * 2) + (altura * 2);
	
	cout << "A area do retangulo eh: " << area << endl;
	cout << "O perimetro do retangulo eh: " << perimetro;
	
	if(altura != '1'){
		cout << "Informe um valor!";
	}
	if(base != '2'){
		cout << "Informe um valor!";
	}
	
	return 0;
}
