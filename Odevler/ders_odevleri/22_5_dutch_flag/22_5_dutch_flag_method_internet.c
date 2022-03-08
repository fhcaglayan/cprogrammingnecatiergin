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
    int index_twos = SIZE - 1;
    int i = 0;
    while (i < index_twos) {
        if(a[i] == 0) {
            swap(&a[index_zeros], &a[i]);
            index_zeros++;
            i++;
        }
        else if(a[i] == 1) {
            i++;
        }
        else {
            swap(&a[index_twos], &a[i]);
            index_twos--;
        }
    }
    print_array(a, SIZE);
}