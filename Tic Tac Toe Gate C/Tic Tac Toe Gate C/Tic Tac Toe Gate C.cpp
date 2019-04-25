// Tic Tac Toe Gate C.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>


char board[9] = { '1','2', '3', '4', '5', '6', '7', '8', '9' };
bool checkForWin();
void drawBoard();




int main()
{
	drawBoard();
	int player = 1;
	do
	{
		
		int move = 0;
		ask:
		printf("Choose PLayer %d \n", player);
		scanf_s("%d", &move);
		printf("el valor leido es %d  es mayor o menor del valor permitido \n", move);
		if (move > 9 || move <= 0 )
		goto ask;
		player == 1 ? board[move - 1] = '0' : board[move - 1] = 'x';		
		drawBoard();
		player++;
		player > 2 ? player = 1 : player; // Ternary expresion es mas optimo usar un if pq no cumplo la segunda condicion pero esto solo es un ejemplo


	} while (checkForWin()== false);
	
	checkForWin();
	printf("Ganaste \n");

	
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
	int move = 0, colum = 0;
	if (board[0] == '0' && board[4] == '0'&&  board[8] == '0' || board[0] == 'x' && board[4] == 'x' &&  board[8] == 'x'
		|| board[6] == 'x' && board[4] == 'x' &&  board[2] == 'x' || board[6] == '0' && board[4] == '0' &&  board[2] == '0')
	{
		
		return true;
	}

	for(int i= 0; i<=9; i+=3)
	{

		if(board[i]== '0' && board[i+1] == '0'&&  board[i+2] == '0' || board[i] == 'x' && board[i + 1] == 'x' &&  board[i + 2] == 'x')
		{
		//printf("Entro en el for %d \n", i);
		return true;
		}
		if (board[colum] == '0' && board[colum + 3] == '0'&&  board[colum + 6] == '0' || board[colum] == 'x' && board[colum + 3] == 'x' &&  board[colum + 6] == 'x')
		{
			//printf("Entro en el for %d \n", i);
			return true;
		}
		colum++;

	}
	return false;

}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
