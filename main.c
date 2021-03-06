#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(void) {
	int op=0, codigoC=0, codigoS=0, hash=0;
	char novoNome[30], novaDescricao[30];
	TnoCliente dadoCliente;
	TnoCliente *dadosCliente = NULL;
	TLista L;
	TdadosSetor dadoSetor;
	criar(&L);
	do{    
    //Exibir menu
        system("cls");
        puts("\n\t\t\t\tTRANSPORTADORA TCRATEUS\n");
        puts("\t1  - EXIBIR SETORES\n \t2  - INSERIR UM SETOR\n \t3  - INSERIR CLIENTES\n \t4  - EXIBIR CLIENTES\n \t5  - ALTERAR NOME DO RESPONSAVEL(CLIENTE)\n \t0  - SAIR");
        printf("\nINFORME SUA OPCAO:\n");
        scanf("%d", &op);//Escolha da Opção
        
    	switch(op)
        	{
        		case 1:{
        			exibir(L);
					break;
				}
				
				case 2:{
					printf("Informe um identificador(Codigo): ");
	                scanf("%d", &dadoSetor.chave);
	                
	                printf("Informe uma descricao: ");
	                fflush(stdin);
					fgets(dadoSetor.descricao, 30, stdin);
	                
	                hash = hashing(dadoSetor.chave);
	                
	                inserirSetor(&L,hash, dadoSetor);
					break;
				}
				
				case 3:{
					printf("Informe um identificador(Codigo): ");
					scanf("%d", &dadoCliente.id);
					
					printf("Informe a Razao Social: ");
					fflush(stdin);
					fgets(dadoCliente.razaoSocial, 30, stdin);
					
					printf("Informe o Enderaco: ");
					fflush(stdin);
					fgets(dadoCliente.endereco, 30, stdin);
					
					printf("Informe a Nome do Responsavel: ");
					fflush(stdin);
					fgets(dadoCliente.nomeResponsavel, 30, stdin);
					
					printf("Informe o Ano de Criacao: ");
					scanf("%d", &dadoCliente.anoCriacao);
					
					dadosCliente = inserirCliente(dadosCliente, dadoCliente);	
					imprime(dadosCliente);
					
					break;
				}
				case 4:{
					imprime(dadosCliente);
					break;
				}
				case 5:{
					printf("Digite o Codigo do Cliente: ");
					scanf("%d", &codigoC);
					printf("Digite o novo nome do responsavel: ");
					fflush(stdin);
					fgets(novoNome, 30, stdin);
					updateNomeResponsavelCliente(dadosCliente, novoNome, codigoC );
					break;
				}
				case 6:{
					printf("Digite o Codigo do Setor: ");
					scanf("%d", &codigoS);
					printf("Digite a nova Descricao do Setor: ");
					fflush(stdin);
					fgets(novaDescricao, 30, stdin);
					
					updateDescricaoSetor(&L, codigoS, novaDescricao);
					break;
				}
        	// Outra opção nao oferecida
    		default:
    			puts("OPCAO INCORRETA,TENTAR NOVAMENTE.");break;
      
        }
	getch();
    }while(op!=0);
  
  //system("PAUSE");	
  return 0;
}
