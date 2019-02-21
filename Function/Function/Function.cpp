// Function.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
/*Escribir el 3 funciones 
1 para calcular el maximo comn divisior
1 para calcular el valor absoluto
1 funcion para calcular la raiz cuadrada
*/

int gdc(int num1, int num2);
float absoulteValue(float num);
float squareRoot(float x);

int main()
{
	std::cout << "Hello World!\n"; 
	int result = gdc(150, 35);
	printf("The gdc of 135 and 35 is %d \n", result);
	printf("The absolute is %.2f \n", absoulteValue(-10));
	printf("The  absolute is d %.2f \n", absoulteValue(32.1));
	printf("The  square root of 25  is d %.2f \n", squareRoot(25));


}

int gdc (int num1, int num2)
{
	int temp = 0;
	while (num2 != 0)
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}


	return num1;
}
float absoulteValue(float num)
{
	if (num < 0)
		num = -num;


	return num;
}

float squareRoot(float x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	
	if (x < 0)
	{
		printf("Negative value \n");
		return -1.0;
	}
	while (absoulteValue(guess* guess - x) > epsilon)
	{
		guess = (x / guess + guess) / 2.0;
	 }

	return guess;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
