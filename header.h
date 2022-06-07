#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>
#define ligne 10
#define colonne 10
#define loose -500		


typedef struct
{
  int x;
  int y;
  int thickness;

  char tab[4][4];

} pa;



void videScanf();
int choosecc (pa piece);



int chooseorientation ();


int
randpiece ();


pa placement (int randpiece, int orientation);

void printpiecerota (int randpiece);
 

void printpiece(char tetris [11][10] , int col , pa piece );

int game ();
