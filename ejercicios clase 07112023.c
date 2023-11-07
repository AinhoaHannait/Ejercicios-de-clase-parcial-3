/*#include <stdio.h>

int main () //lectura
{
	char caracter; // char type
	FILE *file = fopen ("ordenamiento de numeros.c", "r");
	
	if (file == NULL)
	{
		perror("Error en la epertura del archivo");
		return 1;
	}
	
	while (feof(file) == 0)
	{
		caracter = fgetc (file);
		printf("%c", caracter);
	}
	
	fclose(file);
	printf ("\n\nTodo esta viendo en popa... \n\n\n\n");
	
	return 0;
}*/
/*
#include <stdio.h>

int main () //lectura
{
	char caracter; //intentar hacerlo con cada enter
	int count;
	int condition;
	FILE *file=fopen("comas.txt", "r");
	
	if (file == NULL)
	{
		perror ("Error en la apertura del archivo");
		return 1;
	}
	
	count = 0;
	condition = 0 ;
	
	while (feof(file) == 0)
	{
		caracter = fgetc(file);
		
		if (caracter == '\n')
			condition = 1;
			
		if (!condition)
		if (caracter == ',')
			count++;
	}
	
	printf("%d", count);
	
	fclose(file);
	printf("\n\nTodo esta viento en popa...\n\n\n");
	
	return 0;
}*/
/*
#include <stdio.h>

int main ()
{
	int i, j;
	FILE *archivo;
	int matriz [10][10];
	
	srand(time(NULL));
	
	archivo = fopen("archivo.txt", "w");
	
	if (archivo == NULL)
	{
		perror("Error al crear el archivo");
		return 1;
	}
	
	//Ahora puedes escribir en el archivo
	fprintf(archivo, "Este es un nuevo archivo.\n");
	
	for(i=0; i<10; i++)
	{
	
		fprintf(archivo, "%d\n", i+1 );
	}
	
	for(i= 0; i<10; i++)
	{
		for (j=0; j<10;j++)
		{
			matriz [i][j] = rand () % (1 + 1 - 1) + 1; // intentar con matriz checar rango para que sea solo con 0 y 1
			fprintf(archivo,"%d ", matriz[i][j]);
		}
		
		fprintf (archivo, "\n");
	}
	
	
	// Cierra el archivo después de usarlo
	fclose(archivo);
	
	return 0;
}*/

#include <stdio.h>

int main ()
{
	FILE *archivo;
	
	archivo = fopen("archivo.txt", "a");
	
	if (archivo == NULL)
	{
		perror("Error al crear el archivo");
		return 1;
	}
	
	//Ahora puedes escribir en el archivo
	fprintf(archivo, "Esto se agrega al final.\n");
	
		// Cierra el archivo después de usarlo
	fclose(archivo);
	
	return 0;
}

