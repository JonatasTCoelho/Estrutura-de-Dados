#include <iostream>
#include <locale>
#include <ctype.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "Portuguese");
	char letra;
	
	cout << "Informe uma letra";
	cin >> letra;
	
	switch(toupper(letra)){
		case 'A':
			cout << "É vogal";
			break;
		case 'E':
			cout << "É vogal";
			break;
		case 'I':
			cout << "É vogal";
			break;
		case 'O':
			cout << "É vogal";
			break;
		case 'U':
			cout << "É vogal";
			break;	
			
		default:
		cout << "É consoante";			
	}
	
	return 0;
}
