#include  "pilha.h"
#include  "fila.h"


#define VERMELHO    printf("\033[1;31m");
#define AMARELO		printf("\033[1;93m");
#define MAGENTA		printf("\033[1;35m");


int main(){

	int *op = malloc(1*sizeof(int));

	int val, ret;


	    iniciarPilha();
		iniciarFila();


do { 

	system("clear");

	printf("\n");

printf("\t       1)Inserir dados na pilha\n");
printf("\t       2)Inserir dados na fila\n");
printf("\t       3)Remover dados da pilha\n");
printf("\t       4)Remover dados da fila\n");
printf("\t       5)Visualizar os dados da pilha\n");
printf("\t       6)Visualizar os dados da fila\n");
printf("\t       7)Sair\n");

printf("\n\t\tDIGITE SUA OPÇÃO: ");
scanf("%i",&*op);




switch(*op){

	case 1:

	MAGENTA
	printf("\nDigite um valor para inserir na Pilha: ");
	scanf("%i", &val);

	ret = inserirPilha(val);

								if(ret == -1) {

									printf("[ERRO]: Não foi possível inserir na Pilha!");
								}

								else {

									printf("[OK] O valor %i foi inserido com sucesso!", ret);
								}
								
								__fpurge(stdin);
								getchar();
								
								break;



	case 2:

	MAGENTA
	printf("\nDigite um valor para inserir na Fila: ");
	scanf("%i", &val);

	ret = inserirFila(val);

								
								if(ret == -1) {
									printf("[ERRO]: Não foi possível inserir na Fila!");
								}

								else {
									printf("[OK] O valor %i foi inserido com sucesso!", ret);
								}
								
								__fpurge(stdin);
								getchar();


                                break;


	case 3:

								ret = retirarPilha();
								
								if(ret == -1) {
									MAGENTA
									printf("[ERRO]: A Pilha está vazia!");
								}
								
								else{

									MAGENTA
									printf("[OK] O valor (%i) foi retirado com sucesso!", ret );
								}
								
								__fpurge(stdin);
								getchar();
								break;
	


	case 4:

							    ret = retirarFila();
								
								if(ret == -1) {
									MAGENTA
									printf("[ERRO]: A Fila está vazia!");
								}
								
								else{

									MAGENTA
									printf("[OK] O valor (%i) foi retirado com sucesso!", ret);
								}
								
								__fpurge(stdin);
								getchar();
								break;


    case 5:

    								MAGENTA
								printf("\nPILHA:\n");
								visualizarPilha();
								
								__fpurge(stdin);
								getchar();
								break;




    case 6:

    								MAGENTA
								printf("\nFILA:\n");
								visualizarFila();
								
								__fpurge(stdin);
								getchar();
								break;


}

} while(*op != 7);


  printf("\n");



}

