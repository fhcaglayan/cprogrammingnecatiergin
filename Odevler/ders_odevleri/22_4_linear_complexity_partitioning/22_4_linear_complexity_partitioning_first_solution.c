/*
 * Author: Fatih Han Caglayan
 * Exercise: 22. Ders 4. Odev Partition an array with linear complexity
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE  20

int main()
{
    int a[SIZE];

    randomize();
    set_array_random_between_range(a, SIZE, -1000, 1000);

    print_array(a, SIZE);
    printf("\n");

    // sort according to oddity, odd numbers first
    int index_start = 0;
    int index_end = SIZE - 1;
    while (index_start < index_end)
    {
        if(a[index_start] % 2 != 0 && a[index_end] % 2 == 0) {
            index_start++;
            index_end--;
        }
        else if (a[index_start] % 2 == 0 && a[index_end] % 2 != 0){
            swap(&a[index_start], &a[index_end]);
            index_start++;
            index_end--;
        }
        else if (a[index_start] % 2 == 0 && a[index_end] % 2 == 0) {
            index_end--;
        }
        else if (a[index_start] % 2 != 0 && a[index_end] % 2 != 0) {
            index_start++;
        }
    }


    print_array(a, SIZE);
    printf("\n");

    // sort according to sign, negative numbers first
    index_start = 0;
    index_end = SIZE - 1;
    while (index_start < index_end)
    {
        if(a[index_start] < 0 && a[index_end] >= 0) {
            index_start++;
            index_end--;
        }
        else if (a[index_start] >= 0 && a[index_end] < 0){
            swap(&a[index_start], &a[index_end]);
            index_start++;
            index_end--;
        }
        else if (a[index_start] >= 0 && a[index_end] >= 0) {
            index_end--;
        }
        else if (a[index_start] < 0 && a[index_end] < 0) {
            index_start++;
        }
    }

    print_array(a, SIZE);
}