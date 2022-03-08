/*
 * Author: Fatih Han Caglayan
 * Exercise: 23. Ders 2. Odev: Reverse two words
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		100

int main()
{
    char str[SIZE];

    for (int i = 0; i < 10; i++)
    {
        printf("Input a text: ");
        sgets(str);

        printf("(%s)\n", str);

        // Implemented two different algorithms for reversing given two words
        // Reverse 3 times in a row to test both functions: net result should be reversed once
        reverse_two_words(str);
        reverse_two_words_with_shift_by_one(str);
        reverse_two_words(str);

        printf("(%s)\n", str);
    }
}