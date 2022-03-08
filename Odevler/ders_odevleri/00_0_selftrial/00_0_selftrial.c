/*
 * Author: Fatih Han Caglayan
 * Exercise: 00. Ders 0. Odev: Selftrial
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		100

int main()
{
    int a[SIZE];

    randomize();
    set_array_random(a, SIZE);

    print_array(a, SIZE);

    // Your code here

    printf("\n");
    print_array(a, SIZE);
}