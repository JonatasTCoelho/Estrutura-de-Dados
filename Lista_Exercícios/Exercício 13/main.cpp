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
			cout << "� vogal";
			break;
		case 'E':
			cout << "� vogal";
			break;
		case 'I':
			cout << "� vogal";
			break;
		case 'O':
			cout << "� vogal";
			break;
		case 'U':
			cout << "� vogal";
			break;	
			
		default:
		cout << "� consoante";			
	}
	
	return 0;
}
