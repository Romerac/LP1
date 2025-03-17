#include <stdio.h>

void main() {
    int /*TAB[8][8],*/ Line, Column;
    int tab[8][8]={{6,0,0,5,0,0,1,0},
                   {0,1,0,2,0,3,0,2},
				   {0,1,1,1,0,1,0,0},
                   {0,0,2,0,3,4,4,3},
				   {1,0,1,1,0,1,0,0},
                   {0,0,1,3,0,4,0,1},
                   {1,0,0,0,2,2,2,1},
                   {1,5,0,6,0,1,1,6}};

    char VctTypes[7] = {0,0,0,0,0,0,0};

    /*printf("Type all matrix values: ");

    for (Line=0;Line<8;Line++){
        for (Column=0;Column<8;Column++){
            scanf("%d", &Tab[Line][Column]);
        }
    }*/

    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            VctTypes[tab[i][j]]++;
        }
    }

    for (int i=0;i<7;i++){
        printf("%d ", VctTypes[i]);
    }
}

/*
0- absence of chess pieces       1- pawns       2- horses       3- towers       4- bishops       5- Kings       6- Queens
*/
