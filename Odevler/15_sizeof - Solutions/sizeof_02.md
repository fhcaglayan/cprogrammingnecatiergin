#### Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <stdio.h>

int main()
{
	int x = 3;
	int y = 5;
	int z = x + sizeof(++x) - sizeof(++y);

	printf("%d\n", x + y + z);

	return 0;
}
```
-> 11

+ Sorunun yanıtı şu seçeneklerden biri de olabilir:
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_

[ödevin cevabı](https://vimeo.com/455399790)
