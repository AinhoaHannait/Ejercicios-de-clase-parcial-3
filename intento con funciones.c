#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arreglo()
{
	int i, j,elemento;
	int num = 10;
	srand(time(NULL));
	printf("Numero de elementos a crear:\n");
	//scanf("%d", &num);
	int lista[num];
	
	for (i=0; i<num; i++)
	{
		lista [i] = rand () % (10 +1 -1) +1;
	}
	
	return lista [i];
	
}

int secuencial(int lista[])
{
	int i, j, num, elemento, bandera=0;
	int primero, ultimo, mitad;
	
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
}

void orden(int lista[], int n) //Funcion ordenar el arreglo de numeros y ser usada en secuancial
	{
		int i, numeroActual, posAnterior;
		for (i=0;i < n; i++)
		{
		    numeroActual = lista[i];
		    posAnterior = i-1;
		    
		    while (posAnterior >= 0 && lista[posAnterior] >numeroActual) 
		    {
		      lista[posAnterior + 1] = lista[posAnterior];
		      posAnterior--;
		    }
		    lista[posAnterior+1] = numeroActual;
		}
	}
	
int binario (int lista[])
{
	int i, j, num, elemento, bandera=0;
	int primero, ultimo, mitad;
	
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
	
	return binario;
}

int main ()
{
	clock_t tic = clock ();
	
	int binario, secuencial;
	
	clock_t toc = clock ();
	printf("Elapse: %f seconds\n", (double)(toc - tic)/CLOCKS_PER_SEC);
	
	return 0;
}
