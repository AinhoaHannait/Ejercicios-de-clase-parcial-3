#include <stdio.h>
#include <stdlib.h>
#include <time.h>


	float media(int lista[], int n) //Funcion para calcular la media
	{
		int sum=0, media, i;
		for(i=0;i<n; i++)
		{
		    sum+= lista[i];
		}
		media= sum/n;
		return media;	
	}
	
	void orden(int lista[], int n) //Función ordenar el arreglo de numeros y ser usada en la mediana
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
	
	int mayor(int lista[], int n)
	{
		orden (lista, n);
		int mayor=0, i;
		for (i=0; i<n; i++)
		{
			if(lista[i]>mayor)
			mayor=lista[i];
		}
		
		return mayor;
	}
	
	int mediana(int lista[], int n) // función para hallar la mediana
	{
		orden(lista, n);
		int mediana;
		int mitad = n/2;
		
		if (n % 2 == 0)
		{
			mediana = (lista [mitad-1] + lista[mitad]) / 2;
		}
		else
		{
			mediana = lista[mitad];
		}
		
		return mediana;
	}
	
	int moda(int lista[], int n) //función para calcular moda
	{
		int moda=0, cont1=0, cont2=0;
		int i, j;
		
		for(i=0; i<n; i++)
		{
			for(j=0; j<n;j++)
			{
				if(lista[j] == lista[i] && i !=j)
				{
					cont1 ++;
				}
			}
		
		
			if(cont1 > cont2)
			{
				cont2 = cont1;
				moda = lista[i];
			}
			cont1=0;
		}
		
		return moda;	
	}
	
	void histograma(int lista[], int n)
	{
		int max = lista[n-1];
		int min = lista[n];
		int rango = max - min +1;
		int i, j;
		
		int *frecuencias = (int *)calloc(rango, sizeof(int));
		
		for(i=0; i<n; i++)
		{
			frecuencias[lista[i] - min]++;
		}
		
		for (i=0 i<rango; i++)
		{
			printf("%d")
		}
		
	}

int main()
{
  int i,j,n;
  int posAnterior=0,numeroActual=0, sum=0;
  srand(time(NULL));
  printf("Numero de elementos a ordenar\n");
  scanf("%d", &n);
  int lista[n];

  printf("Lista sin ordenar\n");
  for (i=0;i<n;i++)
  {
    lista[i]=  rand() % (30 + 1 - 1) + 1; //numeros de 1 a 30
    printf(" %d ",lista[i]);
  } 
   printf("\n");

  for (i=0;i < n; i++) //ordenamiento por intersección
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

  printf("Lista ordenada\n");
  for (i=0;i<n;i++)
    printf(" %d ", lista[i]);
    
    printf("\nEl numero menor es %d\n", lista[0]);
    printf("El numero mayor es %d", mayor(lista,n));
    printf("\nLa media es %f\n", media(lista, n));
    printf("La mediana es %d\n", mediana(lista,n));
    printf("La moda es %d\n", moda(lista,n));
    
    
	
	
  
  return 0;
}
