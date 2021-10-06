#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Digite um número" << endl;
	cin >> num;
	
		if(num % 3 == 0 && num % 7 != 0){
			cout << "O número é divisível por 3, mas não por 7";
	}else if(num % 3 != 0 && num % 7 == 0){
			cout << "O número é divisível por 7, mas não por 3";
	}else if(num % 3 == 0 && num % 7 == 0){
			cout << "O número é divisível por 3 e 7";
	}else{
		cout << "O número não é divisível por 3 e nem por 7";
	}
	
	return 0;
}
