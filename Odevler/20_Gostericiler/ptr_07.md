#### _strstr_ bildirimi _string.h_ dosyası içinde bulunan standart bir C işlevidir.

```
char *strstr(const char *s1, const char *s2);
```


+ İşlev _s1_ adresindeki yazı içinde _s2_ adresindeki yazıyı arar.
+ Eğer aranılan yazı bulunursa işlevin geri dönüş değeri _s1_ yazısı içinde _s2_ yazısının başladığı yerin adresidir.
+ Eğer yazı bulunmazsa işlev _NULL_ adresi döndürür.

__İşlevi _mystrstr_ ismiyle tanımlayınız.__ </br>
Yazdığınız işlevi aşağıdaki kod ile test edebilirsiniz:

```
#include <stdio.h>

char *mystrstr(const char *s1, const char *s2);

int main()
{
	char str[] = "You can only be afraid of what you think you know";
	char *p = mystrstr(str, "be");

	if (p) {
		printf("bulundu...indis = (%d) (%s)\n", p - str, p);
	}
	else {
		printf("bulunamadi\n");
	}
}
```
