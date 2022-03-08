#### Bir tamsayı dizisinde eşsiz _(unique)_ olan değerleri standart çıkış akımına yazdırın. 
Aşağıda sizin için bir test kodu var:

```
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define  SIZE 20

int main()
{
	int a[SIZE];
	
	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; ++i) {
		a[i] = rand() % SIZE;
		printf("%d ", a[i]);
	}
	
	printf("\n");

	/*
		sizin kodunuz
	*/
}
```
-> See 22.ders_1.odev_print_unique_array_elements

Yukarıdaki kodda, _a_ dizisinin öğelerine rastgele değerler yerleştiriliyor ve bu dizinin öğeleri standart _printf_ işlevi ile kullanıcı ekranına yazdırılıyor. Dizi öğeleri aşağıdaki gibi olsun:

```
16 7 7 6 6 13 16 19 6 15 5 2 11 7 5 13 5 9 6 13
```

Bu durumda yazdığınız kod çalıştırıldığında ekrana şu değerleri yazmalı:

```
19 15 2 11 9
```

Kodunuzda ikinci bir dizi tanımlanmamalı.
