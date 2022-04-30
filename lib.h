#include <stdio.h>
#include <stdlib.h>

// ---------------- Estrutura Tabela HASH----------------------
#define MAX 17
struct dadosSetor{
	int chave;
	char descricao[30];
};

typedef struct dadosSetor TdadosSetor;

 struct no{
        TdadosSetor dadoSetor;
        struct no *proximo;
};

typedef struct no* Tno;

typedef struct{
        Tno dadoSetor[MAX];
        int n;
} TLista;

int criar(TLista *L);
int inserirSetor(TLista *L, int hash, TdadosSetor dadoSetor);
void exibir(TLista L);
int hashing(int chave);

// ---------------------------- Estrutura AVL ---------------------

typedef struct noCliente{
	int id;
	int anoCriacao;
	int numServicosPrestados;
	char razaoSocial[30];
	char endereco[30];
	char nomeResponsavel[30];
	
	int fator_b;
	
	struct no* esq;
	struct no* dir;

}TnoCliente;
//void menu();
int altura_AVL(TnoCliente *a);
int calcula_FB(TnoCliente *a);
TnoCliente* rotacao_simples_esquerda(TnoCliente *a);
TnoCliente* rotacao_simples_direita(TnoCliente *a);
TnoCliente* balanceamento(TnoCliente* a);
TnoCliente* balanceio_esquerda(TnoCliente *a);
TnoCliente* balanceio_direita(TnoCliente *a);
TnoCliente* inserirCliente(TnoCliente* a,  TnoCliente dadoCliente);
void imprime(TnoCliente* a);