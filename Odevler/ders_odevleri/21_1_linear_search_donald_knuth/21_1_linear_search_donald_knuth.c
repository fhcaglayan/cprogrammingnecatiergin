/*
 * Author: Fatih Han Caglayan
 * Exercise: 21. Ders 1. Odev Linear search with Donald Knuth method
 *
 */

#include <stdio.h>
#include <futility.h>

#define     SIZE  1000

int main()
{
    int a[SIZE];

    randomize();
    set_array_random(a, SIZE);
    print_array(a, SIZE);

    int ival = 151;

    int found_at_end = 0;

    if (a[SIZE - 1] == ival)
        found_at_end = 1;

    int i = 0;
    a[SIZE - 1] = ival;
    while (a[i++] != ival)
        ; // null statement

    if(i < SIZE - 1 || found_at_end)
        printf("Aranan deger bulundu, array'in %d indexli elemani", i);
    else
        printf("Aranan deger bulunamadi");
}