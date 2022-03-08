/*
 * Author: Fatih Han Caglayan
 * Exercise: 14_diziler dizi_06 odevi: Tekrarlayan tek degeri bulun
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		20

int main()
{
    int a[SIZE];

    randomize();

    int val = rand() % (SIZE - 1) + 1;
    a[0] = val;

    for (int i = 1; i < SIZE; ++i) {
        a[i] = i;
    }

    for (int i = 0; i < 5 * SIZE; ++i) {
        int idx1 = rand() % SIZE;
        int idx2 = rand() % SIZE;
        if (idx1 != idx2) {
            int temp = a[idx1];
            a[idx1] = a[idx2];
            a[idx2] = temp;
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        if (i % 20 == 0)
            printf("\n");
        printf("%3d ", a[i]);
    }

    printf("\ntekrar eden sayi : %d\n", val);

    int repeating_number = a[0];
    for (int i = 1; i < SIZE; i++) {
        int cnt = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if(a[i] == a[j])
                cnt++;
        }

        if (cnt == 2) {
            repeating_number = a[i];
            goto out;
        }
    }
out:
    printf("The repeating number in this array is %d", repeating_number);
}