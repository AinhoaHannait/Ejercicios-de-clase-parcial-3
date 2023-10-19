/*
#include <stdio.h>

//factorial ! fuciones recursivas


int factorial (int num)
{
	if (num==0)
	return 1;
	else
	return (factorial (num-1)*num);
}

int main ()
{
	int numero;
	printf ("Ingresa un numero para calcular su factorial: ");
	scanf("%d", &numero);
	printf("\n");
	printf("El factorial de %d es %d\n", numero, factorial(numero));
	return 0;
}*/
/*
#include <stdio.h>
//suma de numeros naturales, funciones recursivas

int sumarNumeros (int n);

int main ()
{
	int num;
	printf("Introducir numero: ");
	scanf("%d", &num);
	printf("Suma %d", sumarNumeros(num));
	return 0;
}

int sumarNumeros (int n)
{
	if (n != 0)
	{
		printf("%d ", n);
		return n + sumarNumeros(n-1);
	}
	else
	{
		printf("\n");
		return n;
	}
}*/
/*
#include <stdio.h>

int elevarPotencia(int n1, int n2);

int main()
{
	int num, potencia, result;
	printf("Numero: ");
	scanf("%d", &num);
	printf("Potencia a elevar (numero positivo): ");
	scanf("%d", &potencia);
	result = elevarPotencia(num, potencia);
	printf("%d^%d = %d", num, potencia, result);
	return 0;
}

int elevarPotencia(int num, int potencia)
{
	if (potencia != 0)
	return (num*elevarPotencia(num, potencia-1));
	else
	return 1;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//ordenamiento quicksort
//revisaaaar
void quicksort(int lista[], int primero, int ultimo);
int main ()
{
	int n, i;
	srand(time(NULL));
	printf("Numero de elementos a ordenar:\n");
	scanf("%d", &n);
	int lista[n];
	
	for (i=0; i<n; i++)
	lista [i]= rand() % (100 +1 -1)+1;
	printf("lista sin ordenar\n");
	for (i=0; i<n;i++)
		printf("%d", lista[i]);
	printf("\n");
	
	quicksort(lista, 0, n-1);
	
	printf("Lista ordenada\n");
	for (i=0; i<n; i++)
		printf("%d", lista[i]);
}

void quicksort(int lista[], int primero, int ultimo)
{
	int pivot, i, j, temp;
	if (primero < ultimo)
	{
		pivot = primero;
		i = primero;
		j = ultimo;
		while (i < j)
		{
			while (lista[i] <= lista[pivot] && i<= ultimo){i++;}
			while (lista[j] > lista[pivot] && j >= primero){j--;}
			if (i < j)
			{
				temp = lista[i];
				lista[i] = lista [j];
				lista[j] = temp;
			}
		}
		temp = lista[j];
		lista[j] = lista[pivot];
		lista[pivot] = temp;
		quicksort(lista, primero, j-1);
		quicksort(lista, j+1, ultimo);
	}
}
