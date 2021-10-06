#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	int mes;
	enum meses{
		janeiro = 1,
		fevereiro,
		marco,
		abril,
		maio,
		junho,
		julho,
		agosto,
		setembro,
		outubro,
		novembro,
		dezembro
	};
	
	cout << "Digite um número entre 1 e 12 para ver o mês correspondente" << endl;
	cin >> mes;
	
	switch(mes){
		case 1:
			cout << "Janeiro";
			break;
		case 2:
			cout << "Fevereiro";
			break;
		case 3:
			cout << "Março";
			break;
		case 4:
			cout << "Abril";
			break;
		case 5:
			cout << "Maio";
			break;
		case 6:
			cout << "Junho";
			break;
		case 7:
			cout << "Julho";
			break;
		case 8:
			cout << "Agosto";
			break;
		case 9:
			cout << "Setembro";
			break;
		case 10:
			cout << "Outubro";
			break;
		case 11:
			cout << "Novembro";
			break;
		case 12:
			cout << "Dezembro";
		break;
	}
	
	return 0;
}
