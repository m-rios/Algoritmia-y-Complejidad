//
//  index_mergesort_handler.c
//  Algoritmos
//
//  Created by Mario on 24/10/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "index_mergesort_handler.h"

int index_mergesort_handler(int argc, const char * argv[]) {
    int v[] = {50,98,10,63,31,25,63,74};
    int index[] = {1,2,3,4,5,6,7,8};
    
    index_merge_sort(v, index, 0, 7);

    for (int i = 0; i < 8; i++) {
        printf("%d|",index[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 8; i++) {
        printf("%d|",v[i]+1);
    }
    
    
    return 0;
}
