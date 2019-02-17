// WeatheReport.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#define MONTHS 6
#define YEARS 5


int main()
{
	int rain[YEARS][MONTHS]
	{{4.3,4.3,4.3,3.0,2.0,1.6},
	 {8.5,8.2,1.2,1.6,2.4,3.8},
	 {9.1,8.5,6.7,4.3,2.1,4.5},
	 {7.2,9.9,8.4,3.3,1.2,6.6},
	 {7.6,5.6,3.8,2.8,3.8,1.1}
	};

	int year, month;
	float subtotal, total;

	printf("Year \t\tRAINFALL (inches) \n");
		for (year = 0, total = 0; year < YEARS; year++)
		{
			for (month = 0, subtotal = 0; month < MONTHS; month++)
			{
				subtotal += rain[year][month];

			}
			printf("%d %15.1f \n",2010+ year, subtotal);
			total += subtotal;


		}
		printf("\n The yearly average is %/.1f inches \n\n", total/YEARS);
    std::cout << "Hello World!\n"; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
