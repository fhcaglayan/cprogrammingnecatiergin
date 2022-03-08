Bir yazının sonunda başka bir yazının olup olmadığını test eden _is\_at\_end_ isimli işlevi tanımlayınız.

```
int is_at_end(const char *p1, const char *p2);
```

İşlev p1 yazısının sonunda p2 yazısı varsa sıfır dışı bir değere aksi halde sıfır değerine geri döner.

Tanımladığınız işlevi aşağıdaki kod ile test edebilirsiniz:

```
#include <stdio.h>

int is_at_end(const char *p1, const char *p2);

int main()
{
	printf("%d", !!is_at_end("necati ergin", "ergin"));
	printf("%d", !!is_at_end("kahramanmaras", "maras"));
	printf("%d", !!is_at_end("kaanaslan", "uslan"));
	printf("%d", !!is_at_end("baskent Ankara", "kara"));
	printf("%d", !!is_at_end("ergin", "necati ergin"));
}
```

Programınızın çıktısı 
```
11010
```
olmalı.
