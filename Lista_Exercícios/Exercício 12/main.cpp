#include <iostream>
#include <locale>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float calculo_area(float altura, float base){
	float area;
	
	area = base * altura;
	
	return area;
}

float calculo_perimetro(float altura, float base){
	float perimetro;
	
	perimetro = 2 * (base + altura);
	
	return perimetro;
}

float calculo_diagonal(float altura, float base){
	float diagonal;
	
	diagonal = sqrt(pow(base, 2) + pow(altura, 2));
	
	return diagonal;
}

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	float base, altura;
	
	cout << "Informe a base do retângulo: ";
	cin >> base;
	
	cout << "Informe a altura do retângulo: ";
	cin >> altura;
	
	cout << "Area: " << calculo_area(altura, base) << endl;
	cout << "Perímetro: " << calculo_perimetro(altura, base) << endl;
    cout << "Diagonal: " << calculo_diagonal(altura, base) << endl;
	
	return 0;
}
