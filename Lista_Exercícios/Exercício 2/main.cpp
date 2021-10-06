#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int d,t,v,l;
	
	cout << "Qual foi o tempo da viagem? (em horas) "; 
	cin >> t;
	
	cout << "Qual foi velocidade média? (em KM)" << endl;
	cin>> v;
	
	d = t * v;
	
	l = d / 12; 
	
	cout << "Distância percorrida: " << d << " KM" << endl;
	cout << "Quantidade de litros consumidos: " << l << endl;
	
	
	return 0;
}
