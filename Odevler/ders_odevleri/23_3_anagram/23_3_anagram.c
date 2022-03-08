/*
 * Author: Fatih Han Caglayan
 * Exercise: 23. Ders 3. Odev: Anagram test
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		100

int main()
{
    char s1[SIZE];
    char s2[SIZE];

    printf("Input two words: ");
    scanf("%s%s", s1, s2);

    printf("(%s) (%s)\n", s1, s2);

    printf("Check for anagrams with an auxiliary array\n");
    if(is_anagram(s1, s2))
    {
        printf("The two words are each others anagram\n");
    }
    else
    {
        printf("The words are not each others anagram\n");
    }

    printf("Try the same without auxiliary array but by sorting both arrays\n");
    if(is_anagram_with_sort(s1, s2))
    {
        printf("The two words are each others anagram\n");
    }
    else
    {
        printf("The words are not each others anagram\n");
    }

}