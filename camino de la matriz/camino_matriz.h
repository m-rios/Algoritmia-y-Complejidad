//
//  camino_matriz.h
//  Algoritmos
//
//  Created by Mario on 26/10/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#ifndef __Algoritmos__camino_matriz__
#define __Algoritmos__camino_matriz__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int camino_matriz(int F, int C, int m[F][C], int i, int j);
int min(int n1, int n2);
char* camino_matriz_char(int F, int C, int m[F][C], int i, int j);
char* concat(char* s1, char* s2);

#endif /* defined(__Algoritmos__camino_matriz__) */
