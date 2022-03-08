Adresini aldığı bir yazının tersini standart çıkış akımına yazdıran rputs isimli özyinelemeli __(recursive)__ bir işlev yazınız:

```
char *rputs(const char *p);
```

Yazdığınız işlevi aşağıdaki kodla test edebilirsiniz:

```
#include <stdio.h>

void rputs(const char *p);
 
int main()
{
	rputs("alican"); //nacila
	putchar('\n');
	rputs("tras neden sart"); //tras neden sart
	putchar('\n');
}
```
