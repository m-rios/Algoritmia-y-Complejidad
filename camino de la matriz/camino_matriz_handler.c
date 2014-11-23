//
//  camino_matriz_handler.c
//  Algoritmos
//
//  Created by Mario on 26/10/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "camino_matriz_handler.h"

int camino_matriz_handler(int argc, const char * argv[])
{
    int m[3][2] = {{3,1},{2,2},{5,6}};
    printf("camino: %d \n", camino_matriz(3, 2, m, 0, 0));
    return 0;
}