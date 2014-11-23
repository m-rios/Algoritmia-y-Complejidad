//
//  main.cpp
//  transponer matriz
//
//  Created by Mario on 23/11/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include <iostream>
#include "transponer_matriz.h"

int main(int argc, const char * argv[]) {
    // insert code here...

    int ** matriz = (int**) malloc(4 * sizeof(int*));
    for (int i = 0; i < 4; i++) {
        matriz[i] = (int*) malloc(4 * sizeof(int));
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
    
    std::cout << "Matriz original" << std::endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Matriz transpuesta" << std::endl;
    transponer(matriz, 0, 3, 0, 3);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    
    return 0;
}
