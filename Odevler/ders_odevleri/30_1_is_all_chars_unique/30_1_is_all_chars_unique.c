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
    char a[SIZE];

    printf("Please input a string: ");
    scanf("%s", a);

    if (is_all_chars_unique2(a)) {
        printf("Yes, all characters are unique\n");
    }
    else {
        printf("No, there are duplicate characters\n");
    }
}