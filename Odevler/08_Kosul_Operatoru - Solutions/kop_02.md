### Aşağıdaki ifadaleri koşul operatörünü kullanarak yazınız:

**_y_ yıl değerini tutan değişken ve _int isleap(int)_ artık yıl test fonksiyonu olmak üzere**
+ Şubat ayının gün sayısı değerinde olan ifade		isleap(y) ? 29 : 28
+ Yılın gün sayısı olan ifade						isleap(y) ? 366 : 365

**_x_ ve _y_ tamsayı değişkenler olmak üzere**
+ _x_ ve _y_'nin büyüğü _(max)_						x > y ? x : y


### Aşağıdaki ifadaleri ise koşul operatörünü kullanmadan yazınız:

**_c_ bir karakterin _ASCII_ kod numarası olmak üzere**
	
+ _c_'nin büyük harf karakteri olup olmadığını sınayan ifade			->	isupper(c)	->	c >= 'A' && c <= 'Z'
+ _c_'nin harf karakteri olup olmadığını sınayan ifade					->	isalpha(c)	->	(c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')	->	This is wrong because there are six more characters between small and big letters c >= 'a' && c <= 'Z'
+ _c_'nin rakam karakteri olup olmadığını sınayan ifade					->	isdigit(c)	->	c >= '0' && c <= '9'
+ _c_'nin rakam ya da harf karakteri olup olmadığını sınayan ifade		->	isalnum(c)	->	(c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
+ _c_'nin _hex_ karakter olup olmadığını sınayan ifade					->	isxdigit(c)	->	(c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')

[Ödevin cevabı](https://vimeo.com/455271631)

