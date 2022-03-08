Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <stdio.h>
 
int main()
{
	int a = 38;
	int b = 10;
	int c = 1;
 
	int e;
 
	e = ++a % b-- >> c;
 
	printf("%d\n", e);
}
```


__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_
