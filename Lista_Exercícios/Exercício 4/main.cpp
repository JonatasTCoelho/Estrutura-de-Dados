#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Digite um n�mero" << endl;
	cin >> num;
	
		if(num % 3 == 0 && num % 7 != 0){
			cout << "O n�mero � divis�vel por 3, mas n�o por 7";
	}else if(num % 3 != 0 && num % 7 == 0){
			cout << "O n�mero � divis�vel por 7, mas n�o por 3";
	}else if(num % 3 == 0 && num % 7 == 0){
			cout << "O n�mero � divis�vel por 3 e 7";
	}else{
		cout << "O n�mero n�o � divis�vel por 3 e nem por 7";
	}
	
	return 0;
}
