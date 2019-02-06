#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

//{}
using namespace std;
/* Printing the board where X are the invalidad places in board
'O' are Peg and '*' the free spaces*/
void PrintBoard(int board[7][7])
{
    for(int i=0; i<= 6;i++)
    {
        for(int j=0; j<= 6;j++)
        {
            //This if can be change for a switch
            if(board[i][j]==2)
            {
                 printf("%c\t", 'X');
            }
            else  if(board[i][j]==1)
            {
                 printf("%c\t", '*');
            }
            else
                printf("%c\t",'0');
        }
         printf("\n");
    }
}
/* Check if the game was succesfull or not, for be succes
should have one peg in the middle and the rest space should be empty
*/
bool ValidateWinGame(int WinBoard[7][7])
{

    if(WinBoard[3][3]==1)
    {
     for(int i=0; i<= 6;i++)
      {
        for(int j=0; j<= 6;j++)
        {
          if(WinBoard[i][j]==1 )
            {
                if(i == 3 && j==3){

                }
                else
                return false;
            }
        }
      }
    }

    else
        return false;

  return true;

}
/*
Location measn where the move will be test (North, South, East, West), when flag
is 0 validate if the move is possible or not returning true o false, one flag is 1
is for make the move in the specefic location
*/
bool ValidateMove(int Board[7][7], char location, int i, int j, int flag)
   {
       int validation = false;

       switch (location)
       {
        case 'S':
            if(i > 1 && Board[i-2][j] ==1 && Board[i-1][j] ==1 && flag == 0)
            {
                printf("Se puede mover abajo %d %d %d\n", i,j, Board[i-2][j] );
                validation = true;
            }
            else  if(i > 1 && Board[i-2][j] ==1 && Board[i-1][j] ==1 && flag == 1)
            {
                Board[i-2][j] = 0;
                Board[i-1][j] = 0;
                Board[i][j] = 1;
                printf("Se puede mover abajo %d %d %d\n", i,j, Board[i-2][j] );
                validation = true;
            }
            break;
        case 'N':
            if( i < 5 && Board[i+2][j] ==1 && Board[i+1][j] ==1 && flag == 0)
            {
                printf("Se puede mover arriba %d %d %d\n", i,j, Board[i+2][j] );
                validation = true;
            }
             else if( i < 5 && Board[i+2][j] ==1 && Board[i+1][j] ==1 && flag == 1)
            {
                Board[i+2][j] = 0;
                Board[i+1][j] = 0;
                Board[i][j] = 1;
                printf("Se puede mover arriba %d %d %d\n", i,j, Board[i+2][j] );
                validation = true;
            }
            break;
        case 'E':
         if(j > 1 && Board[i][j-2] ==1 && Board[i][j-1] ==1 && flag==0)
            {
                printf("Se puede mover derecha %d %d %d\n", i,j, Board[i][j-2]);
                validation = true;
            }
         else if(j > 1 && Board[i][j-2] ==1 && Board[i][j-1] ==1 && flag==1)
            {
                Board[i][j-2] = 0;
                Board[i][j-1] = 0;
                Board[i][j] = 1;
                printf("Se puede mover derecha %d %d %d\n", i,j, Board[i][j-2] );
                validation = true;
            }
            break;
        case 'W':
             if( j < 5 && Board[i][j+2] ==1 && Board[i][j+1] ==1 && flag==0)
            {
                printf("Se puede mover izquierda %d %d %d\n", i,j, Board[i][j+2] );
                validation = true;
            }
            else if( j < 5 && Board[i][j+2] ==1 && Board[i][j+1] ==1 && flag==1)
            {
                Board[i][j+2] = 0;
                Board[i][j+1] = 0;
                Board[i][j] = 1;
                printf("Se puede mover izquierda %d %d %d\n", i,j, Board[i][j-2] );
                validation = true;
            }


            break;
        break;


       }
       return validation;

   }


//int (*a)[2]
void SetMt(int a[2][2])
{

    a[0][0] = 100;
    a[1][1]= 4;
}
// Creat the struct
struct CompassRose {
    int N;
    int S;
    int E;
    int W;
};
// The Structur is not necessary but I used for practices
/* Check on the board where are the empty spaces for possibles moves
*/
CompassRose SerchEmptySpace(int board[7][7], CompassRose l, int *arrayLoc)
{
    for(int i=0; i<= 6;i++)
    {
        for(int j=0; j<= 6;j++)
        {
            if(board[i][j]==0 )
            {
               // PosisionarValido(board[7][7],'N');
              // printf("Se encontro un espacio vacio e i: %d y j: %d \n", i, j);
               l.S = ValidateMove(board,'S',i,j,0) ;
               l.N = ValidateMove(board,'N',i,j,0) ;
               l.E = ValidateMove(board,'E',i,j,0) ;
               l.W = ValidateMove(board,'W',i,j,0) ;
               arrayLoc[0] = i;
               arrayLoc[1] = j;
               printf("Posible movimientos disponibles: abajo: %d arriba: %d derecha: %d izquierda: %d \n",l.S , l.N,l.E,l.W);
               return l;
            }
        }
    }
}

void Step(int board[7][7], int prueba [4][32][8500])
{
    int z[2] = {0,0}; // Location 0 will return row and location 1 return the columns
    char p[4]; // N,S,E,W
    PrintBoard(board);
    CompassRose l;
    l = SerchEmptySpace(board, l, z);
    printf("Posible movimientos disponibles: abajo: %d arriba: %d derecha: %d izquierda: %d \n",l.S , l.N,l.E,l.W);
    printf("El valor del arreglo modificado es: %d : %d \n",z[0], z[1]);
    ValidateMove(board,'W',z[0], z[1],1) ;
    PrintBoard(board);

    if(l.S== 1)
        p[0]= 'S';
    else
        p[0] = 'F';

    if(l.N== 1)
        p[1]= 'N';
    else
        p[1] = 'F';

    if(l.E== 1)
        p[2]= 'E';
    else
        p[2] = 'F';

    if(l.W== 1)
        p[3]= 'w';
    else
        p[3] = 'F';

    printf("%s\n", ValidateWinGame(board) ? "true" : "false");


}

int main()
{
    printf("Hola \n");
    int prueba [4][32][8500];

    int board[7][7]={
       {2,2,1,1,1,2,2 },
       {2,2,1,1,1,2,2 },
       {1,1,1,1,1,1,1 },
       {1,1,1,0,1,1,1 },
       {1,1,1,1,1,1,1 },
       {2,2,1,1,1,2,2 },
       {2,2,1,1,1,2,2 }
    };

    printf("Imprimiendo i6 y j4 = %d \n", board[6][4]);
    int WinBoard[7][7]={
       {2,2,0,0,0,2,2 },
       {2,2,0,0,0,2,2 },
       {0,0,0,0,0,0,0 },
       {0,0,0,1,0,0,0 },
       {0,0,0,0,0,0,0 },
       {2,2,0,0,0,2,2 },
       {2,2,0,0,0,2,2 }
    };
    PrintBoard(WinBoard);

    bool validation = ValidateWinGame(WinBoard);
    cout << "Hello world!" << endl;
    printf("%s\n", validation ? "true" : "false");

    //printf("%c",219);

    // creamos una matriz:
    int z[2][2]; // sz 2


    SetMt(z);
    printf("%d\n", z[0][0]); // Salida: 24

    Step(board, prueba);
    printf("%d\n", z[0][0]); // Salida: 24
    PrintBoard(board);

    getchar();
    return 0;
}
