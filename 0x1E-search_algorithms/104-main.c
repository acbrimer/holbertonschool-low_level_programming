#include <stdio.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int array[17] = {
        3, 4, 5, 7, 7, 7, 8, 9, 10, 11, 21, 31, 33, 33, 33, 44, 51};

    int array2[10] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9};

    printf("Found %d at index: %d\n\n", 5, advanced_binary(array2, 10, 5));
    printf("Found at index: %d\n", advanced_binary(array, 17, 31));
    return (0);
}