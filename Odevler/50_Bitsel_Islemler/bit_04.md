Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <stdio.h>
 
int main()
{
	int x, y, z;
 
	x = 3; y = 2; z = 1;
	printf("%d\n", x | y & z);
 
	printf("%d\n", x | y & ~z);
 
	printf("%d\n", x ^ y & ~z);
 
	printf("%d\n", x & y && z);
 
	printf("%d\n", ~x | x);
 
	printf("%d\n", x ^ x);
}
```


__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>

+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_
