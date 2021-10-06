#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	float valor_compra, valor_venda, valor_final, valor_total;
	
	cout << "Informe o valor da compra: ";
	cin >> valor_compra;
	
	if(valor_compra <= 20){
		valor_final = valor_compra * 0.45;
		valor_total = valor_compra + valor_final;
		
		cout << "O valor final do produto com 45% de lucro será: " << valor_total << endl;
		
	}else if(valor_compra > 20){
		valor_final = valor_compra * 0.30;
		valor_total = valor_compra + valor_final;
		
		cout << "Valor final com 30% de lucro: " << valor_total << endl;
	}
	return 0;
}
