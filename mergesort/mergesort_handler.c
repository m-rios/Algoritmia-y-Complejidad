//
//  main.c
//  mergesort
//
//  Created by Mario on 24/10/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "mergesort_handler.h"

int mergesort_handler(int argc, const char * argv[]) {
    int array[8] = {8,7,6,5,4,3,2,1};
    
    merge_sort(array, 0, 7);
    
    for (int i = 0; i < 8; i++) {
        printf("%d|",array[i]);
    }
    return 0;
}
