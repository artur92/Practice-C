#define _CRT_SECURE_NO_WARNINGS
// Challenge2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
 
/*
Write a program that displays a string in reverse order
should read input from the keyboard and order
if you have problems using scanf then need to follow the next steps:
go to Project properties->Configuration Properties->C/C++->Preprocessor->Preprocessor 
Definitions click on edit and add _CRT_SECURE_NO_WARNINGS click ok, apply the settings and run the project –
*/

#include "pch.h"
#include <iostream>
#include <string.h>


int main()
{
	char str[100];
	char name[25][50], temp[25];
	int l, i, n;
	printf("\n\n Print individual characters of string in reverse order: \n");
	printf("-------------------------------------------------------------\n");
	printf("Input the String: \n");
	scanf("%s", str);
	l = strlen(str);

	printf("The characters of the string in reverse are: \n");
	for (i = l; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");
	printf("-------------------------------------------------------------\n");
	printf("\n\nSorts the strings of an array using bubble sort : \n");
	printf("-------------------------------------------------------------\n");
	printf("Input the number of strings : \n");
	scanf("%d", &n);

	printf("Input string %d : \n",n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", name[i]);
	}

	for (int i = 0; i <= n-1; i++)
	{
		for (int j = 0; i <=n-1; j++)
		{
		 if(strcmp(name[j], name[j+1])>0)// String compare
		 {
			 strcpy(temp, name[j]);
			 strcpy(name[j], name[j + 1]);
			 strncpy(name[j + 1], temp, sizeof(name[j]+1) -1 );
		 }
		}
		
	}

	printf("The string appear after sorting : \n");
	for (i = 0; i <= n; i++)
	{
		printf("%s\n", name[i]);
	}









}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
