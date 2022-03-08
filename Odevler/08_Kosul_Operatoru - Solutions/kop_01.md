Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include<stdio.h>
 
int main()
{
	int num = 30;
	int ival = (num > 5 ? num <= 10 ? 10 : 20 : 50);
	// means: int ival = (num > 5 ? (num <= 10 ? 10 : 20) : 50);

 
	printf("%d\n", ival);
}
```


__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_

[ödevin cevabı](https://vimeo.com/455268136)
