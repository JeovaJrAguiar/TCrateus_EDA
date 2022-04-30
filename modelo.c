#include "lib.h"

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
				 	printf("Nome = %s\n\n", aux->dado.nome);
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