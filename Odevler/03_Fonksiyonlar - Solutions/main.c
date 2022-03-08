#include <stdio.h>
#include "futility.h"

int main()
{
	int x, y, z;

	printf("uc tamsayi girin:\n");
	scanf("%d%d%d", &x, &y, &z);
	
	printf("%d, %d ve %d sayilarinin en buyugu %d\n", x, y, z, max3(x, y, z));

	int a, b, c, d;

	printf("dort tamsayi girin:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	printf("%d, %d, %d ve %d sayilarinin en buyugu %d\n", a, b, c, d, max4(a, b, c, d));

    printf("The day of the year is %d\n", day_of_year(23,1,2022));
    printf("The day of the year is %d\n", day_of_year(31,12,2021));
}