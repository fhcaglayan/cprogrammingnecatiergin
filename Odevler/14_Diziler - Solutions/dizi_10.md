Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <stdio.h>

int main()
{
	int a[] = { 0, 1, 2, 3};

	printf("%d\n", (a[0], a[0, 1], a[0, 1, 2], a[0, 1, 2, 3]));
}

```

-> All commas are comma operators in this case so the value of a[3] will be printed which is 3.


__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_
