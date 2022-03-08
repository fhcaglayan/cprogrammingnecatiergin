/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_10 odevi
 *
 */


#include <stdio.h>
#include <futility.h>

int main()
{
    for(unsigned long long i = 1ull; i <= 100000ull; i++)
        if(is_factorian(i))
            printf("The number %d is a factorian number\n", i);
}