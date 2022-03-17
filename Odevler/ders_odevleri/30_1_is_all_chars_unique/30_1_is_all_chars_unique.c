/*
 * Author: Fatih Han Caglayan
 * Exercise: 30. Ders 1. Odev: Is all chars unique
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