#### Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

**Sorunun yanıtı şu seçeneklerden biri de olabilir:**
+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir. *(implementation defined/specified)*


```
#include <stdio.h>

int main()
{
	int a[4] = { 0, 1, 2, 3};
	int *p = a + 3;
	++*--p;
	++*p--;
	p[2] += p[1];

	for (int i = 0; i < 4; ++i)
		printf("%d", a[i]);
}
```

[odevin cevabı](https://vimeo.com/440710505)
