#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

void print_array(int *arr, int l, int r);
int find_binary_s earch(int *arr, int l, int r, int x);

#endif /* SEARCH_ALGOS_H */
