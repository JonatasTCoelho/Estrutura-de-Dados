#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "Portuguese");
	
	float distancia, total;
	char tipo_carro;
	
	cout << "Qual a distância percorrida? "; 
	cin >> distancia;
	
	cout << "Qual o tipo do carro? A,B ou C? " << endl;
	cin>> tipo_carro;
	
	if(tipo_carro == 'A' || tipo_carro == 'a'){
		total = distancia / 12;
		cout << "O consumo de gasolina será : " << total << endl;
	}
	
	if(tipo_carro == 'B' || tipo_carro == 'b'){
		total = distancia / 9;
		cout << "O consumo de gasolina será : " << total << endl;
	}
	
	if(tipo_carro == 'C' || tipo_carro == 'c'){
		total = distancia / 8;
		cout << "O consumo de gasolina será : " << total << endl;
	}		
	return 0;
}
