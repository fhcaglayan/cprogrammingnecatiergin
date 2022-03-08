#### Aşağıda belirtilen işlevsel makroları `(functional - function-like macros)` tanımlayınız:

+ standart *isupper* işlevinin yerine geçecek *is_upper* isimli makro
#define	ISUPPER(c)	((c) >= 'A' && (c) <= 'Z')


+ standart *toupper* işlevinin yerine geçecek *to_upper* isimli makro
#define	TOUPPER(c)	((c) >= 'a' && (c) <= 'z' ? (c) - 'a' + 'A' : (c))


+ 3 sayıdan en büyüğünü hesaplayan *max3* isimli makro
#define MAX3(a, b, c, d)	((a) > (b) ? (a) > (c) ? (a) : (c) : (b) > (c) ? (b) : (c))

or better:

#define MAX2(a, b)	((a) > (b) ? (a) : (b))
#define MAX3(a, b, c)	MAX2(MAX2((a), (b)), (c))


+ 4 sayıdan en büyüğünü hesaplayan *max4* isimli makro
#define MAX2(a, b)	((a) > (b) ? (a) : (b))
#define MAX4(a, b, c, d)	MAX2(MAX2((a), (b)), MAX2((c), (d)))


+ `clamp` isimli makro:	*clamp(val, low, high)* ifadesinin değeri 
	+ `val <= low ise low`
	+ `val >= high ise high`
	+ `aksi halde val olmalı`
#define CLAMP(val, low, high)	((val) <= (low) ? (low) : (val) >= (high) ? (high) : (val))


+ _is_triangle_ isimli makro: </br>
```
is_triangle(a, b, c)
````
#define ISTRIANGLE(a, b, c)	(((a) + (b) > (c) && (a) + (c) > (b) && (b) + (c) > (a))

ifadesinin değeri
+ eğer `a b c` kenar uzunlukları geçerli bir üçgen oluşturuyor ise _1_
+ eğer `a b c` kenar uzunlukları geçerli bir üçgen oluşturmuyor _0_ ise olmalı.
	
