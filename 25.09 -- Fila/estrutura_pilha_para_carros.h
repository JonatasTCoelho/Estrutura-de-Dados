#define TAM_PILHA 5


typedef struct
{
	char modelo[20];
	int placa;
}Carro;

typedef Carro elem;

typedef struct
{
	int topo;
	elem itens[TAM_PILHA];
}Pilha;

void Create(Pilha *P);
void Push(Pilha *P, elem *X, bool *erro);
void Pop(Pilha *P, bool *erro);
bool IsFull(Pilha *P);
bool IsEmpty(Pilha *P);
void Empty(Pilha *P);

void Create(Pilha *P){
	//P = (Pilha*) malloc(sizeof(Pilha));  // CUIDADO: você não quer criar um vetor de Pilhas
	P->topo = -1;
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
	P->topo = -1;
}

bool IsEmpty(Pilha *P)
{
	if(P->topo == -1)
		return true;
	return false;
}

elem X;
void Pop(Pilha *P, bool *erro)
{
	if(!IsEmpty(P)){
		X = P->itens[P->topo];
		P->topo--;
		*erro = false;
	}
	*erro = true;
}


