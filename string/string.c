#include <stdio.h>
#include <stdlib.h>

int main(){

	// Nesse caso não é obrigatório informar o tamanho do vetor, apenas os elementos
	// O compilador automaticamente separa a memória necessária para a string
	char palavras[10] = "Oi, C!";

	// printf("Digite seu nome: ");

	// scanf() por padrão não verifica o tamanho do vetor
	// É "cego" ao limite: escreve na memória a partir do endereço do vetor sem parar
	// scanf("%9[^\n]", palavras); --> para string não precisa do '&'

	// gets(palavras); --> Função perigosa, escreve sem se importar com o tamanho do vetor

	// fgets() lê no máximo (N-1) caracteres e delimita o fim da string automaticamente com '\0'
	fgets(palavras, 10, stdin); // 1* Variável | 2* Máximo de leitura | 3* stdin = teclado

	// printf("%c", palavras[0]); --> para imprimir um caractere, precisa indicar o índice
	printf("%s\n", palavras);

	return 0;
}
