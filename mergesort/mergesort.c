//
//  mergesort.c
//  MergeSort
//
//  Created by Mario on 24/10/14.
//  Copyright (c) 2014 Mario. All rights reserved.
//

#include "mergesort.h"

void merge_sort(int v[], int ini, int fin)
{
    int mid = (fin+ini)/2;
    if (ini != fin)
    {
        // printf("%d\n",fin);
        merge_sort(v, ini, mid);
        merge_sort(v, mid + 1, fin);
        mezclar(v, ini, mid, mid + 1, fin);
    }
}

void mezclar(int v[], int ini1, int fin1, int ini2, int fin2)
{
    int* aux = (int*) malloc(sizeof(int)*(fin2-ini1+1));
    int c = 0;
    int ini0 = ini1;
    while ((ini1<=fin1) && (ini2<=fin2))
    {
        if (v[ini1]<=v[ini2])
        {
            aux[c] = v[ini1];
            ini1++;
        }
        else
        {
            aux[c] = v[ini2];
            ini2++;
        }
        c++;
    }
    for (; ini1<=fin1; ini1++)
    {
        aux[c] = v[ini1];
        c++;
    }
    for (; ini2<=fin2; ini2++) {
        aux[c] = v[ini2];
        c++;
    }
    c = 0;
    for (; ini0<=fin2; ini0++) {
        v[ini0] = aux[c];
        c++;
    }
    free(aux);
}