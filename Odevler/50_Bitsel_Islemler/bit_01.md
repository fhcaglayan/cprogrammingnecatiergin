#### Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <stdio.h>

int main()
{
	int a = 3;

	int x = a & a + a ^ a + a << a;

	printf("%d\n", x);
}
```
+ Sorunun yanıtı şu seçeneklerden biri de olabilir:
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_
