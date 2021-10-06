#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int vetor[5];
	int *ptr;
	
	for(int i=0; i<= 5; i++){

		
		cout << "Informe um valor" << endl;
		cin >> vetor[i];
		
		ptr = &vetor[i];
		
		cout << "Valor da casa: " << ptr << endl;
		cout << endl;
	}
	
		for(int i=0; i <= 5; i++){
			
		ptr = &vetor[i];
			
		cout << "Dobro das casas: " << vetor[i] * 2 << endl;
	}
	
	
	
	return 0;
}
