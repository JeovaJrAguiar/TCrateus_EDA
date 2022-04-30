#include "lib.h"

int main(void) {
	int op;
	TLista L;
	Tdado dado;
	criar(&L);
	int hash;
	do{    
    //Exibir menu
        system("cls");
        puts("\n\t\t\t\tTRANSPORTADORA TCRATEUS\n");
        puts("\t1  - EXIBIR SETORES\n \t2  - INSERIR UM SETOR\n \t0  - SAIR");
        printf("\nINFORME SUA OPCAO:\n");
        scanf("%d", &op);//Escolha da Opção
        
    	switch(op)
        	{
        		case 1:{
        			exibir(L);
					break;
				}
				
				case 2:{
					printf("Informe uma chave(Identificador): ");
	                scanf("%d", &dado.chave);
	                
	                printf("Informe uma descrição: ");
	                fflush(stdin);
					fgets(dado.descricao, 30, stdin);
	                
	                hash = hashing(dado.chave);
	                inserir(&L,hash, dado);
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
