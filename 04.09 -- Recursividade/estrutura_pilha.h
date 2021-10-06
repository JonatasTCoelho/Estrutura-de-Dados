
typedef int elem;
int qtd_carro;

typedef struct
{
	char modelo[5];
	int placa;
	elem itens[qtd_carro];
}Carro;


void Create(Pilha *P);
void Push(Pilha *P, elem *X, bool *erro);
void Pop(Pilha *P, bool *erro);
bool IsFull(Pilha *P);
bool IsEmpty(Pilha *P);
void Empty(Pilha *P);

void Create(Pilha *P){
	//P = (Pilha*) malloc(sizeof(Pilha));  // CUIDADO: você não quer criar um vetor de Pilhas
	P->topo1   = -1;
	p->topo2 = MAX
}

bool IsFull(Pilha *P)
{
	if(P->topo == TAM_PILHA-1)
		return true;
	return false;
}

void Push(Pilha *P, elem *X, bool *erro)
{
	if(!IsFull(P)){
		P->topo++;
		P->itens[P->topo] = *X;
		*erro = false;
	}
	*erro = true;
}

void Empty(Pilha *P)
{
	for(; P->topo>=0; P->topo--){
		P->itens[P->topo] = 0;
	}
	
	// P->topo = -1;
}

bool IsEmpty(Pilha *P)
{
	if(P->topo == -1)
		return true;
	return false;
}

void Pop(Pilha *P, bool *erro)
{
	elem X;
	if(!IsEmpty(P)){
		X = P->itens[P->topo];
		P->topo--;
		*erro = false;
	}
	*erro = true;
}



