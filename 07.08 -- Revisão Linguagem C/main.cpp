#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int n, fat;
	
	cout << "INFORME O NuMERO";
	cin >> n;
	
	  for( fat = 1; n > 1; n = n - 1){      
      fat = fat * n;
  }
  
  cout << "Fatorial eh: " << fat;
	return 0;
}
