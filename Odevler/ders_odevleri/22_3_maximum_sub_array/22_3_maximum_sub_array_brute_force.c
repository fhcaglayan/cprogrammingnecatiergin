/*
 * Author: Fatih Han Caglayan
 * Exercise: 22. Ders 3. Odev Maximum Sub Array brute force method O(n^2)
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		7

int main()
{
    randomize();

    int a[SIZE];

    set_array_random_between_range(a, SIZE, -20, 20);

    print_array(a, SIZE);

    int max_sum = a[0];

    for (int i = 0; i < SIZE; i++) {
        int sum = 0;
        for (int j = i; j < SIZE; j++) {
            sum += a[j];
            if(sum > max_sum) {
                max_sum = sum;
            }
        }
    }

    printf("The sum of the maximum sub array is %d", max_sum);
}