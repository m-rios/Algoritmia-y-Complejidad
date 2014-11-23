//
//  transponer_matriz.cpp
//  transponer matriz
//
//  Created by Mario on 23/11/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "transponer_matriz.h"


void transponer(int** A, int fini, int ffin, int cini, int cfin)
{
    if ((ffin - fini) < 2) {
        int aux = A[fini][cfin];
        A[fini][cfin] = A[ffin][cini];
        A[ffin][cini] = aux;
        return;
    }
    int fila_m = (ffin + fini)/2;
    int col_m = (cfin + cini)/2;
    
    //transponer las cuatro submatrices
    transponer(A, fini, fila_m, cini, col_m); //A
    transponer(A, fini, fila_m, col_m+1, cfin); //B
    transponer(A, fila_m+1, ffin, cini, col_m); //C
    transponer(A, fila_m+1, ffin, col_m+1, cfin); //D
    
    //intercambiar submatrices B y C
    int npos = (fila_m+1)*(fila_m+1);
    int* auxm = (int*) malloc(sizeof(int) * npos);
    int* auxm2 = (int*) malloc(sizeof(int) * npos);
    int c = 0;
    //auxm <- B
    for (int i = fini; i <= fila_m; i++) {
        for (int j = col_m+1; j <= cfin; j++) {
            auxm[c] = A[i][j];
            c++;
        }
    }
    //auxm2 <- C
    c = 0;
    for (int i = fila_m+1; i <= ffin; i++) {
        for (int j = cini; j <= col_m; j++) {
            auxm2[c] = A[i][j];
            c++;
        }
    }
    //C <-B
    c = 0;
    for (int i = fila_m+1; i <= ffin; i++) {
        for (int j = cini; j <= col_m; j++) {
            A[i][j] = auxm[c];
            c++;
        }
    }
    //B <- C
    c = 0;
    for (int i = fini; i <= fila_m; i++) {
        for (int j = col_m+1; j <= cfin; j++) {
            A[i][j] = auxm2[c];
            c++;
        }
    }
    
}