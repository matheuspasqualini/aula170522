#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main ()
{
	setlocale(LC_ALL, "");	
	int numeros [TAM];
	int i, aux, contador;
printf ("Entre com cinco números para preencher o array,e pressione enter após digitar cada um: \n ");
 for (i = 0; i < TAM; i++){
 	scanf("%d", &numeros[i]);
 }	
printf("Ordem atual dos itens no array: \n");
for (i=0; i < TAM; i++){
	printf ("%d ", numeros[i]);
}	
	//Algoritmo de ordenação Bubblesort:
	for (contador = 1; contador < TAM; contador++){
	  for (i = 0; i< TAM - 1; i++){
	  	if (numeros[i]> numeros[i+1]){
	  		aux = numeros[i];
	  		numeros[i] = numeros [i + 1];
	  		numeros [i + 1] = aux;
		  }
	  }	
	}
	printf ("\n Elementos do array em ordem crescente: \n");
	for (i = 0; i< TAM; i++){
		printf ("%d ", numeros[i]);
	}
	printf("\n");
	return 0;
}
	
	
	
	
	

