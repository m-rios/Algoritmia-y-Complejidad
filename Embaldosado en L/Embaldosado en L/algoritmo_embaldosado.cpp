//
//  algoritmo_embaldosado.cpp
//  Embaldosado en L
//
//  Created by Mario on 22/11/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "algoritmo_embaldosado.h"

int embaldosar(int** h, int fini, int ffin, int cini, int cfin, int x, int y, int npieza)
{
    //caso basico
    if (cfin-cini < 2) {
        for (int i = fini; i <= cfin; i++) {
            for (int j = cini; j <= cfin; j++) {
                if (h[i][j] == -1) {
                    h[i][j] = npieza;
                }
            }
        }
        return npieza;
    }
    
    //rellenar cuadrado del centro
    if ((x <= cfin/2) and ( y <= ffin/2)) { // superior izquierda
        h[ffin/2][cfin/2+1] = npieza;
        h[ffin/2+1][cfin/2] = npieza;
        h[ffin/2+1][cfin/2+1] = npieza;
    } else if ((x > cfin/2) and (y <= ffin/2)) { // superior derecha
        h[ffin/2][cfin/2] = npieza;
        h[ffin/2+1][cfin/2] = npieza;
        h[ffin/2+1][cfin/2+1] = npieza;
    } else if ((x <= cfin/2) and (y > ffin/2)) { // inferior izquierda
        h[ffin/2][cfin/2] = npieza;
        h[ffin/2+1][cfin/2+1] = npieza;
        h[ffin/2][cfin/2+1] = npieza;
    } else {                                    //inferior derecha
        h[ffin/2][cfin/2] = npieza;
        h[ffin/2][cfin/2+1] = npieza;
        h[ffin/2+1][cfin/2] = npieza;
    }
    int n = npieza +1;
    n = embaldosar(h, fini, ffin/2, cini, cfin/2, cfin/2, ffin/2, n);
    n = embaldosar(h, fini, ffin/2, cfin/2 + 1, cfin, cfin/2+1, ffin/2, n);
    n = embaldosar(h, ffin/2+1, ffin, cini, cfin, cfin/2, ffin/2+1, n);
    n = embaldosar(h, ffin/2+1, ffin, cfin/2+1, cfin, cfin/2+1, ffin/2+1, n);
    return npieza;
}
