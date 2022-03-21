/*
 * Author: Fatih Han Caglayan
 * Exercise: 32. Ders 1. Odev: Sort names
 *
 */

#include <stdio.h>
#include <string.h>
#include "futility.h"


int ficmp(const void* vp1, const void* vp2)
{
    if (*(const int *) vp1 > *(const int *) vp2)
        return 1;

    if (*(const int *) vp1 < *(const int *) vp2)
        return -1;

    return 0;
}


int fstrcmp(const void* vp1, const void* vp2)
{
    return strcmp(*(const char **)vp1, *(const char **)vp2);
}


int main()
{
    int a[] = {3,1,4,8,4,2,6,8,9,3,1,4,6,9,5,3,1};
    qsort(a, asize(a), sizeof(*a), &ficmp);
    print_array(a, asize(a));

    const char* pnames[] = {"gul", "aydan", "fazilet", "nurdan", "turhan", "nurullah", "polathan", "esra", "ceyhan", "samet", "cengiz"};

	qsort(pnames, asize(pnames), sizeof(*pnames), &fstrcmp);

	for (size_t i = 0; i < asize(pnames); i++)
	{
		printf("%s ", pnames[i]);
	}



}