#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	float id_produtos[10] = {12,36,45,259,487,54,59,85,01,10};
	float precos[10] = {10,50,35,185,65,12,455,98,100,24};
	float aux[10] ;
	
	for(int i = 0; i < 10; i++){
		
	aux[i] = precos[i];

	float desconto = precos[i] * 10 / 100;
		
		precos[i] = precos[i] - desconto;
		
	}
	
	for (int i = 0; i < 10; i++){
		cout << "ID Produto: " << id_produtos[i] << " || Preço original:  " << aux [i] << " || Preço Reajustado: " << precos[i]<< endl;
	}
	return 0;
}
