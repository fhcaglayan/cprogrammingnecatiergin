Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <stdio.h>

int main()
{
	char *a[] = { "necati", "kagan", "oguz", "gurbuz" };
	char **ptr[] = { a + 3, a + 2, a + 1, a }, ***p;
	p = ptr;
	++p;
	printf("%s", **p + 1);
}
```


__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_
