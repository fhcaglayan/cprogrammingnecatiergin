Aşağıdaki program derlenip çalıştırıldığında ekran çıktısı ne olur?
  
```
#include <stdio.h>

int main()
{
	int x = 333;

	printf("%d", printf("%d", printf("%d", x)));
	
	// 333 3 1 --> 33331
}

```
