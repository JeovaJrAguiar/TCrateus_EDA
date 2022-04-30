#include <stdio.h>
#include <stdlib.h>

#define MAX 17
struct dado{
	int chave;
	char nome[30];
};

typedef struct dado Tdado;

 struct no{
        Tdado dado;
        struct no *proximo;
};

typedef struct no* Tno;

typedef struct{
        Tno dado[MAX];
        int n;
} TLista;

int criar(TLista *L);
int inserir(TLista *L, int hash, Tdado dado);
void exibir(TLista L);
int hashing(int chave);