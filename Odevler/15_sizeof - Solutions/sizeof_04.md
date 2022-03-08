#### Aşağıdaki programın ekran çıktısı ne olur?

```
#include<stdio.h>

#define asize(a)	(sizeof(a) / sizeof(*a))

int a[] = {1, 2, 3, 4, 5};

int main()
{
	for (int k = -1; k <= asize(a) - 2; ++k)
		printf("%d\n", a[k + 1]);
}
```

-> hic bir ciktisi olmaz, cunku sizeof geri donus degeri unsigned
-1 hepsi bir signed bir integer, unsigned'a donusturulurken cok buyuk bir pozitif sayi olur

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_

[Ödevin Cevabı](https://vimeo.com/455404188)
