//
//  main.cpp
//  Embaldosado en L
//
//  Created by Mario on 22/11/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include <iostream>
#include "algoritmo_embaldosado.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int** h = (int**) malloc(8*sizeof(int*));
    for (int i = 0; i < 8; i++) {
        h[i] = (int*) malloc(8*sizeof(int));
        for (int j = 0; j < 8; j++) {
            h[i][j] = -1;
        }
    }
    
    h[3][3] = 0;
    
    embaldosar(h, 0, 7, 0, 7, 3, 3, 1);
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::cout << h[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    return 0;
}
