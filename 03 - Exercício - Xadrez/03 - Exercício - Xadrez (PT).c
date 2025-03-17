#include <stdio.h>

void main() {
    int /*TAB[8][8],*/ Linha, Coluna;
    int tab[8][8]={{6,0,0,5,0,0,1,0},
                   {0,1,0,2,0,3,0,2},
				   {0,1,1,1,0,1,0,0},
                   {0,0,2,0,3,4,4,3},
				   {1,0,1,1,0,1,0,0},
                   {0,0,1,3,0,4,0,1},
                   {1,0,0,0,2,2,2,1},
                   {1,5,0,6,0,1,1,6}};

    char vetorTipos[7] = {0,0,0,0,0,0,0};

    /*printf("Type all matrix values: ");

    for (Linha=0;Linha<8;Linha++){
        for (Coluna=0;Coluna<8;Coluna++){
            scanf("%d", &Tab[Linha][Coluna]);
        }
    }*/

    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            vetorTipos[tab[i][j]]++;
        }
    }

    for (int i=0;i<7;i++){
        printf("%d ", vetorTipos[i]);
    }
}

/*
0- Nenhuma peça       1- Peões       2- Cavalos       3- Torres       4- Bispos       5- Reis       6- Rainhas
*/
