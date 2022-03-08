/*
 * Author: Fatih Han Caglayan
 * Exercise: 22. Ders 3. Odev Maximum Sub Array Kadane's algorithm O(n)
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		20

int main()
{
    randomize();

    int a[SIZE];

    set_array_random_between_range(a, SIZE, -20, 20);

    print_array(a, SIZE);

    int max_sum = a[0];
    int max_sum_current = a[0];

    for (int i = 1; i < SIZE; i++) {
        max_sum_current += a[i];
        if (a[i] > max_sum_current)
            max_sum_current = a[i];

        if(max_sum_current > max_sum) {
            max_sum = max_sum_current;
        }
    }

    printf("The sum of the maximum sub array is %d", max_sum);
}