/*
 * Author: Fatih Han Caglayan
 * Exercise: 23. Ders 1. Odev: Palindrome test
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		100

int main()
{
    char str[SIZE];

    printf("Input a text: ");
    sgets(str);

    printf("(%s)\n", str);

    if (is_palindrome(str))
        printf("The input you provided is a palindrome");
    else
        printf("The input you provided is not a palindrome");
}