// Tic Tac Toe Gate C.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>


char board[9] = { '1','2', '3', '4', '5', '6', '7', '8', '9' };
bool checkForWin();
void markBoard();
void drawBoard();




int main()
{
    
	
	drawBoard();
}

void drawBoard()
{
	system("cls");
	printf("   |   |   \n");
	printf(" %c | %c | %c  \n", board[0], board[1], board[2]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c  \n", board[3], board[4], board[5]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c  \n", board[6], board[7], board[8]);
	printf("   |   |   \n");
	
	 
}
bool checkForWin()
{
	return false;

}
void markBoard() 
{

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
