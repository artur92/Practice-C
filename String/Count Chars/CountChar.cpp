// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Write a function to count the number of characters in a string (lenght)
cannot use strlen input a character array  and retur and int
*/

#include "pch.h"
#include <iostream>

int StringCount(char word[]);

int main()
{
	
	

	
	char word[] = "Hola mi nombre es Arturoo";
	printf("The text is %s \n", word);
	printf("The number of characteres are: %d \n", StringCount(word));

	return 0;
	
    
}

int StringCount(char word[])
{
	int count = 0;
	// Anothe way to the comparation is with a for ex 
	// for (int i - 0; count[i] != '\0';i++)
	while (word[count] != '\0')
	{
		count++;
	}

	return count;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
