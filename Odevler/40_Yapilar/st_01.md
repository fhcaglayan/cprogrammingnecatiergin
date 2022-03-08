#### _Duration_ ismi verilen yapı _(structure)_ türünden nesneler süre değerlerini tutmaktadır. Tutulan süre gün, saat, dakika ve saniye olarak ifade edilmektedir. Örneğin _Duration_ türünden bir nesnenin değeri _3_ gün _12_ saat _45_ dakika _17_ saniye olabilir.
Bu yapı türünün öğelerini _(members)_ kendiniz tasarlayabilirsiniz. 
Modülün müşteri kodlar için oluşturulmuş arayüzünde _(duration.h)_ bildirilecek aşağıdaki işlevleri önce tasarlayınız. 
Her bir işlevin kodunu yazınız. Yazdığınız her bir işlevi yazacağınız test kodlarıyla test ediniz:

__print_duration__ </br>
Bu işlev bir _Duration_ nesnesinin değerini şu formatta standart çıkış akımına yazdırır: 
```
3 gün 21 saat 34 dakika 40 saniye
```

__get_day__</br>
Bu işlev tutulan süreye ilişkin gün verisini geri dönüş değeri ile kendisini çağıran koda aktarır.

__get_hour__</br>
Bu işlev tutulan süreye ilişkin saat verisini geri dönüş değeri ile kendisini çağıran koda aktarır.

__get_minute__</br>
Bu işlev tutulan süreye ilişkin dakika verisini geri dönüş değeri ile kendisini çağıran koda aktarır.

__get_second__</br>
Bu işlev tutulan süreye ilişkin saniye verisini geri dönüş değeri ile kendisini çağıran koda aktarır.

__get_sum__ </br>
Bu işlev iki sürenin toplamını hesaplayarak kendisini çağıran koda aktarır.

__get_difference__ </br>
Bu işlev iki süre arasındaki farkı _“saniye”_ olarak geri dönüş değeri ile kendisini çağıran koda aktarır.

__duration_to_second__ </br>
Bu işlev bir süre değerini saniyeye dönüştürerek geri dönüş değeri ile kendisini çağıran koda aktarır.

__duration_to_string__</br>
Bu işlev bir süre değerini yukarıda belirtilen formatta bir yazıya dönüştürerek kendisini çağıran koda aktarır.
