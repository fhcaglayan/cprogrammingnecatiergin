#### Bir tamsayı dizisindeki eşsiz _(unique)_ olan değerleri standart çıkış akımına yazdıracak bir fonksiyon tanımlayınız:

```
void display_unique(const int *p, size_t size);
```

#### Aşağıda sizin için bir test kodu var:

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

	display_unique(a, SIZE);	
}
```

Yukarıdaki kodda, `a` dizisinin öğelerine rastgele değerler yerleştiriliyor ve bu dizinin öğeleri standart `printf` işlevi ile kullanıcı ekranına yazdırılıyor. Dizi öğeleri aşağıdaki gibi olsun:

`16 7 7 6 6 13 16 19 6 15 5 2 11 7 5 13 5 9 6 13`

Bu durumda tanımladığınız fonksiyon çalıştırıldığında ekrana şu değerleri yazmalı:

`19 15 2 11 9`

Kodunuzda ikinci bir dizi tanımlanmamalı.

[ödevin cevabı](https://vimeo.com/440984113)
