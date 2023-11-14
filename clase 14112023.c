/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () //secuencial
{
	int i, j, num, elemento, bandera = 0;
	
	srand(time(NULL));
	printf("Numero de elementos a crear:\n");
	scanf("%d", &num);
	int lista[num];
	printf("Elemento a buscar:\n");
	scanf("%d", &elemento);
	
	for (i=0; i<num; i++)
	{
		lista [i] = rand () % (10 +1 -1) +1;
	}
	
	printf("Elementos de la lista\n");
		for(i=0; i<num; i++)
		{
			printf ("%d", lista[i]);
		}
		printf("\n");
		
	for (i=0; i<num; i++)
	{
		if (lista[i]== elemento)
		{
			printf("Elemento en posicion: %d\n", i+1);
			bandera = 1;
			break;
		}
	}
	
	if (bandera==0)
	{
		printf("Elemento no se encuentra");
	}
}*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () // binario, revisar para que tome primero el de la izquierda
{
	int i, j, num, elemento, bandera=0;
	int primero, ultimo, mitad;
	
	srand(time(NULL));
	int lista[10] = {1,2,4,6,9,10,11,15,18,20};
	num = 10;
	
	printf("Elemento de la lista\n");
	for (i=0; i<num; i++)
	{
		printf(" %d ", lista [i]);
	}
	
	printf ("\n");
	printf("Elemento a buscar: \n");
	scanf ("%d", &elemento);
	
	primero = 0;
	ultimo = num-1;
	mitad = (primero+ultimo)/2;
	
	while (primero <= ultimo)
	{
		if (lista[mitad] < elemento)
		{
			primero = mitad +1;
		}
		else if (lista[mitad] == elemento) //creo aquí va su <
		{
			printf("Posicion: %d\n", mitad+1);
				bandera = 1;
				break;
		}
		else{ultimo = mitad-1;}
		mitad = (primero+ultimo)/2;
	}
	if (bandera == 0)
	{
		printf ("Elemento no se encuentra");
	}
}*/

#include <stdio.h>
#include <time.h>

int main ()
{
	clock_t tic = clock ();
	
	-Functions-
	
	clock_t toc = clock ();
	printf("Elapse: %f seconds\n", (double)(toc - tic)/CLOCKS_PER_SEC);
	
	return 0;
}
