#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

void print_array(int *array, int left, int right);
int find_binary_search(int *array, int left, int right, int i);

#endif /* SEARCH_ALGOS_H */
