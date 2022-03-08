#### Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

**Sorunun yanıtı şu seçeneklerden biri de olabilir:**

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir. *(implementation defined/specified)*


```
#include <stdio.h>

int main()
{
	int a[4] = { 2, 0, 3, 1};
	int i;

	++2[a][a][a][a];

	for (i = 0; i < 4; ++i)
		printf("%d ", a[i]);
	
	return 0;
}
```

[ödevin cevabı](https://vimeo.com/370063292)
