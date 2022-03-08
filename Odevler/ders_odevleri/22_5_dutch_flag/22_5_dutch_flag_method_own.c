/*
 * Author: Fatih Han Caglayan
 * Exercise: 22. Ders 5. Odev Dutch flag
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		20

int main()
{
    randomize();

    int a[SIZE];

    set_array_random_between_range(a, SIZE, 0, 2);

    print_array(a, SIZE);

    int index_zeros = 0;
    int index_ones = 0;

    for (int i = 0; i < SIZE; ++i) {
        if(a[i] == 0) {
            swap(&a[index_zeros], &a[i]);
            index_zeros++;
            // if swapped with a one, then put it back in front of the twos
            if(a[i] == 1) {
                swap(&a[i], &a[index_ones]);
            }
            index_ones++;
        }
        else if(a[i] == 1) {
            swap(&a[i], &a[index_ones]);
            index_ones++;
        }
    }

    printf("\n");
    print_array(a, SIZE);
}