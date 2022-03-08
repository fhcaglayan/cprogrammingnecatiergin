#### Bu ödev sorusu işlev gösterici dizilerinin *(function pointer arrays)* kullanımına yönelik:
Standart *ctype.h* başlık dosyasında bildirilen standart karakter test işlevlerinin isimleriyle çağrılabildiği bir kod yapısı oluşturun. Standart karakter test işlevleri şunlardır:

+ isupper
+ islower
+ isalpha
+ isdigit
+ isalnum
+ isxdigit
+ isspace
+ isblank
+ ispunct
+ isprint
+ isgraph
+ iscntrl

#### Aşağıda bir karakter test işlevinin ismiyle çağrılabilmesi için kullanabileceğiniz test amaçlı bir kod yer alıyor:

```
#include <ctype.h>
#include <stdio.h>

int main()
{
	char str[20];
	int ch;

	printf("enter a character: "); 
	ch = getchar();
	printf("enter the name of a test function: ");
	scanf("%s", str);
	   
}
``` 

#### Örnek ekran çıktıları:

```
enter a character: X
enter the name of a test function: isupper
the result of isupper test for 'X' is true

enter a character: 5
enter the name of a test function: isdigit
the result of isdigit test for '5' is true

enter a character: p
enter the name of a test function: ispunct
the result of ispunct test for 'p' is false
```
