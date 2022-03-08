Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <stdio.h>
 
int main()
{
	int x = -1;
 
	if (x >> 1 > x)
		printf("dogru");
	else
		printf("yanlis");
}
```


__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_
