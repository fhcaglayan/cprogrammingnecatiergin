/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_01 odevi
 *
 */

#include <stdio.h>
#include <futility.h>


int main()
{
	int x, y, z;

	printf("uc tamsayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);

	printf("%d %c %d %c %d", 
			min3(x, y, z), 
			min3(x, y, z) == median3(x, y, z) ? '=' : '<', 
			median3(x, y, z), 
			max3(x, y, z) == median3(x, y, z) ? '=' : '<',
			max3(x, y, z));
}

/* asagidaki eski kod yukaridaki koda gore kotu sayilir mi?
int main()
{
	int x, y, z;

	printf("uc tamsayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);

	if(x <= y && y <= z)
		printf("%d %c %d %c %d", x, x == y ? '=' : < , y, y == z ? '=' : '<', z);
	elif(x <= y && z <= y)
		printf("%d %c %d %c %d", x, x == z ? '=' : < , z, z == y ? '=' : '<', y);
	elif(y <= x && x <= z)
		printf("%d %c %d %c %d", y, y == x ? '=' : < , x, x == z ? '=' : '<', z);
	elif(y <= x && z <= x)
		printf("%d %c %d %c %d", y, y == z ? '=' : < , z, z == x ? '=' : '<', x);
	elif(z <= x && x <= y)
		printf("%d %c %d %c %d", z, z == x ? '=' : < , x, x == y ? '=' : '<', y);
	elif(z <= x && y <= x)
		printf("%d %c %d %c %d", z, z == y ? '=' : < , y, y == x ? '=' : '<', x);
}
*/