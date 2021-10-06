#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
setlocale(LC_ALL, "Portuguese");
	
	
		struct atleta{
		char nome[50];
		char posicao;
		int idade;
		float altura;
	};
	
	struct atleta p1, p2, p3, p4, p5;
	
		/*atleta jogadores[5];
	for(int i=0; i<=5; i++)
	{
		jogadores[i] = p1;
	}*/
		
		cout << "Digite o nome:" << endl;
		cin >> p1.nome;
		cout << "Digite a posição:" << endl;
		cin >> p2.posicao;
		cout << "Digite a idade:" << endl;
		cin >> p3.idade;
		cout << "Digite a altura:" << endl;
		cin >> p4.altura;
	
	return 0;
}
