/*
 * Author: Fatih Han Caglayan
 * Exercise: 22. Ders 4. Odev Partition an array with linear complexity
 *
 */

#include <stdio.h>
#include <futility.h>

#define     SIZE  20

int main()
{
    int a[SIZE];

    randomize();
    set_array_random_between_range(a, SIZE, -1000, 1000);
    print_array(a, SIZE);

    // sort according to oddity, odd numbers first
	int pivot_index = 0;
    for (int i = 0; i < SIZE; i++) 
	{
		if (a[i] % 2 != 0)
		{
			swap(&a[i], &a[pivot_index]);
			pivot_index++;
		}
	}
    print_array(a, SIZE);

    // sort according to sign, negative numbers first
	pivot_index = 0;
    for (int i = 0; i < SIZE; i++) 
	{
		if (a[i] < 0)
		{
			swap(&a[i], &a[pivot_index]);
			pivot_index++;
		}
	}
    print_array(a, SIZE);
}