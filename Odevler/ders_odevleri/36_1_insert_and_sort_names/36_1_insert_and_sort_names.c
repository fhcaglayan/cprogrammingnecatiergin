/*
 * Author: Fatih Han Caglayan
 * Exercise: 36. Ders 1. Odev: insert and sort names
 *
 */

#include <stdio.h>
#include <string.h>
#include "futility.h"

#define SIZE	100

int fstrcmp(const void* vp1, const void* vp2)
{
    return strcmp(*(const char **)vp1, *(const char **)vp2);
}


int main()
{
    int ch;
	char str[SIZE];
	
	int current_size = 10;
	char** pnames = (char**)malloc(current_size * sizeof(char*));
	
	int i;
	int duplicates = 0;
	for (i = 0; ; i++) {
		printf("Isim girmek ister misiniz (e) (h): ");

		while((ch = getchar()) != 'e' && ch != 'h')
			; // null statement

		if(ch == 'h')
            break;

		if(i - duplicates == current_size - 1) {
			current_size *= 2;
            pnames = (char**)realloc(pnames, current_size * sizeof(char*));
		}

        int flag_duplicate = 1;
        while(flag_duplicate) {
            flag_duplicate = 0;
            printf("Ismi girin: ");
            scanf("%s", str);
            pnames[i - duplicates] = _strdup(str);

            for (int k = 0; k < i - duplicates; k++) {
                if (!strcmp(pnames[k], pnames[i - duplicates])) {
                    printf("%s ismi daha once girildi tekrar deneyin: ", pnames[i - duplicates]);
                    flag_duplicate = 1;
                    break;
                }
            }
        }

	}

	qsort(pnames, i - duplicates, sizeof(*pnames), &fstrcmp);

	for (size_t k = 0; k < i - duplicates; k++)
	{
		printf("%s ", pnames[k]);
	}



}