#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	float c,f;
	
	cout << "Informe o valor em Celsius" << endl;
	cin >> c;
	
	f = ((c*9)+160) / 5;
	
	cout << "Valor em Fahrenheit: " << f << endl;
	return 0;
}
