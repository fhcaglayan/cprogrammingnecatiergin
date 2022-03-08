/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_08 odevi
 *
 */

#include <stdio.h>
#include <futility.h>

int main()
{
    for(int i = 0; i <= 10000; i++)
    {
        if(is_smith(i))
            printf("%d ", i);
    }
}