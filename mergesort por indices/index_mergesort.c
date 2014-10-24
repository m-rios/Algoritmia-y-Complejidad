//
//  index_mergesort.c
//  mergesort
//
//  Created by Mario on 24/10/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "index_mergesort.h"

void index_merge_sort(int v[], int index[], int ini, int fin)
{
    int mid = (fin+ini)/2;
    if (ini != fin)
    {
        index_merge_sort(v, index, ini, mid);
        index_merge_sort(v, index, mid + 1, fin);
        index_mezclar(v, index, ini, mid, mid + 1, fin);
    }
}
void index_mezclar(int v[], int index[], int ini1, int fin1, int ini2, int fin2)
{
    int* aux = (int*) malloc(sizeof(int)*(fin2-ini1+1));
    int c = 0;
    int ini0 = ini1;
    while ((ini1<=fin1) && (ini2<=fin2))
    {
        if (v[index[ini1]-1]<=v[index[ini2]-1])
        {
            aux[c] = index[ini1];
            ini1++;
        }
        else
        {
            aux[c] = index[ini2];
            ini2++;
        }
        c++;
    }
    for (; ini1<=fin1; ini1++)
    {
        aux[c] = index[ini1];
        c++;
    }
    for (; ini2<=fin2; ini2++) {
        aux[c] = index[ini2];
        c++;
    }
    c = 0;
    for (; ini0<=fin2; ini0++) {
        index[ini0] = aux[c];
        c++;
    }
    free(aux);
}