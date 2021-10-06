#include <iostream>
#include <locale>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct Atleta{
	char nome[30];
	char posicao[30];
	int idade;
	float altura;	
};

struct atleta;

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "Portuguese");
	
		int qtd_atleta, j, i;
	
		cout << "Informe a quantidade de atletas" << endl;
		cin >> qtd_atleta;
		
		Atleta atletas[qtd_atleta], a;
			
	for(i=0; i<qtd_atleta; i++){
		cout << "Informe o nome do atleta: " << endl;
		cin >> atletas[i].nome;

		cout << "Informe a posição do atleta: " << endl;
		cin >> atletas[i].posicao;
	
		cout << "Informe a idade do atleta: " << endl;
		cin >> atletas[i].idade;
		
		cout << "Informe a altura do atleta: " << endl;
		cin >> atletas[i].altura;
	}
	
	for(i=0; i<qtd_atleta; i++){	
		for(j = i + 1; j<qtd_atleta; j++){
			if(atletas[i].idade < atletas[j].idade){
			
			strcpy(a.nome, atletas[i].nome);
			strcpy(a.posicao, atletas[i].posicao);
			a.idade = atletas[i].idade;
			a.altura = atletas[i].altura;
			}
		}
	}
	
	cout << "Ordenação por ordem decrescente de idade " << endl;
		for(i=0; i < qtd_atleta; i++){
			cout << "Nome: " << atletas[i].nome << endl;
			cout << "Posição: " << atletas[i].posicao << endl;
			cout << "Idade: " << atletas[i].idade << endl;
			cout << "Altura: " << atletas[i].altura << endl;
			cout << "-------------------------------------" << endl;
		}
			
	return 0;
}
