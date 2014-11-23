//
//  camino_matriz.c
//  Algoritmos
//
//  Created by Mario on 26/10/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "camino_matriz.h"

int camino_matriz(int F, int C, int m[F][C], int i, int j)
{
    if ((i == F-1) && (j == C-1))
        return m[i][j];
    if (i == F-1)
        return m[i][j] + camino_matriz(F, C, m, i, j+1);
    if (j == C-1)
        return m[i][j] + camino_matriz(F,C,m, i+1, j);
    else
        return m[i][j] + min(camino_matriz(F, C, m, i+1, j), camino_matriz(F, C, m, i, j+1));
}

char* camino_matriz_char(int F, int C, int m[F][C], int i, int j)
{
    if ((i == F-1) && (j == C-1))
        return "";
    if (i == F-1)
        return concat("A",camino_matriz_char(F, C, m, i, j+1));
    if (j == C-1)
        return concat("D",camino_matriz_char(F, C, m, i+1, j));
    else
        return m[i][j] + min(camino_matriz(F, C, m, i+1, j), camino_matriz(F, C, m, i, j+1));
}

char* concat(char* s1, char* s2)
{
    char* both = (char*) malloc(sizeof(char*)*(strlen(s1)+strlen(s2)));
    strcpy(both, s1);
    strcat(both, s2);
    free(s1);
    free(s2);
    return both;
}


int min(int n1, int n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}