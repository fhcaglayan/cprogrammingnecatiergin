/*
 * Author: Fatih Han Caglayan
 * Exercise: 14_diziler dizi_01 odevi: Dizinin mod'unu (en cok tekrar degerini) bulun.
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		20

int main()
{
    randomize();

    int a[SIZE];

    set_array_random_between_range(a, SIZE, -10, 10);

    print_array(a, SIZE);

    int mod = a[0];
    int max_cnt = 0;

    for (int i = 1; i < SIZE; i++) {
        int cnt = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if(a[i] == a[j])
                cnt++;
        }

        if (cnt > max_cnt) {
            max_cnt = cnt;
            mod = a[i];
        }
    }

    printf("The mod of this array is %d and it repeats %d times", mod, max_cnt);
}