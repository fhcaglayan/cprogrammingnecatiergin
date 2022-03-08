/*
 * Author: Fatih Han Caglayan
 * Exercise: 14_diziler dizi_05 odevi: Dizide yer almayan en küçük tamsayıyı bulunuz
 *
 */

#include <stdio.h>
#include "futility.h"

#define   SIZE      100

int icmp(const void *vp1, const void *vp2)
{
	return *(const int *)vp1 > *(const int *)vp2 ? 1  :
         *(const int *)vp1 < *(const int *)vp2 ? -1 : 0;
}

int main()
{
	int a[SIZE];
	
	randomize();

	for (int i = 0, idx = 0; idx < SIZE; ++i) {
		if (rand() % (SIZE / 4) != 0)
			a[idx++] = i;
	}

	for (int i = 0; i < SIZE; ++i) {
		if (i != 0 && i % 20 == 0)
			printf("\n");
		printf("%3d ", a[i]);
	}
	printf("\n\n");

	
	int i;
	for (i = 0; i == a[i] && i < SIZE; i++)
		; // null statement
	
    printf("Bu dizide yer almayan en kucuk tamsayi %d'dir", i);

}