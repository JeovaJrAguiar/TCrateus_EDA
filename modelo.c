#include "lib.h"

// ---------------- Estrutura Tabela HASH----------------------
int criar(TLista *L){
	int i=0;
	for(i=0;i<MAX;i++)
		L->dado[i]= NULL;
	L->n = 0;
	return 1;	
}

int inserir(TLista *L, int hash, Tdado dado){
	Tno novo;
	novo = (Tno*) malloc(sizeof(Tno));
	novo->dado = dado;
	if(L->dado[hash]==NULL){
		L->dado[hash] = novo;
		novo->proximo = NULL;
	}
	else{
		novo->proximo = L->dado[hash];
		L->dado[hash] = novo;
	}
	L->n+=1;
	return 1;
}

void exibir(TLista L){
	int i;
	Tno aux;
	if(L.n!=0){
		for(i=0;i<MAX;i++){
			if(L.dado[i] != NULL){
				printf("---------indice %d---------\n", i);
				 aux = 	L.dado[i];
				 while(aux !=NULL){
				 	printf("Chave = %d\n", aux->dado.chave);
				 	printf("Descricao = %s\n\n", aux->dado.descricao);
				 	aux = aux->proximo;
				 }
			}
		}
	}
	else
		printf("Tabela Vazia");
}

int hashing(int chave){
	return (chave % MAX);
}


// ---------------------------- Estrutura AVL ---------------------

int altura_AVL(Tno *a){
	int alt_esq=0, alt_dir=0;
	if(a==NULL)
		return 0;
	else{
		alt_esq = altura_AVL(a->esq);
		alt_dir = altura_AVL(a->dir);
		if(alt_esq> alt_dir)
			return (1 + alt_esq);
		else
			return (1+alt_dir);
	}
}
int calcula_FB(Tno *a){
	return (altura_AVL(a->esq) - altura_AVL(a->dir));
}
Tno* rotacao_simples_esquerda(Tno *a){
	Tno *aux;
	aux = a->dir;
	a->dir = aux->esq;
	aux->esq = a;
	a = aux;
	return a;
}
Tno* rotacao_simples_direita(Tno *a){
	Tno *aux;
  	aux = a->esq;
  	a->esq = aux->dir;
  	aux->dir = a;
  	a = aux;
  	return a;
}
Tno* balanceamento(Tno* a){
	int fator = calcula_FB(a);
	if(fator > 1)
		return balanceio_esquerda(a);
	else
		if(fator < -1 )
			return balanceio_direita(a);
	return a;
}
Tno * balanceio_esquerda(Tno *a){
	int fator = calcula_FB(a->esq);
	if(fator>0)
		return rotacao_simples_direita(a);
	else 
		if(fator<0){
			a->esq = rotacao_simples_esquerda(a->esq);
			a = rotacao_simples_direita(a);
			return a;
		}
	 	else return a;
}
Tno * balanceio_direita(Tno *a){
	int fator = calcula_FB(a->dir);
	if(fator <0)
		return rotacao_simples_esquerda(a);
	else
		if(fator>0){
			a->dir = rotacao_simples_direita(a->dir);
			a = rotacao_simples_esquerda(a);
			return a;
		}
		else 
			return a;
}