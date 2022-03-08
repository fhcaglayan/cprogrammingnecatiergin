#### Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

**Sorunun yanıtı şu seçeneklerden biri de olabilir:**
+ Sentaks hatası _(syntax error)_
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir. *(implementation defined/specified)*

```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define asize(a)    (sizeof(a) / sizeof(*a))

int main()
{
	int a[] = { 693, 951, 962, 787,  40, 124, 328, 626, 497, 162 };

	srand((unsigned)time(0));

	int *p1 = a + rand() % asize(a);
	int *p2 = a + rand() % asize(a);

	if (p1 < p2)
		while (p1 <= p2)
			printf("%d ", *p1++);
	else
		while (p2 <= p1)
			printf("%d ", *p2++);
}

```

[ödevin cevabı](https://vimeo.com/370065186)
