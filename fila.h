#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 10

int top=0;
int *fila;

int iniciarFila(){

	fila = malloc(1*sizeof(int)); //alocação do espaço para os valores da fila

}

	int inserirFila(int val) {
			
			if(top < MAX){ // se o tamanho for menor que 10 ou seja o tamanho maximo é 10 

				fila[top] = val; //pilha  na posição recebe o valor 

				 top++; // incrementou posiçoes 

				fila = realloc(fila, (top+1) * sizeof(int)); // usuario inseriu um novo valor e incrementou 1 espaço para ele 

				return val; // retornando para que ele se mantenha armazenado o último valor digitado
			}
			
			return -1; // retornou -1 porque o usuario digitou mais que 10 valores
	} 
 

	int retirarFila() {

		   int a, val;

			if(top > 0) { // se existir valore nas posiçoes 

				val = fila[0]; // pega o valor da primeira posição

				for(a=0; a<top; a++){ // percorre as posiçoes

					fila[a] = fila[a+1]; // pega os proximos valores 
				}
					
				fila = realloc(fila, (top) * sizeof(int)); // ve o espaço que tem disponivel

				top--; // decrementa seu espaço

				return val; // retorna o ultimo valor que ficou

				}
				
			return -1; // retornou -1 porque o vetor ja nao tem mais posiçoes 
	
	}

	void visualizarFila() {
	
		int a;
	
			for(a=0; a<top; a++) { // percorre a pilha 

				printf("%i ", fila[a]); //ijmprime

			}
	}



		