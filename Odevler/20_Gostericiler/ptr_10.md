Birinci parametresine adresi gönderilen yazının başına ikinci parametresine adresi gönderilen yazıyı ekleyen _strprep_ isimli işlevi tanımlayınız.

``` 
char *strprep(char *p1, const char *p2);
``` 

+ İşlevin birinci parametresi başına ekleme yapılacak yazının adresi
+ İşlevin ikinci parametresi eklenecek yazının adresi
+ İşlevin geri dönüş değeri başına ekleme yapılmış yazının adresi (yani _p1_ adresi)

+ İşlevin tanımı içinde standart C işlevlerine çağrı yapabilirsiniz.
+ Yazdığınız kodu test etmek için aşağıdaki _main_ işlevini kullanabilirsiniz.

```
#include <stdio.h>
#include <string.h>

#define		SIZE		200

char *strprep(char *p1, const char *p2);

int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("iki yazi girin : "); //tayyip recep
	scanf("%s%s", s1, s2);
	puts(strprep(s1, s2)); //receptayyip
}
```
