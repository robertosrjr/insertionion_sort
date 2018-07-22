/*
 ============================================================================
 Name        : InsertionionSort.c
 Author      : Roberto S. Ramos Jr
 Version     :
 Copyright   : robertosrjr@gmail.com
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int vec[] = {12, 58, 16, 38, 31, 23, 37, 11, 42, 27, 47, 28};
int tamanho = 12;
int qtd = 0;

int main(void) {

	puts("Algoritmos e Estrutura de Dados em C - Insertionion Sort"); /* prints Algoritmos e Estrutura de Dados em C - Insertionion Sort */

	int qtde = 0;
		printf("Imprimir vector: ");
		print_vector();
		printf("\n");

		qtde = insertionionSort(vec, tamanho, qtd);
		printf("Imprimir vector ordenado: ");
		print_vector();
		printf("\n");

		printf("Quantidade de Iterações: %d", qtde);

	return EXIT_SUCCESS;
}


int insertionionSort(int vec[], int tam) {

	int i, j, qtd=0;
	for (i = 1; i < tam; i++) {

		j = i;
		while ((vec[j] < vec[j - 1]) && (j!=0)) {

			troca(&vec[j], &vec[j-1]);
			j--;
			qtd++;
		}
	}
	return(qtd);
}

void troca(int* a, int* b) {

	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void print_vector() {

	int i;
	for (i = 0; i < tamanho -1; i++) {

		printf("%d, ", vec[i]);
	}
}
