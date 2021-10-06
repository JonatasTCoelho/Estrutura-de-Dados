#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");

	float parcela,juros;
	int atraso,taxa;

	cout << "Qual o valor inicial da parcela?" << endl;
	cin >> parcela;

	cout << "Quantas parcelas estão em atraso?" << endl;
	cin >> atraso;

	cout << "Qual a taxa de juros por dia?" << endl;
	cin >> taxa;
		
	juros = parcela * ((float)taxa/100) * atraso;
	cout <<"Valor da prestação vencida: " <<"R$"<<parcela<<endl;
	cout <<"Atraso: "<<atraso<<" dias"<<endl;
	cout <<"Juros: "<<juros<<"%"<<endl;
	cout <<"Novo valor: "<< parcela+juros <<endl;

	return 0;
}
