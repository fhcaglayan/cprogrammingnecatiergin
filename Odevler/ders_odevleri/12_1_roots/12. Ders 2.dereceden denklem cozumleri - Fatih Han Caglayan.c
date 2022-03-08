/*
 * Author: Fatih Han Caglayan
 * Exercise: Ders 12 2. dereceden denklemlerin cozumleri
 * ax^2 + bx + c
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    int D;

    printf("2. dereceden denkleminizin tam sayi olan a, b ve c kat sayilarini girin: ");
    scanf("%d%d%d", &a, &b, &c);

    D = b * b - 4 * a * c;

    if(D < 0) {
        printf("Denkleminizin gercek koku yok\n");
    }
    else if(D == 0){
        printf("Denkleminizin tek koku %f\n", (float) -b / (2 * a));
    }
    else {
        printf("Denkleminizin birinci koku = %f ve ikinci koku = %f\n", (float)(-b + sqrt(D)) / (2 * a), (float)(-b - sqrt(D)) / (2 * a));
    }
}