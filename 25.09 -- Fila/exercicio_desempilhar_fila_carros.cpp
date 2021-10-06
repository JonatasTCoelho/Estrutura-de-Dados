#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha_para_carros.h"
using namespace std;

elem estacionamento_aux[TAM_PILHA];
int qtd=0;
/*
elem Maior_Elem_Pilha(Pilha *P, elem *X)
{
	elem maior = P->itens[P->topo];
	for(int i=0; i<TAM_PILHA-1; i++)
	{
		if(P->itens[i]>maior)
			maior = P->itens[i];
	}
	return maior;	
}
*/

bool busca_carro_estacionamento(Pilha P, int placa){
	bool erro;
	elem carro;
	while(!IsEmpty(&P)){
		Pop(&P, &erro);
		if(X.placa==placa)
		{
			cout << "Carro com a placa " << X.placa << " foi encontrado." << endl;
			cout << "Quantidade de carros retirados: " << qtd << endl;
			return true;
		}
		estacionamento_aux[qtd] = X;
		qtd++;
		
	}
	return false;
}



int main()
{
	elem carro;
	bool erro, resultado;
	int placa;
	int tam_pilha;
	Pilha Pilha1, Pilha2;
	cout << "Quantos carros estão empilhados(enfileirados)? " << endl;
	cin >> tam_pilha;
	Create(&Pilha1);
	for(int i=0; i<tam_pilha; i++)
	{
		cout << "Modelo do carro: " << i+1 << endl;
		cin >>  carro.modelo;
		cout << "Placa do carro: " << i+1 << endl;
		cin >> carro.placa;
		Push(&Pilha1, &carro, &erro);
	}
	
	cout << "Qual placa está procurando? " << endl;
	cin >> placa;
	
	resultado = busca_carro_estacionamento(Pilha1, placa);
	if(resultado)
	{
		cout << "Carro encontrado:" << endl;
		cout << X.modelo << " " << X.placa << endl;
		if(qtd==0)
			cout << "Carro procurado estava no começo da fila(topo da pilha)" << endl;
		else{
			cout << "Foram retirados os seguintes carros:" << endl;
			for(int i=0; i<qtd; i++){
				cout<< estacionamento_aux[i].modelo << " " << estacionamento_aux[i].placa << endl;
			}
		}	
	}
	else
		cout << "Carro não encontrado" << endl;
}
