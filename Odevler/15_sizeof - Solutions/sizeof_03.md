_T_ bir tür olmak üzere

```
sizeof(T)
```

ifadesi ile aynı değeri üretecek _sizeof_ işlecini _(operatörünü)_ kullanmayan bir ifade oluşturun:

-> (size_t)(1 + ((T*)0))
https://stackoverflow.com/questions/1219199/size-of-a-datatype-without-using-sizeof

-> #define sizeof_var( var ) ((size_t)(&(var)+1)-(size_t)(&(var)))
https://stackoverflow.com/questions/1393394/how-to-find-the-size-of-a-variable-without-using-sizeof


+ Oluşturduğunuz ifadenin türü _size_t_ olmalı
+ Oluşturduğunuz ifade tanımsız davranış _(undefined behavior)_ oluşturmamalı.
