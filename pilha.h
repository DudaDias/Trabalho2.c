#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 10

int tam=0;
int *pilha;

int iniciarPilha(){

	pilha = malloc(1*sizeof(int)); //alocação do espaço para os valores da pilha

}

	int inserirPilha(int val) {

			if(tam < MAX){ // se o tamanho for menor que 10 ou seja o tamanho maximo é 10  

				pilha[tam] = val; // pilha  na posição recebe o valor 

				tam++; // incrementou posiçoes 

				pilha = realloc(pilha, (tam+1) * sizeof(int)); // usuario inseriu novamente 1 e incrementou 1 

				return val; // retornando para que ele se mantenha armazenado o último valor digitado
			}

			
			 return -1; // retornou -1 porque as a condiçao de tam é maior que 10


	} 


	int retirarPilha() {
	
				int val, i;
	
			if(tam > 0) { // se existir valores valores nas posiçoes (tam ==[i])

			 val = pilha[tam-1]; // tam-1 tira o espaço vario que foi dado no realloc

			  for(i=tam; i<tam; i--){ // percorre as posiçoes

					pilha[i] = pilha[i-1]; // pega os proximos valores 

				}
				tam--;

				pilha = realloc(pilha, (tam) * sizeof(int)); // ve o espaço que tem disponivel

				 // decrementa seu espaço


				return val; // retorna o ultimo valor que ficou

				}
				
			return -1; // retornou -1 porque o vetor ja nao tem mais posiçoes 
	} 

	void visualizarPilha() {
	
			int a;
	
			for(a=tam-1; a>=0; a--) { // percorre a pilha 

				printf("%i\n", pilha[a]); // imprime 

			}
	
	}