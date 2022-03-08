#### Adresini aldığı yazıdan istenen bir karakteri silen _remove_char_ isimli işlevi yazınız:

```
char *remove_char(char *p, int ch);
```

+ İşlevin birinci parametresi silme işleminin uygulanacağı yazının adresi.
+ İşlevin ikinci parametresi silinecek karakter.
+ İşlevin geri dönüş değeri üzerinde işlem yapılmış olan yazının adresi.

Yazdığınız işlevi aşağıdaki kodla test edebilirsiniz:

```
int main()
{
	char str[] = "babama bak babama";

	puts(remove_char(str, 'a')); //bbm bk bbm
	puts(remove_char(str, 'b')); //m k m
	puts(remove_char(str, ' ')); //mkm
	puts(remove_char(str, 'm')); //k;
}
```
