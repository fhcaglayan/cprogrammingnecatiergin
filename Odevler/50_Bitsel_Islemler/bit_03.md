#### Kendisine gönderilen işaretli tam sayıyı ikilik sayı sisteminde standart çıkış akımınıa yazan _bprint_ isimli işlevi tanımlayınız:

```
void bprint(int val);
```
Standart çıkış akımına yazılacak bit sayısı sistemin _int_ türünün bit sayısı kadar olmalıdır.
Tanımladığınız işlevi aşağıdaki programla test edebilirsiniz:

```
include <stdlib.h>
 
void bprint(int val);
 
int main()
{
	char str[sizeof(int)* 8 + 1];
	int ival;
 
	do {
		printf("bir tamsayi giriniz: ");
		scanf("%d", &ival);
		itoa(ival, str, 2);
		printf("%0*s\n", sizeof(int)* 8, str);
		bprint(ival);
		printf("\n");
	} while (ival != 0);
}
```
