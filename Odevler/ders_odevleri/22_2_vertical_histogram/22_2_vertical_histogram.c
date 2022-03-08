/*
 * Author: Fatih Han Caglayan
 * Exercise: 22. Ders 2. Odev Print a vertical histogram from an array
 *
 */

#include <stdio.h>
#include "futility.h"

#define		SIZE		10

int main()
{
	int a[SIZE];

    int max = 5;
    randomize();
    set_array_random_between_range(a, SIZE, 0, max);

    print_array(a, SIZE);

    for (int line = max; line > 0; line--)
    {
        for (int i = 0; i < SIZE; i++)
        {
            if(a[i] >= line)
                printf("  * ");
            else
                printf("    ");
        }
        printf("\n");
    }
	
}