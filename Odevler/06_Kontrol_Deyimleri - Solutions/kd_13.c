/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_13 odevi
 *
 */


#include <stdio.h>
#include <futility.h>

int main()
{
	int a[10] = {1810, 2678, 8887, 13452, 16982, 21777, 29016, 33010, 36876, 42011};
	int b[10] = {1801, 2677, 8867, 13451, 16981, 21773, 29009, 32999, 36871, 41999};
	int k;

	for (k = 0; k < 10; ++k) {
		if (closest_prime(a[k]) != b[k]) {
			printf("yanlis cozum\n");
			return 0;
		}
	}

	printf("muhtemelen dogru cozum\n");
}