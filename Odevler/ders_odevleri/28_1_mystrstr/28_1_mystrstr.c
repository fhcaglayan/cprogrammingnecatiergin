/*
 * Author: Fatih Han Caglayan
 * Exercise: 28. Ders 1. Odev: Implement yourself the strstr function
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		100

int main()
{
    char s1[SIZE];
    char s2[SIZE];

    printf("Input the string in which you will do a search: ");
    sgets(s1);
	printf("Input the string to be searched for: ");
    sgets(s2);

    printf("(%s) (%s)\n", s1, s2);
	
	char* ptr = mystrstr(s1, s2);
	
    if(ptr)
    {
        printf("The searched string was found at index %d and the remaining substring is: (%s)\n", ptr - s1, ptr);
    }
    else
    {
        printf("The searched string was not found\n");
    }
}