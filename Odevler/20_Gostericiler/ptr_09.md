#### Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

**Sorunun yanıtı şu seçeneklerden biri de olabilir:**
+ Sentaks hatası _(syntax error)_
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir. *(implementation defined/specified)*

```
#include <stdio.h>

int main()
{
	int a[5] = { -1, 3, 2, -2, 0};
	int *p = a + 3;
	int i;

	a[p[*p]]++;
	a[p[*p]]++;
	
	for (i = 0; i < 5; ++i)
		printf("%d ", a[i]);
}

```

[ödevin cevabı](https://vimeo.com/369813044)
