#### Aşağıda bildirimi verilen _remove_str_ isimli işlevin kodunu yazınız:

```
char * remove_str(char *pstr, const char *pdel);
```

+ _remove_str_ işlevi birinci parametresine gönderilen adresteki yazının içinden ikinci parametresine adresi geçilen yazıyı (varsa) silecek.
+ Eğer _pstr_ adresi içindeki yazıda pdel adresindeki yazı birden fazla geçiyorsa silme işlemi yalnızca birinci yazı için gerçekleştirilecek.
+ Eğer silinecek yazı _pstr_ adresinde yer almıyorsa işlev bir silme işlemi gerçekleştirmeyecek.
+ İşlevin geri dönüş değeri içinde silme işlemi gerçekleştirilmiş yazının adresi. _(pstr adresi)_
+ Tanımladığınız işlev içinde standart C işlevlerine çağrı yapabilirsiniz.
+Tanımladığınız işlevi aşağıdaki kodla test edebilirsiniz:

```
#include <stdio.h>
#include <string.h>

char *removeStr(char *ptr, const char *p);

int main()
{
	char s1[] = "bugun pazartesi gunu";
	char s2[] = "ali 2345metin 2345";

	puts(removeStr(s1, "tesi")); // bugun pazar gunu
	puts(removeStr(s2, "2345")); //ali metin 2345
}
```
